#include<Reg51.h>
#define phasea 0X0D
#define phaseb 0X0E
#define phasec 0X07
#define phased 0X0B
void delay(unsigned int);
void main()
{
	P2=0X00;
	while(1)
	{
		P2=phasea;
		delay();
		P2=phaseb;
		delay();
		P2=phasec;
		delay();
		P2=phased:
		delay();
		//change the order of the sequence to change the direction of rotation example: there we used pahsea,b,c,d change that to phased,c,b,a//
	}
}

void delay()
{
	unsigned int i;
	for(i=0;i<1000;i++); // change the value of i to change the delay thereby the speed of the motor changes//
}
