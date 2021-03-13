#include<Reg51.h>
void delay(unsigned int);
unsigned char reqflr,curflr,i,flr; //flr indicates the current position of the lift, curflr indicates the current floor of the lift, reqflr indicates to where the lift is approaching //
unsigned int r;
void int main()
{
	P1 = 0XFF; // keyboard is interfaced to port1 so make all pins high //
	P0 = 0X0F; // here in the program we have considered only four floors so lower four pins are high //
	curflr = 0X00 // while restarting the micro-controller reset the current position to 0th floor//
	while(1)
	{
		reqflr = P1 & 0X0F;
		switch(reqflr)
		{
			case 0X07:
				flr = 0X09;
			case 0X0b:
				flr = 0X06;
			case 0X0d:
				flr = 0X03;
			case 0X0e:
				flr = 0X00;
			break;
		}
		if(curflr<flr)
			{
			for(i=curflr;i<flr;i++)
				{
					P0 = 0XF0|i;
					delay(65535);
				}
			}
		else
		{
			for(i=curflr;i>flr;i++)
			{
				P0 = 0X0F|i;
				delay(65535);
			}
		}
		curflr = flr
		switch(flr)
		{
			case 0X00:
				P0 = 0X0e;
			case 0X03:
				P0 = 0Xd3;
			case 0X06:
				P0 = 0Xb6;
			case 0X09:
				P0 = 0X79;
			break;
		}
	}
}

void delay (unsigned int i)
{
	for(r=0;r<=i;r++);
}
