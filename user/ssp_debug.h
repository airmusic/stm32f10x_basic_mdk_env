#ifndef SSP_DEBUG_H
#define SSP_DEBUG_H

#include "stm32f10x.h"
#include <stdio.h>

#ifdef DEBUG
#define DEBUG_PRINTF(format, ...) printf(format, ##__VA_ARGS__)
#else
#define DEBUG_PRINTF(format, ...)
#endif

#endif
