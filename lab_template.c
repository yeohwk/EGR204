void delay_ms(int m)
{
    int i, j;
    for (i = 0; i < m; i++)
        for (j = 0; j < 114; j++) ;
}

//----- Delay Subroutine -------
void delay(unsigned long duration)
{
   while ((duration--)!=0);
}

void setSystem();


void mux_display(unsigned char a, unsigned char b, unsigned char c, unsigned char d)
{
   P2 = a | 0xE0;	// 4th Digit
   delay(100);
   P2 = b | 0xD0;	// 3rd Digit
   delay(100);
   P2 = c | 0xB0;	// 2nd Digit
   delay(100);
   P2 = d | 0x70;	// 1st Digit
   delay(100);
}

void display(unsigned int number)
{
   unsigned char a,b,c,d;
   a = number/1000;
   b = (number%1000)/100;
   c = (number%100)/10;
   d = (number%10);
   mux_display(a, b, c, d);
}

void blink_led( )
{
   P1 = ~P1;
   delay(1000);		// Reduce the delay from 10000 to 1000 or less.		
}

unsigned char getchar()
{
   unsigned char x;
   while (P34 == 0); 	// wait for key pressed.
   x = P3 & 0x0F;
   while (P34 == 1); 	// wait for key release.
   return(x);
}

unsigned char keyscan(unsigned char *key)
{
   if (P34 == 1) 	// key pressed.
   {
      *key = P3 & 0x0F;
      return(1);
   }
   else
   {
      return(0);
   }
}


void main(void)
 { 
   setSystem();
    
   TMOD=0x10;
   TF1=0;
   TR1=1;    
   
   P07 = 1;
    
   while (1)
   {
      TH1 = 0xFE;
      TL1 = 0x33;
      while(TF1==0);
      TF1 = 0;
      P06 = !P06;
   }
 }