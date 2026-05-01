#include <REGX52.H>
void Delay(unsigned int xms)	
{	unsigned char i, j;
while(xms--)
{
	i = 2;
	j = 239;
	do
	{
		while (--j);
	} while (--i);
}
}

void nex(unsigned char location,number)
{   unsigned int arr[]={0x3F,0X06,0X5B,0X4F,0X66,0X6D,0X7D,0X07,0X7F,0X6F};
	switch(location)
	{
		case 1:
			P2_4=1;P2_3=1;P2_2=1;break;
		case 2:
			P2_4=1;P2_3=1;P2_2=0;break;
		case 3:
			P2_4=1;P2_3=0;P2_2=1;break;
		case 4:
			P2_4=1;P2_3=0;P2_2=0;break;
		case 5:
			P2_4=0;P2_3=1;P2_2=1;break;
		case 6:
			P2_4=0;P2_3=1;P2_2=0;break;
		case 7:
			P2_4=0;P2_3=0;P2_2=1;break;
		case 8:
			P2_4=0;P2_3=0;P2_2=0;break;
	}
		P0=arr[number];
	Delay(1);
	P0=0X00;
}
void main()
{
		
	while(1)
	{	nex(1,1);
//		Delay(20);
		nex(2,2);
//		Delay(20);
		nex(3,3);
//		Delay(20);
		nex(4,4);
//		Delay(20);
	
	}
}
