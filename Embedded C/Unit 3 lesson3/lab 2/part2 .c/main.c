/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#define GPIO_BASE 0x40010800
#define RCC_BASE  0x40021000
typedef volatile unsigned int vuint32 ;
typedef union {
	vuint32 all_bits;
	struct{
		vuint32 :13;
		vuint32 bit13:1;
	}bit;
}GPIO_ODR_t ;

typedef union {
	vuint32 all_bits;
	struct{
		vuint32 :20;
		vuint32 bit20_24:4;
	}bit;
}GPIO_CRH_t;

typedef union {
	vuint32 all_bits;
	struct{
		vuint32 :2;
		vuint32 bit2:1;
	}bit;
}RCC_APB2ENR_t;

volatile GPIO_CRH_t * GPIO_CRH= (volatile GPIO_CRH_t*)(GPIO_BASE+0x04) ;
volatile GPIO_ODR_t * GPIO_ODR= (volatile GPIO_ODR_t*)(GPIO_BASE+0x0C) ;
volatile RCC_APB2ENR_t * RCC_APB2ENR= (volatile RCC_APB2ENR_t*)(RCC_BASE+0x18) ;


int main(void)
{
RCC_APB2ENR->bit.bit2=1;
GPIO_CRH->bit.bit20_24=2;
while(1)
{
	int i;
	GPIO_ODR->bit.bit13=1;
	for(i=0;i<500000;i++);
	GPIO_ODR->bit.bit13=0;
	for(i=0;i<500000;i++);



}

}
