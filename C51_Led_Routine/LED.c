# include "reg52.h"
# include <intrins.h>
# define uint unsigned int
# define uchar unsigned char
uchar L;

void delay(uint z);
	
void main()
{
		L = 0xfe;
		P1 = L;	
		while(1)
		{
			L = _crol_(L,1);
			delay(500);
			P1 = L;
			delay(500);
		}
}

void delay(uint z)
{
	uint x,y;
	for(x = z;x > 0;x--)
		for(y = 150;y > 0;y--);
}