/*
 * cnn_run.c
 *
 *  Created on: 2017Äê3ÔÂ24ÈÕ
 *      Author: Acer
 */


#include <stdio.h>
#include <stdlib.h>

#include "xparameters.h" /* Peripheral parameters */
#include "xuartps.h"
#include "xuartps_hw.h"
#include "xil_printf.h"
#include "xil_cache.h"
#include "xparameters_ps.h"
#include "xil_io.h"
#include "Xdateport_hw.h"
#include "Xdateport.h"
#define XPORTADDR 0x43C00000
#define UART_DEVICE_ID              XPAR_XUARTPS_0_DEVICE_ID

XDateport xdatep;
XUartPs Uart_PS;
static u8 SendBuffer[2]={'o','k'};	/* Buffer for Transmitting Data */
static u8 RecvBuffer[4];	/* Buffer for Receiving Data */
//static u8 Send_2[2];

#define UART_BASEADDR		XPAR_XUARTPS_0_BASEADDR
#define UART_CLOCK_HZ		XPAR_XUARTPS_0_CLOCK_HZ
#define DATEPORT_BASEADDR   XPAR_XDATEPORT_0_S_AXI_AXILITES_BASEADDR
XDateport dateport;
//#define TEST_BUFFER_SIZE	16

#define CHAR_ESC		0x1b	/* 'ESC' character is used as terminator */
int main()
{
	int j,k,wait=0;
	unsigned int i;
	u8 signal=0XFF;
	//float temp;
	//unsigned char tdate;
	u32 *date;
	u16 right;
	//XUartPs xuart;
	//int Status;
	//XUartPs_Config *Config;
	//unsigned int SentCount;
	unsigned int ReceivedCount;
	u16 Index;
//	u32 LoopCount = 0;
	u8 *uChar;
	//int Index;
	//u32 Running;
	u8 RecvChar;
	u32 CntrlRegister;
	float *date_2;
	dateport.Axilites_BaseAddress = DATEPORT_BASEADDR;
	dateport.IsReady = XIL_COMPONENT_IS_READY;

	while(!XDateport_IsIdle(&dateport));
	XDateport_Set_signal_r(&dateport,0);
	XDateport_Start(&dateport);
	//Xil_Out8(XPORTADDR+XDATEPORT_AXILITES_ADDR_SIGNAL_R_I_DATA,0);
	/*
	 * Initialize the UART driver so that it's ready to use.
	 * Look up the configuration in the config table, then initialize it.
	 */
	CntrlRegister = XUartPs_ReadReg(UART_BASEADDR, XUARTPS_CR_OFFSET);

	/*
	 * Enable TX and RX for the device
	 */
	XUartPs_WriteReg(UART_BASEADDR, XUARTPS_CR_OFFSET,
			  ((CntrlRegister & ~XUARTPS_CR_EN_DIS_MASK) |
			   XUARTPS_CR_TX_EN | XUARTPS_CR_RX_EN));
	for(Index=0;Index<2;Index++)
	{
		 while (XUartPs_IsTransmitFull(UART_BASEADDR));

		/*
		 * Write the byte into the TX FIFO
		 */
		XUartPs_WriteReg(UART_BASEADDR, XUARTPS_FIFO_OFFSET,
				  SendBuffer[Index]);
	}
	do{
		while (!XUartPs_IsReceiveData(UART_BASEADDR));
		RecvChar = XUartPs_ReadReg(UART_BASEADDR,
					    XUARTPS_FIFO_OFFSET);
	}while(RecvChar!=2);
	while(!XDateport_IsIdle(&dateport));
	if(XDateport_Get_signal_out_vld(&dateport))
		signal=XDateport_Get_signal_out(&dateport);

	//Xil_Out8(XPORTADDR+XDATEPORT_AXILITES_ADDR_SIGNAL_R_I_DATA,2);
	//signal=Xil_In8(XPORTADDR+XDATEPORT_AXILITES_ADDR_SIGNAL_R_I_DATA);
	//signal=Xil_In8(XPORTADDR+XDATEPORT_AXILITES_ADDR_SIGNAL_R_O_DATA);
	//signal=2;
	for(i=0;i<10000;i++)
	{
		for(j=0;j<32;j++)
		{
			for(k=0;k<32;k++)
			{
				if(k==2&&j==2)
					wait++;
				while (XUartPs_IsTransmitFull(UART_BASEADDR));
				XUartPs_WriteReg(UART_BASEADDR, XUARTPS_FIFO_OFFSET,
						  signal);
				for (ReceivedCount = 0;ReceivedCount < 4;ReceivedCount ++) {
					while (!XUartPs_IsReceiveData(UART_BASEADDR));
					RecvBuffer[ReceivedCount] =
							XUartPs_ReadReg(UART_BASEADDR,XUARTPS_FIFO_OFFSET);
				}
				date=(u32*)&RecvBuffer[0];
				date_2=(float*)&RecvBuffer[0];
				if(signal==2)
				{
					XDateport_Set_date(&dateport,*date);
					XDateport_Set_signal_r(&dateport,3);
				}
				while(!XDateport_IsIdle(&dateport));
				XDateport_Start(&dateport);
				/*do{
					signal=Xil_In8(XPORTADDR+XDATEPORT_AXILITES_ADDR_SIGNAL_R_O_DATA);
					wait++;}while(signal!=(u8)2&&signal!=(u8)0);
				Xil_Out32(XPORTADDR+XDATEPORT_AXILITES_ADDR_DATE_DATA,*date);
				Xil_Out8(XPORTADDR+XDATEPORT_AXILITES_ADDR_SIGNAL_R_I_DATA,3);*/
			}
		}

		/*do{
			signal=Xil_In8(XPORTADDR+XDATEPORT_AXILITES_ADDR_SIGNAL_R_O_DATA);
			wait++;}while(signal!=(u8)2);*/
		while (XUartPs_IsTransmitFull(UART_BASEADDR));
		XUartPs_WriteReg(UART_BASEADDR, XUARTPS_FIFO_OFFSET,
				  signal);
		while (!XUartPs_IsReceiveData(UART_BASEADDR));
		RecvBuffer[0] =
				XUartPs_ReadReg(UART_BASEADDR,XUARTPS_FIFO_OFFSET);
		while(!XDateport_IsIdle(&dateport));
		if(XDateport_Get_signal_out_vld(&dateport))
			signal=XDateport_Get_signal_out(&dateport);
		if(signal==2)
		{
			XDateport_Set_date(&dateport,RecvBuffer[0]);
			XDateport_Set_signal_r(&dateport,1);
		}
		while(!XDateport_IsIdle(&dateport));
		XDateport_Start(&dateport);
		//Xil_Out8(XPORTADDR+XDATEPORT_AXILITES_ADDR_SIGNAL_R_I_DATA,2);
		//Xil_Out32(XPORTADDR+XDATEPORT_AXILITES_ADDR_DATE_DATA,(u32)RecvBuffer[0]);
		//Xil_Out8(XPORTADDR+XDATEPORT_AXILITES_ADDR_SIGNAL_R_I_DATA,1);
		//while(Xil_In8(XPORTADDR+XDATEPORT_AXILITES_ADDR_SIGNAL_R_O_DATA)!=2)
		//	wait++;

		//if(!(i%10000))
		//{
			while(!XDateport_IsIdle(&dateport));
			if(XDateport_Get_led_vld(&dateport))
				right=XDateport_Get_led(&dateport);
			//right=Xil_In16(XPORTADDR+XDATEPORT_AXILITES_ADDR_LED_DATA);
			uChar=(u8*)&right;
			SendBuffer[0]=uChar[0];
			SendBuffer[1]=uChar[1];
			 while (XUartPs_IsTransmitFull(UART_BASEADDR));
			XUartPs_WriteReg(UART_BASEADDR, XUARTPS_FIFO_OFFSET,
					SendBuffer[0]);
			 while (XUartPs_IsTransmitFull(UART_BASEADDR));
			XUartPs_WriteReg(UART_BASEADDR, XUARTPS_FIFO_OFFSET,
					SendBuffer[1]);
			//xil_printf("the correct img is %d\n\r",right);
		//}
	}
	while(!XDateport_IsIdle(&dateport));
	if(XDateport_Get_led_vld(&dateport))
		right=XDateport_Get_led(&dateport);
	//right=Xil_In16(XPORTADDR+XDATEPORT_AXILITES_ADDR_LED_DATA);
	uChar=(u8*)&right;
	SendBuffer[0]=uChar[0];
	SendBuffer[1]=uChar[1];
	 while (XUartPs_IsTransmitFull(UART_BASEADDR));
	XUartPs_WriteReg(UART_BASEADDR, XUARTPS_FIFO_OFFSET,
			SendBuffer[0]);
	 while (XUartPs_IsTransmitFull(UART_BASEADDR));
	XUartPs_WriteReg(UART_BASEADDR, XUARTPS_FIFO_OFFSET,
			SendBuffer[1]);
	//xil_printf("the correct img is %d\n\r",right);
	//XUartPs_SetOperMode(&Uart_PS, XUARTPS_OPER_MODE_NORMAL);
	return XST_SUCCESS;
}
