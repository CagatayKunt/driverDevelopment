#include "GPIO.h"



/*
 *	@brief	GPIO_Write_Pin, makes pin High or Low
 *	@param	GPIOx = GPIO Port Base Address
 *
 *	@param	pinNumber = GPIO Pin Number - 0 - 15
 *
 *	@param	pinState = GPIO_Pin_Set OR GPIO_Pin_Reset
 *
 *	@retval Void
 * */


void GPIO_WritePin(GPIO_TypeDef_t *GPIOx, uint16_t pinNumber, GPIO_PinState_t pinState)
{

	if(pinState == GPIO_Pin_Set)
	{
		GPIOx->BSRR = pinNumber;
	}
	else
	{
		GPIOx->BSRR = (pinNumber << 16U);
	}


}

/*
 *	@brief	GPIO_Read_Pin, reads the pin of GPIOx Port
 *	@param	GPIOx = GPIO Port Base Address
 *
 *	@param	pinNumber = GPIO Pin Number - 0 - 15
 *
 *
 *	@retval GPIO_PinState_t
 * */

GPIO_PinState_t GPIO_ReadPin(GPIO_TypeDef_t *GPIOx, uint16_t pinNumber)
{
	GPIO_PinState_t bitStatus = GPIO_Pin_Reset;

	if( (GPIOx->IDR & pinNumber) != GPIO_Pin_Reset)
	{
		bitStatus = GPIO_Pin_Set;
	}

	return bitStatus;

}

/*
 *	@brief	GPIO_Lock_Pin, Lock the pin of GPoOx Port
 *	@param	GPOOx = GPIO Port Base Address
 *																//	1 0000 0000 0000 0000
 *	@param	pinNumber = GPIO Pin Number - 0 - 15				//	0 0001 0000 1100 0000
 *
 *																//	1 0001 0000 1100 0000
 *	@retval GPIO_PinState_t
 * */

void GPIO_LockPin(GPIO_TypeDef_t *GPOOx, uint16_t pinNumber)	//	1 1000 0000 1101 0001
{
	uint32_t tempValue = (0x1U << 16U) | pinNumber;

	GPOOx-> LCKR = tempValue;	//	LCKR[16] = '1'	LCKR[15:0] = DATA
	GPOOx-> LCKR = pinNumber;	//	LCKR[16] = '0'	LCKR[15:0] = DATA
	GPOOx-> LCKR = tempValue;	//	LCKR[16] = '1'	LCKR[15:0] = DATA
	tempValue = GPOOx->LCKR;	//	Read Lock Register

}
