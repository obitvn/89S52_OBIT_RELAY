        
				 
#include<regx52.h>
sfr P2 = 0xFF; 
sbit RELAY_PIN = P2^6;




void Delay_ms(unsigned int t)     
{
    unsigned int x,y;             
    for (x=0; x<t; x++) 
    {   
         for (y=0; y<123; y++);   
    }
}

void main()
{ 
	
     while(1) 
     {
			  RELAY_PIN = ~RELAY_PIN;
			  Delay_ms(1000);
     }
}			 