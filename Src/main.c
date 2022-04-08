
#include "stm32f407xx.h"


int main(void)
{
	uint32_t *mainAddr = GPIOA;					//	0x40020000
	uint32_t *moderAddr = &GPIOA->MODER;		//	0x40020000
	uint32_t *OtyperAddr = &GPIOA->OTYPER;		//	0x40020004
	uint32_t *OspeedAddr = &GPIOA->OSPEEDR;		//	0x40020008
	uint32_t *PuPdrAddr = &GPIOA->PUPDR;		//	0x4002000C

	uint32_t *mainCAddr = GPIOC;				//	0x40020800
	uint32_t *moderCAddr = &GPIOC->MODER;		//	0x40020800
	uint32_t *OtyperCAddr = &GPIOC->OTYPER;		//	0x40020804
	uint32_t *OspeedCAddr = &GPIOC->OSPEEDR;	//	0x40020808
	uint32_t *PuPdrCAddr = &GPIOC->PUPDR;		//	0x4002080C


	for(;;);
}
