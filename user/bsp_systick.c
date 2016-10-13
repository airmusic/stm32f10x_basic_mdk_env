/*************************************************
* @File 		    bsp_systick.c
* @Brief 			  system dida, timer
* @Author 			Timon
* @Date 			  20150627
* @Histories 	
* 					    20150627: Create
*************************************************/

#include "bsp_systick.h"

static __IO uint32_t delay_timing;

/*************************************************
* @Brief  start sys dida timer
***************************************************/
void systick_custinit()
{
	/*
	 * SystemCoreClock / 1000    -> 1ms  dida
	 * SystemCoreClock / 100000  -> 10us dida
	 * SystemCoreClock / 1000000 -> 1us  dida
	 */
	
	// 10us dida
	if(SysTick_Config(SystemCoreClock / 100000))
	{
		// cycle when error
		while(1);
	}
	// disable the timer after complete conf
	SysTick->CTRL &= ~SysTick_CTRL_ENABLE_Msk;
}

/*************************************************
* @Brief  us delay
**************************************************/
void delay_10us(__IO uint32_t n_us)
{
	delay_timing = n_us;
	// enable
	SysTick->CTRL |= SysTick_CTRL_ENABLE_Msk;
	while(delay_timing)
		;
}

/**************************************************
* @Brief  get timing, called at SysTick_Handler()
**************************************************/
void delay_timing_decrement(void)
{
	if(delay_timing)
	{
		delay_timing--;
	}
}
