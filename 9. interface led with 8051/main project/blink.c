//-------------
//Blinking LEDs
//Blue LED connected to port P1.0
//Red LED connected to port P1.3
//-------------
 #include <REGX52.H>
 void delay(void);
 //========================================================
 void main()
 {
   while(1)
  {
    P1=0x01;  //set port P1.0, blue LED ON & red LED OFF
    delay();
    P1=0x08;  //set port P1.3, blue LED OFF & red LED ON
    delay();
  }
 }
//=========================================================
void delay(void)
{
  int i, j;
  for(i=0; i<600; i++)
    for(j=0; j<600; j++);
 }