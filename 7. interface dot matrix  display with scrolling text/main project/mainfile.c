#include <reg51.h> // 8051 header file 
unsigned char Column[8]= { 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01}; // Column Data in Array
unsigned char Row[102] = {  0x00, 0x3F, 0x48, 0x88, 0x48, 0x3F, //A
														0x00, 0xFF, 0x91, 0x91, 0x91, 0x6E, //B
														0x00, 0x7E, 0x81, 0x81, 0x81, 0x42, //C
														0x00, 0xFF, 0x81, 0x81, 0x81, 0x7E, //D
														0x00, 0xFF, 0x91, 0x91, 0x91, 0x81, //E
														0x00, 0xFF, 0x90, 0x90, 0x90, 0x80, //F
														0x00, 0x7E, 0x81, 0x81, 0x89, 0x46, //G
                            0x00, 0xFF, 0x10, 0x10, 0x10, 0xFF, //H
													  0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, //I
													  0x00, 0x06, 0x81, 0x81, 0xFE, 0x80, //J
													  0x00, 0xFF, 0x18, 0x24, 0x42, 0x81, //K
													  0x00, 0xFF, 0x01, 0x01, 0x01, 0x01, //L
													  0x00, 0x7F, 0x80, 0x7C, 0x80, 0x7F, //M
                            0x00, 0xFF, 0x40, 0x3C, 0x02, 0xFF, //N
													  0x00, 0x7E, 0x81, 0x81, 0x81, 0x7F, //O
													  0x00, 0x7F, 0x88, 0x88, 0x88, 0x70, //P
													  0x00, 0x7E, 0x81, 0x81, 0x7E, 0x01,}; //Q
void Delay(unsigned int num) //Delay Function
{
		unsigned int i,j; //Define Variable
		for(i=0;i<num;i++) //For Loop For Delay 
		for(j=0;j<600;j++);//For Loop For Delay
}
unsigned char i, j, k, l, m; // Define Variable
void main()// Main program
{
			i=0; //Initial Value is 0
			j=0; //Initial Value is 0
		 while(1) //Repeat forever
				{
					for (m=0; m<20; m++)
					{
						for (i=0;i<8; i++)
						{
							P1 =Column[i]; // Send Column Data To P1
							P2 =Row[j];// Send Row Data To P2 
							Delay(1); //Delay 
							j++; // Increment j value with 1
							if(j==102) j = 0;
						}
						j=l;
						if(l==102) l=0;
				}
					l++;
				j=l;
		}
	}

