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
void LCD_LINE1(unsigned char);
void LCD_LINE2(unsigned char);


void main(void)
{
	msDelay(10);
	LCD_INI();
	LCD_LINE1(6);
	Send_Data("WELCOME TO");
	LCD_LINE2(4);
	Send_Data("ETC");
	msDelay(300);
	while(1);
}

void LCD_INI(void)
{
	msDelay(100);
	LCD_CMD(0x38);
	LCD_CMD(0x0E);
	LCD_CMD(0x01);
}

void LCD_CMD(unsigned char x)
{
	LCD = x;
	RS = 0;
	RW = 0;
	EN = 1;
	msDelay(1);
	EN = 0;
	return;
}

void Send_Data(unsigned char *str)
{
	while(*str)
		LCD_DATA(*str++);
}
void LCD_LINE1(unsigned char position)
{
	LCD_CMD(0x80 + position);
}
void LCD_LINE2 (unsigned char position)
{
	LCD_CMD(0xc0 + position);
}

void LCD_DATA(unsigned char w)
{
	LCD = w;
	RS = 1;
	RW = 0;
	EN = 1;
	msDelay(1);
	EN = 0;
	return;
}

void msDelay(unsigned int Time)
{
	unsigned int y,z;
	for(y=0; y<Time; y++);
	for(z=0; z<500; z++);
}