#include < at89x52.h> // Header file for AT89S52

void timer1_ovf(void) interrupt 3 // timer 1 for 20ms
{
TH1=0xB7;
TL1=0xFE;
P1_0=1;
TR0=1;
}

void timer0_ovf(void) interrupt 1 // timer 0 for various shaft position
{
if(P2_0==0) //PB2 pressed
{
TH0=0xFC; //0 degree shaft position
TL0=0x65;
}
else if(P2_1==0) // PB1 pressed
{
TH0=0xF8; //180 degree shaft position
TL0=0xCB;
}
P1_0=0;
TR0=0;
}

void main(void)
{
P2=0xFF; // Using PORT2 as input
TMOD=0x11;
ET1=1;
ET0=1;
TH1=0xB7;
TL1=0xFE;
TR1=1;
EA=1;
while(1){}
}