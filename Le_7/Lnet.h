


#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
//#include <random>
#include <time.h>
#include <float.h>
//#include "ap_cint.h"
//#include "mat.h"
//#include "minst.h"


//#define eta 1
//#define eta2 1
//#define eta3 1
#define eta 0.002f
#define eta2 0.001f
#define eta3 0.025f
#define renewonece 0.02f

//s2到c3的网络连接表，非全连接，同时消除对称性，避免过拟合

//C1卷积层:输入32X32图像,6个卷积核6个偏置,存在(5X5+1)X6参数,该卷积层是全连接
//卷积输出图像为28X28
/*int table[6][16]={{1,0,0,0,1,1,1,0,0,1,1,1,1,0,1,1},
				  {1,1,0,0,0,1,1,1,0,0,1,1,1,1,0,1},
				  {1,1,1,0,0,0,1,1,1,0,0,1,0,1,1,1},
				  {0,1,1,1,0,0,1,1,1,1,0,0,1,0,1,1},
				  {0,0,1,1,1,0,0,1,1,1,1,0,1,1,0,1},
				  {0,0,0,1,1,1,0,0,1,1,1,1,0,1,1,1}};*/
typedef struct c1_layer
{
	//float d0[32][32];
	float mapData[6][5][5];//特征模块数据，即6个卷积核
	float dmapData[6][5][5];//特征模块数据，即6个卷积核
	//float **map_2;
	//float dmapData[6][5][5];//存放特征模块的数据的局部梯度
	float bias[6];//偏置,一个特征图共享一个偏置参数
	float dbias[6];//偏置,一个特征图共享一个偏置参数
	float v[6][28][28];//进入激活函数的输入值
	float y[6][28][28];//激活函数后神经元的输出
	float d[6][28][28];//网络的局部梯度,δ值
	//float d_c[6][28][28];
	//float ef[6][28][28];
}c1_layer;

//S2平均池化层:输入使用上一层C1的激活后输出即c1_layer.d
//池化不重叠，图像缩小一倍输出为14X14

typedef struct s2_layer
{
	//float input_img[6][28][28];
	//float weig[6];//6个权重，同一特征图使用同一权重
	//float dweig[6];//6个权重，同一特征图使用同一权重
	//float bias[6];//6个偏置，同一特征图使用同一偏置
	//float dbias[6];//6个偏置，同一特征图使用同一偏置
	float v[6][14][14];//进入激活函数的输入值
	float y[6][14][14];//激活函数后神经元的输出
	float d[6][14][14];//网络的局部梯度,δ值
	//float d_c[6][14][14];
	//float ef[6][14][14];
	//float db[16];
}s2_layer;

//C3卷积层:非全连接卷积层，使用table表，为1处为有一个连接，存在
//(5x5x3+1)x6 + (5x5x4 + 1) x 3 + (5x5x4 +1)x6 + (5x5x6+1)x1 = 1516个训练参数
//输入使用上一层的S2激活后输出即s2_layer.d
//卷积输出图像为10X10

typedef struct c3_layer
{
	//float input_img[6][14][14];
	//int table[6][16];
	float mapData[16][6][5][5];//特征模块数据，即(3*6+4*6+4*3+6*1)个卷积核,多余的为空,便于取卷积核
	float dmapData[16][6][5][5];//存放特征模块的数据的局部梯度
	float bias[16];//16个偏置，同一特征图使用同一偏置
	float dbias[16];//16个偏置，同一特征图使用同一偏置
	float v[16][10][10];//进入激活函数的输入值
	float y[16][10][10];//激活函数后神经元的输出
	float d[16][10][10];//网络的局部梯度,δ值
	//float d_c[16][10][10];
	//float ef[16][10][10];
}c3_layer;

//S4平均池化层:输入使用上一层C3的激活后输出即c3_layer.d
//池化不重叠，图像缩小一倍输出为5X5

typedef struct s4_layer
{
	//float input_img[16][10][10];
	//float weig[16];//16个权重，同一特征图使用同一权重
	//float dweig[16];//16个权重，同一特征图使用同一权重
	//float bias[16];//16个偏置，同一特征图使用同一偏置
	//float dbias[16];//16个偏置，同一特征图使用同一偏置
	float v[16][5][5];//进入激活函数的输入值
	float y[16][5][5];//激活函数后神经元的输出
	float d[16][5][5];//网络的局部梯度,δ值
	//float d_c[16][5][5];
	//float ef[16][5][5];
	//float db[16];
}s4_layer;

//C5卷积层:全连接卷积层，存在(5x5x16+1)x120 = 48120个参数
//输入使用上一层的S2激活后输出即s4_layer.d
//卷积输出为1维向量120位数组

typedef struct c5_layer
{
	//float input_img[16][5][5];
	float mapData[30][16][5][5];//特征模块数据，即16*120个卷积核
	float dmapData[30][16][5][5];
	float bias[30];//120个偏置，同一输出使用同一偏置
	float dbias[30];
	float v[30];//进入激活函数的输入值
	float y[30];//激活函数后神经元的输出
	float d[30];//网络的局部梯度,δ值
	//float d_c[120];
	//float ef[120];
}c5_layer;

//F6经典一维全连接神经网络,输出7X12点阵比特图即84位一维向量
//该层的训练参数和连接数是(120 + 1)x84=10164
//输入使用上一层的S2激活后输出即C5_layer.d

/*typedef struct F6_layer
{
	//float input[120];
	float weig[120][84];//权重120X84个权重
	float bias[84];//84个偏置，同一输出使用同一偏置
	float v[84];//进入激活函数的输入值
	float y[84];//激活函数后神经元的输出
	float d[84];//网络的局部梯度,δ值
	//float db[84];//网络的局部梯度,δ值
}F6_layer;*/

typedef struct RBF_layer
{
	//float input[84];
	//float wei[84][10];//权重
	float wei[30][10];//权重
	float dwei[30][10];//权重
	float bias[10];
	float dbias[10];
	float v[10];//进入激活函数的输入值
	float y[10];//激活函数后神经元的输出

	float d[10];//网络的局部梯度,δ值
	//float d_c[10];
	//float ef[10];
	//float jtemp;
}RBF_layer;


//LeNet-5 CNN结构
/*typedef struct cnn_network{

	c1_layer* C1;
	s2_layer* S2;
	c3_layer* C3;
	s4_layer* S4;
	c5_layer* C5;
	//F6_layer* F6;
	RBF_layer* output;

	float input_img[32][32];//标准32位输入图像
	//float bit[10];
	float acvau[10];//实际结果
	float eO[10];
	float eF[10]; // 训练误差
	float* L; // 瞬时误差能量
}CNN;*/

/*typedef struct train_opts{
	int numepochs; // 训练的迭代次数
	float alpha; // 学习速率
}CNNOpts;*/


//void CNNs(c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output,float input_img[32][32],float acvau[10],float eF[10],int renew,float *JL);
void CNNs(c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output,float input_img[32][32],unsigned int right);
//C1卷积层正向传播
void C1_conv(c1_layer* C1,float inputimg[32][32]);
//S2池化层正向传播
void S2_pool(c1_layer* C1,s2_layer* S2);
//C3卷积层正向传播
void C3_conv(s2_layer* S2,c3_layer* C3);
//S4池化层正向传播
void S4_pool(c3_layer* C3,s4_layer* S4);
//C5卷积层正向传播
void C5_conv(s4_layer* S4,c5_layer* C5);
//F6输出层正向传播
//void f6_layer(c5_layer* C5,F6_layer* F6);
//F6的反向网络梯度δ求解
//void DF6_layer(F6_layer* F6,RBF_layer* output);
//void DF6_layer(c5_layer* C5,RBF_layer* output);
//C5的反向网络梯度δ求解
//void DC5_layer(c5_layer* C5,F6_layer* F6);
void DC5_layer(c5_layer* C5,RBF_layer* output);
//void DC5_c(c5_layer* C5,RBF_layer* output,float acvau[10],float eF[10]);
//S4的反向网络梯度δ求解
void DS4_layer(s4_layer* S4,c5_layer* C5);
//void DS4_c(s4_layer* S4,c5_layer* C5,RBF_layer* output,float acvau[10],float eF[10]);
//C3的反向网络梯度δ求解
void DC3_layer(c3_layer* C3,s4_layer* S4);
//void DC3_c(c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output,float acvau[10],float eF[10]);
//S2的反向网络梯度δ求解
void DS2_layer(s2_layer* S2,c3_layer* C3);
//void DS2_c(s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output,float acvau[10],float eF[10]);
//C1的反向网络梯度δ求解
void DC1_layer(c1_layer* C1,s2_layer* S2);
//void DC1_c(c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output,float acvau[10],float eF[10]);

//void in_layer(c1_layer* C1);
//C1卷积核及偏置更新
void update_C1(c1_layer* C1,float inputimg[32][32]);
//S2权重及偏置更新
void update_S2(c1_layer* C1,s2_layer* S2);
//C3卷积核及偏置更新
void update_C3(s2_layer* S2,c3_layer* C3);
//S4权重及偏置更新
void update_S4(c3_layer* C3,s4_layer* S4);
//C5卷积核及偏置更新
void update_C5(s4_layer* S4,c5_layer* C5);
//F5权重及偏置更新
//void update_F6(c5_layer* C5,F6_layer* F6);

//void O_layer(F6_layer* F6,RBF_layer* output);
void O_layer(c5_layer* C5,RBF_layer* output);
//void DO_layer(RBF_layer* output,float acvau[10],float eF[10]);
void DO_layer(RBF_layer* output,unsigned int right);
//void DO_c(RBF_layer* output,float acvau[10],float eF[10]);
//void update_OUT(F6_layer* F6,RBF_layer* output);
void update_OUT(c5_layer* C5,RBF_layer* output);

//void upadteall(c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output,float *JL);
void upadteall(c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output);
//void startup(CNN *cn);

//void loaddate(CNN *cn);
//void savedate(CNN *cn);
void correct(unsigned int right);

float Sigma(float input,float bas);
float sig(float j);
//float Sigma_2(float input,float bas);
float Sigma_3(float input,float bas);
float Dsigma(float y);
float Dsigma_2(float y);
float Dsigma_3(float input,float bas);
//int reverseunsigned charMNIST(int i);
void read_mnist(char* filename_img,char *filename_label,c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output);
//void read_date(c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,F6_layer* F6,RBF_layer* output);
void read_date(c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output);
//void save_date(c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,F6_layer* F6,RBF_layer* output);
void save_date(c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output);
//float **conv_1(float **a,int a_rows,int a_cols,float **b,int b_rows,int b_cols);
//float **conv_2(float **a,int a_rows,int a_cols,float **b,int b_rows,int b_cols);
//float **conv_3(float **a,int a_rows,int a_cols,float **b,int b_rows,int b_cols);
void sigmatest(float input);
//void dateport(float input_img[32][32],float acvau[10]);
void dateport(unsigned int date,unsigned char signal,unsigned short *led,unsigned char *signal_out);
void datereadc1(float date,unsigned char* signal);
void datereads2(float date,unsigned char* signal);
void datereadc3(float date,unsigned char* signal);
void datereads4(float date,unsigned char* signal);
void datereadc5(float date,unsigned char* signal);
void datereado(float date,unsigned char* signal);
void datereadinput(unsigned int date,unsigned char* signal);
void datereadacv(float date,unsigned char* signal);
float datewritec1(unsigned char* signal);
float datewrites2(unsigned char* signal);
float datewritec3(unsigned char* signal);
float datewrites4(unsigned char* signal);
float datewritec5(unsigned char* signal);
float datewriteo(unsigned char* signal);
