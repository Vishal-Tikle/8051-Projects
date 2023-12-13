#include <reg51.h> // 8051 header file 
unsigned char Column[8]= { 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01}; // Column Data in Array

unsigned char Row[8] = { 0x00, 0x3F, 0x48, 0x88, 0x48, 0x3F, 0x00, 0x00}; //Row Data in Array
void Delay(unsigned int); //Define Delay Function
unsigned char i, j; // Define Variable

	void main()// Main program
		{
			i=0; //Initial Value is 0
			j=0; //Initial Value is 0

 			while(1) //Repeat forever
				{
					P1 =Column[i]; // Send Column Data To P1
					P2 =Row[j]; // Send Row Data To P2 
					Delay(1); //Delay
					i++; // Increment i value with 1 
					j++; // Increment j value with 1
					if(i==8) i = 0;
					if(j==8) j = 0;
				}
		}
void Delay(unsigned int num) //Delay Function
	{
		unsigned int i,j; //Define Variable
		for(i=0;i<num;i++) //For Loop For Delay 
		for(j=0;j<600;j++);//For Loop For Delay
}