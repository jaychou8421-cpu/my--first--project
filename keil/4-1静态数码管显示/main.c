#include <REGX52.H>
void NiXie(unsigned char location,number)
{unsigned int arr[]={0x3F,0X06,0X5B,0X4F,0X66,0X6D,0X7D,0X07,0X7F,0X6F};
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
}

void main()
{
	NiXie(7,2);
	while(1)
	{
		
	}
}