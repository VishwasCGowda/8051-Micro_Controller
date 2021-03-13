#include<Reg51.h>
sbit ibit = p2^0;
void delay(unsigned int)
void main()
{
	ibit = 0
	while(1)
	{
		ibit=0;
		delay();
		ibit=1;
		delay();
	}
}
void delay(unsigned int)
{
	unsigned char i,j;
	for(i=100;i>0;i--)
		for(j=0;j<100;j++);
}
