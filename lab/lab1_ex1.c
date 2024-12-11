#include <f200.h>

//----- Delay Subroutine -------
void delay(unsigned long duration)
{
	while ((duration--)!=0);
}

void setSystem(); // refer to func.c for initialization for microcontroller chip

void main()
{
	unsigned long wait=60000;
 	setSystem(); // Initialize u-controller internal registry and clock
	P1=0x00;
	while(1)
	{
		if (P02==0) wait=10000;	//0 = pressed, 1= not pressed
		if (P03==0) wait=30000;
		if (P04==0) wait=60000;
		if (P05==0) wait=90000;
		P1=0x00;
		delay(wait);
		P1=0xff;
		delay(wait);
	} 
}
