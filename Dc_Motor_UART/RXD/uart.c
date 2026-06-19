#include<reg51.h>
#include<delay.h>
#include<uart.h>
void UART_Init(void)
{
	SCON=0x50;
	TMOD|=0x20;
	TH1=0xFD;
	TR1=1;
}
void UART_Tx(char Tx_data)
{
	SBUF=Tx_data;
	while(TI==0);
	TI=0;
}
char UART_Rx()
{
	while(RI==0);
	RI=0;
	return SBUF;
}


