#ifndef BSP_SYSTICK_H
#define BSP_SYSTICK_H

#include "stm32f10x.h"

void systick_custinit(void);
void delay_10us(__IO uint32_t n_us);

#define delay_us(n_us) delay_10us(n_us / 10)
#define delay_ms(n_ms) delay_us(1000 * n_ms)

#endif
