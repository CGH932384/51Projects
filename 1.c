#include<reg52.h>
#include<intrins.h>
#define LED P2;
void delay(unsigned int xms);

void delay(unsigned int i)
{
	while(i--);
}
//6666
void main()
{
 
unsigned char i;
 

 delay(50000);

 while(1)
 {
 	for(i=0;i<7;i++)
	{
	  
	  P2 =~(0x03<<i);
	  delay(50000);
	}

}
}