#ifndef _DELAY_H_
#define _DELAY_H_

#include "embARC.h"
#include "embARC_debug.h"



extern void delay_us(volatile uint32_t us);
extern void delay_ms(volatile uint32_t ms);
extern void delay_s(volatile uint32_t s);

#endif
