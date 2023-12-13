#include <REG51.h>
void Delay (void);
void main(void){
	while (1)
	{
		P2 = 0xFF;
		Delay(); 
		P2 = 0xFE; 
		Delay();
		P2 = 0XFD;
		Delay(); 
		P2 = 0xFB; 
		Delay();
		P2 = 0XF7;
		Delay();
		P2 = 0xEF;
		Delay();
		P2 = 0XDF; 
		Delay(); 
		P2 = 0xBF;
		Delay(); 
		P2 = 0x7E;
		Delay();
	}
}

void Delay (void){
	unsigned int x,y;
	for (x=0; x < 1000; x++)  
	for (y = 0; y <165; y++); 
}

