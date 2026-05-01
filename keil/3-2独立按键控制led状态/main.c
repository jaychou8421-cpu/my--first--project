#include <REGX52.H>
void Delay(unsigned int xms)		
{
	unsigned char i, j;
while(xms--)
	{	i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
	}
}

void main()
{
		while(1)
		{		P2_0=0;
				Delay(100);
				P2_0=1;
				Delay(100);
		}
}