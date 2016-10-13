#ifndef BSP_USART_H
#define BSP_USART_H

#include "stm32f10x.h"
#include <stdio.h>

#ifdef DEBUG
#define DEBUG_PRINTF(format, ...) printf(format, ##__VA_ARGS__)
#else
#define DEBUG_PRINTF(format, ...)
#endif

void usart1_configuration(void);
static void usart1_nvic_configuration(void);
void usart3_Configuration(void);
static void usart3_nvic_configuration(void);
int fputc(int ch, FILE *f);
int fgetc(FILE *f);
void usart_printf(USART_TypeDef* USARTx, uint8_t *data, ...);
void usart_custinit(void);

#endif
