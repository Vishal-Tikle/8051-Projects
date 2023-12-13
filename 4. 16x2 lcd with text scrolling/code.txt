#include<reg51.h>
sfr LCD = 0xA0;
sbit RS = P1^0;
sbit RW = P1^1;
sbit EN = P1^2;

void LCD_INI(void);
void LCD_CMD(unsigned char);
void LCD_DATA(unsigned char);
void msDelay(unsigned int);
void Send_Data(unsigned char *Str);
void LCD_LEFT(unsigned char);
void LCD_RIGHT(unsigned char);

void main(void){
	msDelay(10);
	LCD_INI();
	Send_Data("WELCOME TO ETC DEPARTMENT");
	msDelay(100);
	LCD_LEFT(10);
	msDelay(300);
	LCD_RIGHT(10);
	while(1);
}

void LCD_INI(void){
	msDelay(100);
	LCD_CMD(0x0E);
	LCD_CMD(0x38);
	LCD_CMD(0x01);
	LCD_CMD(0x0c);
	LCD_CMD(0x83);
	LCD_CMD(0x06);
	

}	
	
void LCD_CMD(unsigned char x){
	LCD = x;
	RS = 0;
	RW = 0;
	EN = 1;
	msDelay(1);
	EN = 0;
	return;
}	

void Send_Data(unsigned char *Str){
	while(*Str)
		LCD_DATA(*Str++);
}	

void LCD_LEFT(unsigned char LEFT){
	unsigned char cnt;
	for (cnt = 0; cnt < LEFT; cnt++){
		LCD_CMD(0x18);
		msDelay(300);
	}
}

void LCD_RIGHT(unsigned char RIGHT){
	unsigned char cnt;
	for(cnt = 0; cnt < RIGHT; cnt++){
		LCD_RIGHT(0x1C);
		msDelay(300);
	}
}	

void LCD_DATA(unsigned char w){
	LCD = w;
	RS = 1;
	RW = 0;
	EN = 1;
	msDelay(1);
	EN = 0;
	return;
}	

void msDelay(unsigned int Time){
	unsigned int y,z;
	for(y=0;y<Time;y++)
	for(z=0;z<500;z++);
}