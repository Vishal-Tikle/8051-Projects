#include<REG51.h>				//Define 8051 header file
void Delay(unsigned int);		//Define Delay Function

void main(void)				//Main Program
{
	while(1){
		unsigned char z;
			for(z = 0; z < 3;z++);          // Repeat 3 times
			{
				P2 = 0xAA;		//Send 10101010 to Port 2
				Delay(200);		//Delay
				P2 = 0x55;		//Send 01010101 to Port 2
				Delay(200);		//Delay
			}
			for(z=0; z< 4;z++);
			{
				P2 = 0xCC;		//Send 11001100 to Port 2
				Delay(100);
				P2 = 0x33;		//Send 00110011 to Port 2
				Delay(100);
			}
			for(z=0; z< 5;z++);
			{
				P2 = 0xF0;		//Send 11110000 to Port 2
				Delay(50);
				P2 = 0x0F;		//Send 00001111 to Port 2
				Delay(50);
			}
	}
}

void Delay(unsigned int MyTime){
	unsigned int x,y;			//Define Variable
	for(x = 0; x < MyTime ; x++);	//For Loop
	for(y = 0; y < 1250 ; y++ );	//For Loop

}
			