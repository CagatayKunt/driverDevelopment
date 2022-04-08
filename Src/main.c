
#include "stm32f407xx.h"


int main(void)
{
	volatile uint32_t *pSRAM = SRAM1_BASE_ADDR;



	while(1)
	{
		if(*pSRAM != 0)
		{
			break;
		}
	}




	for(;;);
}
