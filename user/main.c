/********************************************************************************
  * @file    		main.c
  * @brief   		stm32f10x mdk demo
  * @author  		Timon
  * @date    		20151020
  * @versions		20151021: demo debug
 *******************************************************************************/

#include "stm32f10x.h"
#include <stdio.h>
#include "bsp_systick.h"
#include "bsp_usart.h"

int main(void)
{
	systick_custinit();
	
  usart_custinit();
	
  printf("============== stm32f10x mdk demo ==============\r\n");
	
  while (1)
  {
		delay_ms(1000); // 1000ms delay
		
		printf("hello, stm32.\r\n");
		
  } // end while
}
