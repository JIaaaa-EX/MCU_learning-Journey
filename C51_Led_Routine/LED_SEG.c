# include <reg52.h>
#define uint unsigned int
#define uchar unsigned char
sbit dula = P2^6;
sbit weia = P2^7;
uchar num;
uchar code table[] = {0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};
void delay(uint z);
    
void main()
{
    weia = 1;
    P0 = 0xc0;
    weia = 0;
    while(1)
    {
        for(num = 0;num<16;num++)
        {
            dula = 1;
            P0 = table[num];
            dula = 0;
            delay(1000);
        }
    }
}

void delay(uint z)
{
	uint x,y;
	for(x = z;x > 0;x--)
		for(y = 120;y > 0;y--);
}