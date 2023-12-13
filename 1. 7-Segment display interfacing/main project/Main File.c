#include<REG51.h>
void Delay(void);
void main(void)
{
P2 = 0xFF;
while(1)
	{
	P2 = 0xF9;
	Delay();
	P2 = 0xA4;
	Delay();
	P2 = 0xB0;
	Delay();
	P2 = 0x99;
	Delay();
	P2 = 0x92;
	Delay();
	P2 = 0x82;
	Delay();
	P2 = 0xF8;
	Delay();
	P2 = 0x80;
	Delay();
	P2 = 0x90;
	Delay();
	P2 = 0xC0;
	Delay();
	}
}

void Delay(void)
	{
	unsigned int x,y;
	for(x=0 ; x<1000 ; x++)
	for(y=0 ; y<165 ; y++);
}
