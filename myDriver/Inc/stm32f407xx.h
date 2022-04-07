

#ifndef INC_STM32F407XX_H_
#define INC_STM32F407XX_H_



/*
 * Memory Base Address
 *
 */

#define FLASH_BASE_ADDR				(0x08000000UL) /* Flash Base Address (up to 1 MB)	*/
#define	SRAM1_BASE_ADDR				(0x20000000UL) /* SRAM1 Base Address 112 KB */
#define SRAM2_BASE_ADDR				(0x2001C000UL) /* SRAM2 Base Address 112 KB */


/*
 * Peripheral Base Addresses
 *
*/

#define PERIPH_BASE_ADDR			(0x40000000UL)						/* Base Address for All peripherals		*/

#define APB1_BASE_ADDR				PERIPH_BASE_ADDR					/* APB1 Bus Domain Base Address			*/
#define APB2_BASE_ADDR				(PERIPH_BASE_ADDR + 0x00010000UL)	/* APB2 Bus Domain Base Address			*/
#define AHB1_BASE_ADR				(PERIPH_BASE_ADDR + 0X00020000UL)	/* AHB1 Bus Domain Base Address			*/
#define AHB2_BASE_ADR				(PERIPH_BASE_ADDR + 0X10000000UL)	/* AHB2 Bus Domain Base Address			*/




#endif /* INC_STM32F407XX_H_ */
