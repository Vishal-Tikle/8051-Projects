#include<REG51.h>
sbit SW1 = P0^0;
sbit SW2 = P0^1;
void UpCount (void);
void DownCount (void);
void Delay (void);
unsigned char Count; 
unsigned char Pattern[10]= {0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90, 0xC0,};

void main(void){
	Count=0;
	SW1 = 1;
	SW2 = 1;
	P2 = 0xC0;
	while(1)
	{
	if(SW1 == 0) 
	{
	UpCount();
	Delay(); 
	while (SW1==0);
	P2 = Pattern[Count];
	}
	if (SW2 == 0)
	{
	DownCount();
	Delay();
	while (SW2==0); 
	P2 = Pattern[Count];
	}
	}
}

void UpCount (void) {
	Count++;
	if (Count==10) 
		Count = 0;
}

void DownCount (void){
	if (Count == 0) Count = 10; 
	Count--; 
}

void Delay (void){
	unsigned char x; 
	for (x=0; x < 10; x++);
}
	