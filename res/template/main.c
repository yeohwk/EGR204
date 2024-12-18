#include <f200.h>

void delay(unsigned long duration)
{
 	while((duration--)!=0);
}

void setSystem();

void mux_display(a,b,c,d)
unsigned char a,b,c,d;
{
	 P2 = a | 0xE0;
	 delay(100);
	 P2 = b | 0xD0;
	 delay(100);
	 P2 = c | 0xB0;
	 delay(100);
	 P2 = d | 0x70;
	 delay(100);
}

void display(unsigned int number)
{
	 unsigned char a,b,c,d;
	 a = number/1000;
	 b = (number%1000)/100;
	 c = (number%100)/10;
	 d = (number%10);
	 mux_display(a,b,c,d);
}

unsigned char getchar ()
{
 	unsigned char x;
 	while (P34==0); // wait for key pressed.
 	x = P3 & 0x0f;
	while (P34==1); // wait for key release.
	return(x);
}

unsigned char keyscan(unsigned char *key)
{
	if (P34==1) // key pressed.
	{
	   *key = P3 & 0x0f;
	   return(1);
	}
	else
	{
	   return(0);
	}
}

void main( )
{	
	setSystem();
	for(;;)
	{
	 	
	}
}