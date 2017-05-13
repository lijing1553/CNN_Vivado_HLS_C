
#include <stdio.h>
#include <stdlib.h>
#include "Lnet.h"
//#include <math.h>
//#include <time.h>
int xrandsed = 0;
#define PI 3.14159
float avg[28][28] = { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.00209999993, 0.00783333369, 0.00359999994, 0.000150000007, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0.00026666667, 0.000916666642, 0.00928333309, 0.0242833328, 0.0437166654, 0.0640999973, 0.120133333, 0.160733327, 0.174183339, 0.177433327, 0.18931666, 0.174150005, 0.186933339, 0.153650001, 0.10011667, 0.0712333322, 0.053816665, 0.021366667, 0.0100833336, 0.00353333331, 0, 0, 0, 0 }, { 0, 0, 0.00106666668, 0.000699999975, 0.00694999984, 0.00548333349, 0.0471000001, 0.138400003, 0.264183342, 0.506616652, 0.86680001, 1.29008329, 1.87035, 2.5299499, 3.20161676, 3.62555003, 3.72198343, 3.39254999, 2.80293322, 2.04438329, 1.20211661, 0.633449972, 0.296166658, 0.0939833298, 0.0352166668, 0.00863333326, 0, 0 }, { 0, 0, 0.00323333335, 0.00584999984, 0.0120166671, 0.069766663, 0.21208334, 0.54610002, 1.15441668, 2.21589994, 3.63963342, 5.4380002, 7.40705013, 9.69673347, 11.8830833, 13.2373667, 13.1246166, 11.8135166, 9.54366684, 6.86304998, 4.19364977, 2.27463341, 1.06103337, 0.413066655, 0.162083328, 0.0277666673, 0.0027999999, 0 }, { 0, 0.000633333344, 0.0052166665, 0.0143499998, 0.0808833316, 0.410216659, 1.04323328, 2.41928339, 4.77575016, 8.39441681, 13.3102665, 19.4773006, 27.036684, 35.2121658, 41.8408012, 45.2526016, 44.3388329, 39.141449, 31.3282166, 22.923933, 14.8310165, 8.66139984, 4.54796648, 2.13701677, 0.862900019, 0.207749993, 0.0296500009, 0.00203333329 }, { 0, 0, 0.0103166662, 0.0633499995, 0.395466655, 1.46340001, 3.58778334, 7.22781658, 13.0171165, 21.2179165, 31.5004005, 44.2063675, 58.9038506, 73.8041534, 85.1027298, 90.5997849, 88.9239349, 80.1812515, 65.9428177, 49.7938347, 34.3498344, 21.5100002, 12.390317, 6.63911676, 2.99271655, 0.843666673, 0.141633332, 0.00469999993 }, { 0, 0.000183333337, 0.0274999999, 0.221433327, 1.11951661, 3.28990006, 7.43646669, 14.2544336, 24.1377506, 37.288517, 53.1153984, 70.9128189, 89.2784653, 106.232964, 118.506119, 124.098152, 121.711334, 112.033333, 96.1081161, 75.1653671, 54.037117, 35.3124847, 20.9918995, 11.4424334, 5.38776684, 1.85558331, 0.372700006, 0.0303000007 }, { 0.000783333322, 0.019733334, 0.107666664, 0.595650017, 2.3124001, 5.92876673, 12.4360504, 22.4517994, 36.2947845, 53.8984184, 73.7647171, 94.1030807, 111.579483, 124.999916, 132.759109, 135.398697, 133.338654, 126.677536, 113.546669, 93.7442703, 69.7779312, 46.8328819, 28.1439171, 15.2010498, 7.03366661, 2.58303332, 0.513100028, 0.0318833329 }, { 0.00406666659, 0.0508166663, 0.329366654, 1.31735003, 3.74813342, 8.4834671, 16.8181839, 29.5974007, 46.9301491, 68.1070023, 90.2913818, 108.475716, 119.435417, 123.393852, 123.038048, 122.340652, 122.730049, 122.144096, 116.260933, 100.610603, 77.3180313, 52.8975983, 31.8106174, 16.357666, 7.18566656, 2.60661674, 0.481583327, 0.0271833334 }, { 0.00486666663, 0.0794666633, 0.512016654, 1.71938336, 4.44581652, 9.806633, 19.5264835, 34.504818, 54.700901, 78.138031, 99.0386963, 110.600464, 110.787552, 104.553619, 99.0472031, 99.388382, 104.333214, 110.882065, 111.07827, 99.1469193, 77.0405502, 52.7057648, 31.4484158, 15.3927164, 5.96113348, 1.89796662, 0.351833344, 0.0282166675 }, { 0.00666666683, 0.0985666662, 0.523033321, 1.67458332, 4.28908348, 9.87643337, 20.5393162, 37.1890335, 59.7151184, 83.398735, 100.225899, 103.168816, 93.8921356, 82.9528198, 79.4228363, 84.5250168, 93.8685837, 104.427536, 106.281181, 94.2218704, 71.8490677, 48.3172493, 28.4781837, 13.498167, 4.60050011, 1.15009999, 0.221833333, 0.0187333338 }, { 0.00593333319, 0.0763999969, 0.420883328, 1.28036666, 3.64608335, 9.55389977, 21.133234, 39.8545151, 64.0892181, 87.2096634, 98.7805862, 94.8668518, 81.6835327, 73.3427658, 76.1450653, 85.4255524, 97.2928009, 107.482582, 105.50943, 89.0295029, 64.9443512, 42.4968834, 25.3411007, 12.5802164, 3.98988342, 0.604533315, 0.124499999, 0.00816666707 }, { 0.00380000006, 0.0436833352, 0.242033333, 0.878816664, 3.06883335, 9.60744953, 22.7779827, 43.5750351, 68.9713364, 90.2566986, 97.8938141, 91.0827332, 79.706749, 79.3691177, 89.3386993, 101.714516, 113.037865, 117.5811, 107.42672, 84.5188828, 58.5871658, 38.2634506, 23.739233, 12.7121, 4.29471684, 0.44325, 0.0797833353, 0.0101666665 }, { 0.000533333339, 0.0182499997, 0.122616664, 0.607333362, 2.91783333, 10.6341667, 25.5538006, 47.5837173, 72.6322327, 91.6736526, 96.8884201, 91.0977325, 86.8673019, 96.9665527, 111.371834, 123.972069, 129.806549, 126.599548, 108.880333, 81.1576309, 55.2258682, 37.2046013, 23.9727993, 13.6437502, 5.10268354, 0.584699988, 0.0829833299, 0.0108666662 }, { 0.00188333332, 0.00824999996, 0.0541666672, 0.466183335, 3.06558323, 12.3512669, 28.5280666, 50.5083847, 73.750618, 90.3691864, 95.0769806, 93.2885361, 97.828949, 115.421318, 130.267242, 139.553604, 137.100632, 128.085754, 106.994514, 79.5539474, 56.0965652, 38.9430656, 25.537466, 14.61625, 5.72158337, 0.820299983, 0.0924500003, 0.0022166667 }, { 0.000733333349, 0.0038666667, 0.0450999998, 0.505583346, 3.56056666, 14.4081497, 30.9883175, 51.2096329, 71.4404297, 85.7322159, 91.3810349, 94.2424316, 105.047119, 123.204201, 135.689438, 139.110046, 131.804504, 121.436569, 101.340302, 78.3792648, 58.2829018, 41.2509346, 26.9801159, 14.8906002, 5.82828331, 1.07956672, 0.148216665, 0.0108333332 }, { 0.00066666666, 0.00396666676, 0.0743333325, 0.622966647, 4.46996689, 16.5289669, 32.5549164, 49.9447327, 66.3117142, 77.8862686, 83.7070465, 89.4484177, 101.136017, 115.857399, 126.473419, 127.426651, 121.056816, 111.218102, 95.3723297, 77.3547821, 59.6073341, 42.0403328, 26.7287674, 14.2431164, 5.61555004, 1.28709996, 0.191499993, 0.0122999996 }, { 0, 0.00728333322, 0.112199999, 0.953350008, 5.95223331, 18.5244007, 33.4511986, 48.1763496, 60.4605331, 69.2180328, 74.6814194, 80.736702, 89.5865479, 101.950417, 112.616501, 115.43692, 112.244835, 104.524147, 92.6265869, 77.2614822, 59.3285179, 40.8083, 24.9427509, 12.8347998, 5.15665007, 1.41666663, 0.210033327, 0.00888333376 }, { 0.00190000003, 0.00531666679, 0.180500001, 1.52014995, 7.62144995, 20.4178658, 34.9108315, 48.1825676, 58.2768517, 65.9944687, 71.7466354, 76.5832825, 83.1222, 95.1299362, 106.557198, 112.201385, 111.347931, 105.01828, 93.6185837, 76.6274338, 56.7010841, 37.7625656, 22.5467167, 11.3823338, 4.57905006, 1.29855001, 0.153933331, 0.0121833337 }, { 0.000250000012, 0.0121833337, 0.286316663, 2.04381657, 8.72351646, 21.7344666, 36.833168, 50.9790649, 62.3501511, 71.2715149, 77.8803024, 82.6346664, 89.9674301, 101.406319, 112.44548, 117.803452, 115.924614, 107.432503, 92.2773819, 71.8833008, 50.800251, 32.6939659, 18.7729664, 9.15635014, 3.64004993, 1.06850004, 0.146699995, 0.00683333352 }, { 0, 0.0152666671, 0.331999987, 2.25566673, 8.51305008, 20.6940842, 37.0852165, 53.7940331, 68.8694992, 81.1595993, 90.4059143, 97.8862991, 106.734566, 117.339516, 124.952415, 125.555748, 118.216248, 103.805832, 83.8763809, 61.2356491, 40.9524994, 24.9440327, 13.6286163, 6.5374999, 2.7138834, 0.749166667, 0.111683331, 0.00168333331 }, { 0.000533333339, 0.0126999998, 0.284233332, 1.83920002, 6.63258314, 16.9004841, 32.8094673, 51.5708847, 70.4237366, 87.2519989, 100.98513, 112.45575, 122.594002, 130.372299, 131.844894, 124.868034, 110.025803, 89.4660034, 66.5912704, 45.5973816, 28.5566673, 16.2958164, 8.51148319, 4.10908318, 1.70298338, 0.443816662, 0.0590500012, 0.000650000002 }, { 0.000516666682, 0.000983333332, 0.187083334, 1.08796668, 3.94443345, 10.8453665, 23.3906326, 40.6385345, 60.9691849, 81.0054016, 99.1114349, 113.100502, 122.524315, 125.302254, 120.613564, 107.185867, 87.7064133, 65.973053, 45.3337173, 28.7308159, 16.90345, 9.16145039, 4.70896673, 2.22501659, 0.835133314, 0.189116672, 0.0178333335, 0.00120000006 }, { 0, 0, 0.0641666651, 0.418766677, 1.73269999, 5.01473331, 12.0309162, 23.940134, 40.2565842, 58.8924828, 77.2688675, 92.0322037, 99.7043839, 99.1646652, 90.5921021, 75.5835037, 57.586132, 40.1938019, 25.4972324, 15.2398329, 8.52368355, 4.41923332, 2.20506668, 0.981649995, 0.31036666, 0.0579666682, 0.00961666647, 0 }, { 0, 0, 0.0158500001, 0.122199997, 0.543633342, 1.60084999, 4.20331669, 9.1435833, 16.8276157, 27.0768166, 38.1033821, 47.0437851, 51.6087494, 50.9622498, 45.4375839, 36.7445335, 27.4417839, 19.1085835, 12.11415, 7.21490002, 3.95933342, 1.99318337, 0.951233327, 0.399633348, 0.101816669, 0.0221833326, 0.00193333335, 0 }, { 0, 0, 0.00156666664, 0.0177833326, 0.127783328, 0.4745, 1.40550005, 3.18078327, 6.14340019, 9.82870007, 13.8693333, 16.7183342, 18.1000175, 17.7754002, 15.8076668, 13.1235504, 10.4980497, 7.79116678, 5.22193336, 3.16213322, 1.69133329, 0.825383306, 0.370583326, 0.139816672, 0.0312666669, 0.00356666674, 0.00173333334, 0 }, { 0, 0, 0, 0.000633333344, 0.0354500003, 0.16308333, 0.538283348, 1.19935, 2.31608343, 3.51143336, 4.85021687, 5.98023319, 6.44481659, 6.25923347, 5.57051659, 4.45076656, 3.53493333, 2.59181666, 1.70116663, 1.0086, 0.540283322, 0.238399997, 0.0752666667, 0.0161666665, 0.000516666682, 0.000983333332, 0, 0 }, { 0, 0, 0, 0, 0.00253333338, 0.0155833336, 0.041633334, 0.0891999975, 0.128216669, 0.196733341, 0.336016655, 0.429966658, 0.525983334, 0.590683341, 0.688033342, 0.592066646, 0.482733339, 0.343516678, 0.200433329, 0.088866666, 0.0456333347, 0.0192833338, 0.0151166664, 0.00200000009, 0, 0, 0, 0 } };

float GaussRand(double E, double D)
{

    int i, a;
    double f;double A, B, C,  r;
    double p[2];
    //srand((unsigned)time(NULL));
    for (i = 0; i<2;  xrandsed = xrandsed + 689)
    {
        a = rand() + xrandsed;  //加上689是因为系统产生随机数的更换频率远远不及程序调用函数的时间
        a = a%1000;
        f = (double)a;
        f = f / 1000.0;
        if(f==0&&i==0)
        	continue;
        p[i] = f;
        i++;
    }
    A = sqrt((-2)*log(p[0]));
    B = 2 * PI*p[1];
    C = A*cos(B);
    r = E + C*D;    //E,D分别是期望和方差
    if(isinf(r))
    	printf("error");
    return r;
}

float xaier(int n,int m)
{
	float t;
	float a;
	t=sqrt((double)6/(double)(n+m));
	//t=6.0/t;
	//srand((unsigned)time(NULL));
	//xrandsed = xrandsed + 689;
	a = (float)rand()/(float)RAND_MAX; //+ xrandsed;
	a=a*2;
	a=a-1;
	a=a*t;
	return a;
}
void getavg(FILE *p,int number_of_images,int n_rows,int n_cols)
{
	int i,r,c;
	unsigned char temp = 0;
	//FILE *q=fopen(filename_label,"rb");
    for(i=0;i<number_of_images;++i)
    {
    	//fread(tmp,1,n_rows*n_cols,p);
        for(r=0;r<n_rows;++r)
        {
        	//imgs[r]=(float*)malloc(n_cols*sizeof(float));
            for(c=0;c<n_cols;++c)
            {
                //unsigned char temp=0;
            	fread((char*) &temp, sizeof(temp),1,p);
            	avg[r][c]+=(float)temp;
                //fread(&imgs[r][c],sizeof(char),1,p);

            }
        }
    }
    for(r=0;r<n_rows;++r)
    {
    	//imgs[r]=(float*)malloc(n_cols*sizeof(float));
        for(c=0;c<n_cols;++c)
        {
            //unsigned char temp=0;
        	//fread((char*) &temp, sizeof(temp),1,p);
        	avg[r][c]=avg[r][c]/(float)number_of_images;
            //fread(&imgs[r][c],sizeof(char),1,p);

        }
    }

}
int reverseInt4MNIST(int i)
{
    unsigned char ch1, ch2, ch3, ch4;
    ch1 = i & 255;
    ch2 = (i >> 8) & 255;
    ch3 = (i >> 16) & 255;
    ch4 = (i >> 24) & 255;
    return ((int)ch1 << 24) + ((int)ch2 << 16) + ((int)ch3 << 8) + ch4;
}
float correct_rate(float *outres,int label,int i,int *t)
{
	int j;
	float h,m;
	int offset=0;
	//h=;
	h=-1.0;
	//h=outres[0]*outres[0];
	for(j=0;j<10;j++)
	{

		m=outres[j];//*outres[j];

		if(m>h)
		{
			h=m;
			offset=j;
		}
	}
	if(offset==label)
	{
		(*t)++;
	}
	return (float)(*t)/(float)i;
}
void read_mnist(char* filename_img,char *filename_label,c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output)
{
    FILE *p=fopen(filename_img,"rb");
    FILE *q=fopen(filename_label,"rb");
    //FILE *Jfp=fopen("D:\\vivado_hls\\Le_2\\JL","a+");
    //fclose(Jfp);
    float **imgs,imgin[32][32];
    float rate,JL;
    unsigned int *date;
    /*float resid[10][10]={{0,1,1,1,1,1,1,1,1,1},
    					{1,0,1,1,1,1,1,1,1,1},
    					{1,1,0,1,1,1,1,1,1,1},
    					{1,1,1,0,1,1,1,1,1,1},
    					{1,1,1,1,0,1,1,1,1,1},
    					{1,1,1,1,1,0,1,1,1,1},
    					{1,1,1,1,1,1,0,1,1,1},
    					{1,1,1,1,1,1,1,0,1,1},
    					{1,1,1,1,1,1,1,1,0,1},
    					{1,1,1,1,1,1,1,1,1,0}};
    float resid[10][10]={{1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0},
    					{-1.0,1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0},
    					{-1.0,-1.0,1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0},
    					{-1.0,-1.0,-1.0,1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0},
    					{-1.0,-1.0,-1.0,-1.0,1.0,-1.0,-1.0,-1.0,-1.0,-1.0},
    					{-1.0,-1.0,-1.0,-1.0,-1.0,1.0,-1.0,-1.0,-1.0,-1.0},
    					{-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,1.0,-1.0,-1.0,-1.0},
    					{-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,1.0,-1.0,-1.0},
    					{-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,1.0,-1.0},
    					{-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,-1.0,1.0}};*/
    float resid[10][10]={{1.0,0,0,0,0,0,0,0,0,0},
    					{0,1.0,0,0,0,0,0,0,0,0},
    					{0,0,1.0,0,0,0,0,0,0,0},
    					{0,0,0,1.0,0,0,0,0,0,0},
    					{0,0,0,0,1.0,0,0,0,0,0},
    					{0,0,0,0,0,1.0,0,0,0,0},
    					{0,0,0,0,0,0,1.0,0,0,0},
    					{0,0,0,0,0,0,0,1.0,0,0},
    					{0,0,0,0,0,0,0,0,1.0,0},
    					{0,0,0,0,0,0,0,0,0,1.0}};
    unsigned char temp = 0;
    unsigned char label;
    unsigned short right;
    unsigned char signal;
    int i,j,k,r,x,y,c,t,h;
    int iop;
    int rightres,start,finish,duration;
    int s_6 = clock();
    if (p!=NULL&&q!=NULL)
    {
        int magic_number_img=0,magic_number_label=0;
        int number_of_images=0,number_of_label=0;
        int n_rows=0;
        int n_cols=0;
        fread(&magic_number_img,sizeof(magic_number_img),1,p);
        magic_number_img= reverseInt4MNIST(magic_number_img);
        fread(&magic_number_label,sizeof(magic_number_label),1,q);
        magic_number_label= reverseInt4MNIST(magic_number_label);
        fread(&number_of_images,sizeof(number_of_images),1,p);
        number_of_images= reverseInt4MNIST(number_of_images);
        fread(&number_of_label,sizeof(number_of_label),1,q);
        number_of_label= reverseInt4MNIST(number_of_label);
        fread(&n_rows,sizeof(n_rows),1,p);
        n_rows= reverseInt4MNIST(n_rows);
        fread(&n_cols,sizeof(n_cols),1,p);
        n_cols= reverseInt4MNIST(n_cols);
        imgs=(float**)malloc(n_rows*sizeof(float*));
        //tmp=(unsigned char*)malloc(n_rows*n_cols);
        int tmp1=(32-n_rows)/2;
        int tmp2=(32-n_cols)/2;
        //int epoc;
        //float mtmp;
        //int acvau[10];
    	/*FILE *t8=fopen("D:\\vivado_hls\\Le_2\\avg","r");
    	if(t8!=NULL)
    	{
    		for(i=0;i<28;i++)
    			for(j=0;j<28;j++)
    				fread(&avg[i][j],sizeof(float),1,t8);
    	}
    	else
    	{
    		fclose(t8);
    		getavg(p,number_of_images,n_rows,n_cols);
    		fclose(p);
    		p=fopen(filename_img,"rb");
    		fread(&iop,sizeof(iop),1,p);
    		fread(&iop,sizeof(iop),1,p);
    		fread(&iop,sizeof(iop),1,p);
    		fread(&iop,sizeof(iop),1,p);
    		FILE *t8=fopen("D:\\vivado_hls\\Le_2\\avg","w");
    		for(i=0;i<28;i++)
    			for(j=0;j<28;j++)
    				fwrite(&avg[i][j],sizeof(float),1,t8);
    	}
    	fclose(t8);*/
        for(i=0,h=0;i<number_of_images;++i)
        {
        	//fread(tmp,1,n_rows*n_cols,p);
            for(r=0;r<n_rows;++r)
            {
            	imgs[r]=(float*)malloc(n_cols*sizeof(float));
                for(c=0;c<n_cols;++c)
                {
                    //unsigned char temp=0;
                	fread((char*) &temp, sizeof(temp),1,p);
                	imgs[r][c]=(float)temp-avg[r][c];

                    //fread(&imgs[r][c],sizeof(char),1,p);

                }
            }
            fread((char*) &label, sizeof(label),1,q);

            /*if(!(i%1000))
            {
            	fread(l2,sizeof(char),1000,q);

            }*/

            //fread(&label,sizeof(label),1,q);
            //int labeltmp=(int)l2[i%1000];
            //char *acres=(char *)malloc(sizeof(char));
            //itoa(labeltmp,acres,2);
            //float eF[10];
            for(y=0;y<32;y++)
            {
            	for(t=0;t<32;t++)
            	{
            		if(y<tmp1||31-y<tmp1||t<tmp2||31-t<tmp2)
            		{
            			imgin[y][t]=0;
            		}
            		else
            		{
            			imgin[y][t]=imgs[y-2][t-2];
            		}
                	date=(unsigned int*)&imgin[y][t];
                	dateport(*date,3,&right,&signal);
            	}
            }
            dateport(label,1,&right,&signal);
           start = clock();
            //CNNs(C1,S2,C3,S4,C5,output,imgin,resid[(int)label],eF,(i+1)%50,&JL);
            //CNNs(C1,S2,C3,S4,C5,output,imgin,resid[(int)label],(i+1)%50);
            finish = clock();
            duration = (double)(finish - start) / CLOCKS_PER_SEC;
            rate=(float)right/(float)i;
            //epoc=(i+1)/50;
            //if(e)
           /* if(!((i+1)%50))
            {
            	//if(i)
                FILE *Jfp=fopen("C:\\Users\\Acer\\Documents\\MATLAB\\JL.txt","a+");
                FILE *JfpX=fopen("C:\\Users\\Acer\\Documents\\MATLAB\\JL_X.txt","a+");

                if((((i+1)/50)%200)==1)
                {
                	fprintf(Jfp,"%lf",JL);
                	fprintf(JfpX,"%d",((i+1)/50)%200);
                }
                else
                {
                	fprintf(Jfp,",%lf",JL);
                	fprintf(JfpX,",%d",((((i+1)/50)%200))?(((i+1)/50)%200):200);
                }
                fclose(Jfp);
                fclose(JfpX);
            }*/
            /*if(!(i%1000)&&i!=0)
           {
            	//printf("\nout:%d,y:%lf,%lf,%lf,%lf,%lf,%lf\n%lf,%lf,%lf,%lf\n",(int)label,output->y[0],output->y[1],output->y[2],output->y[3],output->y[4],output->y[5],output->y[6],output->y[7],output->y[8],output->y[9]);
            	 for(j=0;j<n_rows;j++)
            	        	free(imgs[j]);
            	  free(imgs);
            	    fclose(p);
            	    fclose(q);
            	return ;

            }*/
            /*if(!(i%1000))
            {
            	printf("out:%d\n",i);

            }*/
            /*if(i==0)
            {
            	for(iop=0,mtmp=0;iop<10;iop++)
            	 {
            	      //eF[i]=output->y[i]-acvau[i];
            	      //output->d[i]=eF[i]*Dsigma(output->y[i]);
            	     // mtmp+=eF[iop]*eF[iop];
            	      mtmp+=(resid[(int)label][iop]*log(output->y[i])+(1-resid[(int)label][iop])*log(1-output->y[i]));
            	  }
            	 //mtmp=(mtmp/2);
            	 JL=-mtmp;
            }*/
            if(!(i%1000))
            {
            	printf("out:%d\n",i);
            	//FILE *Jfp=fopen("C:\\Users\\Acer\\Documents\\MATLAB\\JL.txt","w+");
            	//FILE *JfpX=fopen("C:\\Users\\Acer\\Documents\\MATLAB\\JL_X.txt","w+");
            	/*fprintf(Jfp,"%lf",JL);
            	fprintf(JfpX,"%d",(i%10000));*/
            	//fclose(Jfp);
            	//fclose(JfpX);
            }
        }
        printf("rate=%lf,h=%d\n",rate,right);
        int f_6 = clock();
        int d_6 = (double)(f_6 - s_6) / CLOCKS_PER_SEC;
        for(j=0;j<n_rows;j++)
        	free(imgs[j]);
        free(imgs);
       // free(tmp);

    }
    fclose(p);
    fclose(q);
    //for(i=0;i<)
    return ;
}


/*void read_date(c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output)
{
	FILE *t1=fopen("D:\\vivado_hls\\Le_2\\date_c1","rb");
	FILE *t2=fopen("D:\\vivado_hls\\Le_2\\date_s2","rb");
	FILE *t3=fopen("D:\\vivado_hls\\Le_2\\date_c3","rb");
	FILE *t4=fopen("D:\\vivado_hls\\Le_2\\date_s4","rb");
	FILE *t5=fopen("D:\\vivado_hls\\Le_2\\date_c5","rb");
	//FILE *t6=fopen("D:\\vivado_hls\\Le_2\\date_f6","rb");
	FILE *t7=fopen("D:\\vivado_hls\\Le_2\\date_o7","rb");

	int i,j,k,m,n,p,q;
	if((t1!=NULL) && (t2!=NULL) && (t3!=NULL) && (t4!=NULL) && (t5!=NULL) &&  (t7!=NULL))
	{
		fread(C1,sizeof(c1_layer),1,t1);
		fread(S2,sizeof(s2_layer),1,t2);
		fread(C3,sizeof(c3_layer),1,t3);
		fread(S4,sizeof(s4_layer),1,t4);
		fread(C5,sizeof(c5_layer),1,t5);
		fread(output,sizeof(RBF_layer),1,t7);
		/*for(i=0;i<6;i++)
		{
			for(j=0;j<5;j++)
			{
				for(k=0;k<5;k++)
				{
					fread(&(C1->mapData[i][j][k]),sizeof(float),1,t1);
				}
			}
		}
		for(i=0;i<6;i++)
		{
			fread(&(C1->bias[i]),sizeof(float),1,t1);
		}
		for(i=0;i<6;i++)
		{
			fread(&(S2->bias[i]),sizeof(float),1,t2);
		}
		for(i=0;i<6;i++)
		{
			fread(&(S2->weig[i]),sizeof(float),1,t2);
		}
		for(i=0;i<16;i++)
		{
			for(j=0;j<6;j++)
			{
				//if(table[j][i])
				//{
					for(k=0;k<5;k++)
					{
						for(n=0;n<5;n++)
						{
							fread(&(C3->mapData[i][j][k][n]),sizeof(float),1,t3);
						}

					}
				//}
			}
		}
		for(i=0;i<16;i++)
		{
			fread(&(C3->bias[i]),sizeof(float),1,t3);
		}
		for(i=0;i<16;i++)
		{
			fread(&(S4->bias[i]),sizeof(float),1,t4);
		}
		for(i=0;i<16;i++)
		{
			fread(&(S4->weig[i]),sizeof(float),1,t4);
		}
		for(i=0;i<120;i++)
		{
			for(j=0;j<16;j++)
			{
				for(k=0;k<5;k++)
				{
					for(n=0;n<5;n++)
					{
						fread(&(C5->mapData[i][j][k][n]),sizeof(float),1,t5);
					}
				}
			}

		}
		for(i=0;i<120;i++)
		{
			fread(&(C5->bias[i]),sizeof(float),1,t5);
		}
		/*for(i=0;i<120;i++)
		{
			for(j=0;j<84;j++)
			{
				fread(&(F6->weig[i][j]),sizeof(float),1,t6);
			}
		}
		for(i=0;i<84;i++)
		{
			fread(&(F6->bias[i]),sizeof(float),1,t6);
		}*/
		/*for(i=0;i<120;i++)
		{
			for(j=0;j<10;j++)
			{
				fread(&(output->wei[i][j]),sizeof(float),1,t7);
			}
		}
		for(i=0;i<10;i++)
		{
			fread(&(output->bias[i]),sizeof(float),1,t7);
		}
		//return 1;
	}
	else
	{
		//fclose(t1);
		//fclose(t3);
		//fclose(t5);
		//fclose(t6);
		//fclose(t7);
		//t1=fopen("D:\\vivado_hls\\Le_2\\date_c1","w+");
		//fclose(t1);
		//t1=fopen("D:\\vivado_hls\\Le_2\\date_c1","a+");
		//srand((unsigned)time(NULL));
		//fprintf(t1,"{");
		for(i=0;i<6;i++)
		{
			//fprintf(t1,"{");
			for(j=0;j<5;j++)
			{
				//fprintf(t1,"{");
				for(k=0;k<5;k++)
				{
					//C1->mapData[i][j][k]=xaier(1*5*5,6*5*5);
					C1->mapData[i][j][k]=GaussRand(0,0.01);
					//if(k==4)
						//fprintf(t1,"%.12f",C1->mapData[i][j][k]);
					//else
						//fprintf(t1,"%.12f,",C1->mapData[i][j][k]);
					//C1->mapData[i][j][k]=((float)rand()/RAND_MAX)*2.0-1.0;
					//C1->mapData[i][j][k]/=25;
					//fread(&(C1->mapData[i][j][k]),sizeof(float),1,t1);
				}
				if(j==4)
					fprintf(t1,"}");
				else
					fprintf(t1,"},");
			}
			if(i==5)
				fprintf(t1,"}");
			else
				fprintf(t1,"},");
		}
		fprintf(t1,"}");

		//FILE *t6=fopen("D:\\vivado_hls\\Le_2\\date_f6","rb");

		for(i=0;i<6;i++)
		{
			C1->bias[i]=0;
			//C1->bias[i]=GaussRand(0,0.01);
			//C1->bias[i]/=25;
			//fread(&(C1->bias[i]),sizeof(float),1,t1);
		}
		//for(i=0;i<6;i++)
		//{
		//	S2->bias[i]=GaussRand(0,0.01);
			///S2->bias[i]/=25;
			//fread(&(S2->bias[i]),sizeof(float),1,t2);
		//}
		//for(i=0;i<6;i++)
		//{
			//S2->weig[i]=xaier(6*28*28,6*14*14);
			//S2->weig[i]=((float)rand()/RAND_MAX)*2.0-1.0;
			//S2->weig[i]=GaussRand(0,0.1);
			//S2->weig[i]/=25;
			//fread(&(S2->weig[i]),sizeof(float),1,t2);
		//}
		t3=fopen("D:\\vivado_hls\\Le_2\\date_c5","w+");
		fprintf(t3,"{");
		for(i=0;i<16;i++)
		{
			fprintf(t3,"{");
			for(j=0;j<6;j++)
			{
				fprintf(t3,"{");
				//if(table[j][i])
				//{
					for(k=0;k<5;k++)
					{
						fprintf(t3,"{");
						for(n=0;n<5;n++)
						{
							//C3->mapData[i][j][k][n]=xaier(6*5*5,16*5*5);
							//C3->mapData[i][j][k][n]=((float)rand()/RAND_MAX)*2.0-1.0;
							C3->mapData[i][j][k][n]=GaussRand(0,0.01);
							if(k==4)
								fprintf(t3,"%.12f",C3->mapData[i][j][k]);
							else
								fprintf(t3,"%.12f,",C3->mapData[i][j][k]);
							//C3->mapData[i][j][k][n]/=25;
							//fread(&(C3->mapData[i][j][k][n]),sizeof(float),1,t3);
						}
						if(n==4)
							fprintf(t3,"}");
						else
							fprintf(t3,"},");

					}
					if(k==4)
						fprintf(t3,"}");
					else
						fprintf(t3,"},");
				//}
			}
			if(j==4)
				fprintf(t3,"}");
			else
				fprintf(t3,"},");
		}
		fprintf(t3,"}");
		for(i=0;i<16;i++)
		{
			C3->bias[i]=0;
			//C3->bias[i]=GaussRand(0,0.01);
			//C3->bias[i]/=25;
			//fread(&(C3->bias[i]),sizeof(float),1,t3);
		}
		//for(i=0;i<16;i++)
		//{
		//	S4->bias[i]=GaussRand(0,0.01);
			//S4->bias[i]/=25;
			//fread(&(S4->bias[i]),sizeof(float),1,t4);
		//}
		//for(i=0;i<16;i++)
		//{
			//S4->weig[i]=xaier(16*5*5,16*5*5);
			//S4->weig[i]=((float)rand()/RAND_MAX)*2.0-1.0;
			//S4->weig[i]=GaussRand(0,0.1);
			//S4->weig[i]/=25;
			//fread(&(S4->weig[i]),sizeof(float),1,t4);
		//}
		t5=fopen("D:\\vivado_hls\\Le_2\\date_c5","w+");
		fprintf(t5,"{");
		for(i=0;i<30;i++)
		{
			fprintf(t5,"{");
			for(j=0;j<16;j++)
			{
				fprintf(t5,"{");
				//if(table[j][i])
				//{
					for(k=0;k<5;k++)
					{
						fprintf(t5,"{");
						for(n=0;n<5;n++)
						{
							//C3->mapData[i][j][k][n]=xaier(6*5*5,16*5*5);
							//C3->mapData[i][j][k][n]=((float)rand()/RAND_MAX)*2.0-1.0;
							C5->mapData[i][j][k][n]=GaussRand(0,0.01);
							if(k==4)
								fprintf(t5,"%.12f",C5->mapData[i][j][k]);
							else
								fprintf(t5,"%.12f,",C5->mapData[i][j][k]);
							//C3->mapData[i][j][k][n]/=25;
							//fread(&(C3->mapData[i][j][k][n]),sizeof(float),1,t3);
						}
						if(n==4)
							fprintf(t5,"}");
						else
							fprintf(t5,"},");

					}
					if(k==4)
						fprintf(t5,"}");
					else
						fprintf(t5,"},");
				//}
			}
			if(j==4)
				fprintf(t5,"}");
			else
				fprintf(t5,"},");
		}
		fprintf(t5,"}");
		/*for(i=0;i<30;i++)
		{
			for(j=0;j<16;j++)
			{
				for(k=0;k<5;k++)
				{
					for(n=0;n<5;n++)
					{
						//C5->mapData[i][j][k][n]=xaier(16*5*5,120);
						//C5->mapData[i][j][k][n]=((float)rand()/RAND_MAX)*2.0-1.0;
						C5->mapData[i][j][k][n]=GaussRand(0,0.01);
						//C5->mapData[i][j][k][n]/=25;
						//fread(&(C5->mapData[i][j][k][n]),sizeof(float),1,t5);
					}
				}
			}

		}
		for(i=0;i<120;i++)
		{
			C5->bias[i]=0;
			//C5->bias[i]=GaussRand(0,0.01);
			//C5->bias[i]/=25;
			//fread(&(C5->bias[i]),sizeof(float),1,t5);
		}
		/*for(i=0;i<120;i++)
		{
			for(j=0;j<84;j++)
			{
				F6->weig[i][j]=GaussRand(0,0.01);
				//F6->weig[i][j]/=25;
				//fread(&(F6->weig[i][j]),sizeof(float),1,t6);
			}
		}
		for(i=0;i<84;i++)
		{
			F6->bias[i]=0;
			//F6->bias[i]/=25;
			//fread(&(F6->bias[i]),sizeof(float),1,t6);
		}
		t7=fopen("D:\\vivado_hls\\Le_2\\date_o7","rb");
		fprintf(t7,"{");
		for(i=0;i<30;i++)
		{
			fprintf(t7,"{");
			for(j=0;j<10;j++)
			{
				//output->wei[i][j]=xaier(120,10);
				//output->wei[i][j]=((float)rand()/RAND_MAX)*2.0-1.0;
				output->wei[i][j]=GaussRand(0,0.01);
				if(j==10)
					fprintf(t7,"%.12f",output->wei[i][j]);
				else
					fprintf(t7,"%.12f,",output->wei[i][j]);
				//output->wei[i][j]/=5;
				//fread(&(output->wei[i][j]),sizeof(float),1,t7);
			}
			if(i==4)
				fprintf(t7,"}");
			else
				fprintf(t7,"},");
		}
		fprintf(t7,"}");
		for(i=0;i<10;i++)
		{
			output->bias[i]=0;
			//output->bias[i]=GaussRand(0,0.01);
			//output->bias[i]/=25;
			//fread(&(output->bias[i]),sizeof(float),1,t7);
		}

	}
	fclose(t1);
	fclose(t2);
	fclose(t3);
	fclose(t4);
	fclose(t5);
	//fclose(t6);
	fclose(t7);
	free(t1);
		free(t3);
		free(t4);
		free(t5);
		free(t7);
}

void save_date(c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output)
{
	FILE *t1=fopen("D:\\vivado_hls\\Le_2\\date_c1","wb");
	FILE *t2=fopen("D:\\vivado_hls\\Le_2\\date_s1","wb");
	FILE *t3=fopen("D:\\vivado_hls\\Le_2\\date_c3","wb");
	FILE *t4=fopen("D:\\vivado_hls\\Le_2\\date_s4","wb");
	FILE *t5=fopen("D:\\vivado_hls\\Le_2\\date_c5","wb");
	//FILE *t6=fopen("D:\\vivado_hls\\Le_2\\date_f6","wb");
	FILE *t7=fopen("D:\\vivado_hls\\Le_2\\date_o7","wb");
	int i,j,k,m,n,p,q;
	fwrite(C1,sizeof(c1_layer),1,t1);
	fwrite(S2,sizeof(s2_layer),1,t2);
	fwrite(C3,sizeof(c3_layer),1,t3);
	fwrite(S4,sizeof(s4_layer),1,t4);
	fwrite(C5,sizeof(c5_layer),1,t5);
	fwrite(output,sizeof(RBF_layer),1,t7);
	/*for(i=0;i<6;i++)
	{
		for(j=0;j<5;j++)
		{
			for(k=0;k<5;k++)
			{
				fwrite(&(C1->mapData[i][j][k]),sizeof(float),1,t1);
			}
		}
	}
	for(i=0;i<6;i++)
	{
		fwrite(&(C1->bias[i]),sizeof(float),1,t1);
	}
	for(i=0;i<6;i++)
	{
		fwrite(&(S2->bias[i]),sizeof(float),1,t2);
	}
	for(i=0;i<6;i++)
	{
		fwrite(&(S2->weig[i]),sizeof(float),1,t2);
	}
	for(i=0;i<16;i++)
	{
		for(j=0;j<6;j++)
		{
			//if(table[j][i])
			//{
				for(k=0;k<5;k++)
				{
					for(n=0;n<5;n++)
					{
						fwrite(&(C3->mapData[i][j][k][n]),sizeof(float),1,t3);
					}

				}
			//}
		}
	}
	for(i=0;i<16;i++)
	{
		fwrite(&(C3->bias[i]),sizeof(float),1,t3);
	}
	for(i=0;i<16;i++)
	{
		fwrite(&(S4->bias[i]),sizeof(float),1,t4);
	}
	for(i=0;i<16;i++)
	{
		fwrite(&(S4->weig[i]),sizeof(float),1,t4);
	}
	for(i=0;i<120;i++)
	{
		for(j=0;j<16;j++)
		{
			for(k=0;k<5;k++)
			{
				for(n=0;n<5;n++)
				{
					fwrite(&(C5->mapData[i][j][k][n]),sizeof(float),1,t5);
				}
			}
		}

	}
	for(i=0;i<120;i++)
	{
		fwrite(&(C5->bias[i]),sizeof(float),1,t5);
	}
	/*for(i=0;i<120;i++)
	{
		for(j=0;j<84;j++)
		{
			fwrite(&(F6->weig[i][j]),sizeof(float),1,t6);
		}
	}
	for(i=0;i<84;i++)
	{
		fwrite(&(F6->bias[i]),sizeof(float),1,t6);
	}
	for(i=0;i<120;i++)
	{
		for(j=0;j<10;j++)
		{
			fwrite(&(output->wei[i][j]),sizeof(float),1,t7);
		}
	}
	for(i=0;i<10;i++)
	{
		fwrite(&(output->bias[i]),sizeof(float),1,t7);
	}
	//return 1;
	fclose(t1);
	fclose(t2);
	fclose(t3);
	fclose(t4);
	fclose(t5);
	//fclose(t6);
	fclose(t7);
	free(t1);
	free(t3);
	free(t4);
	free(t5);
	free(t7);
	//free(t2);

}*/

int main()
{
	char *f1="D:\\vivado_hls\\Le_7\\train-images.idx3-ubyte";
	char *f2="D:\\vivado_hls\\Le_7\\train-labels.idx1-ubyte";
	c1_layer C1;s2_layer S2;c3_layer C3;s4_layer S4;c5_layer C5;//sF6_layer F6;
	RBF_layer output;
	//read_date(&C1,&S2,&C3,&S4,&C5,&output);
	int i;
	//for(i=0;i<5;i++)
		read_mnist(f1,f2,&C1,&S2,&C3,&S4,&C5,&output);
	//save_date(&C1,&S2,&C3,&S4,&C5,&output);
	free(f1);
	free(f2);
	return 0;
}
