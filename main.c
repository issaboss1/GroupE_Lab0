/*
 * GccApplication1.c
 *
 * Created: 9/19/2024 11:11:06 PM
 * Author : issam
 */ 


#include "sam.h"


int main(void)
{
	int i;
	
	SystemInit();
	
	REG_PORT_DIR0 |= 1<<20;
	while (1)
	{
		REG_PORT_OUT0 |= 1<<20;
		for(i=0;i<50000;i++){}
			
		REG_PORT_OUT1 &= (~(1<<20));
		for(i=0;i<50000;i++){}
		
	}
    
}
