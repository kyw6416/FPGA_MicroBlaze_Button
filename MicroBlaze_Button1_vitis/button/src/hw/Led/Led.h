#ifndef SRC_HW_LED_LED_H_
#define SRC_HW_LED_LED_H_

#include "xparameters.h"
#include "xgpio.h"
#include "sleep.h"

#define Button_0 	0
#define Button_1 	1
#define Button_2 	2
#define Button_3 	3
#define Button_4 	4
#define Button_5 	5
#define Button_6 	6
#define Button_7 	7

#define CHANNEL_1	1

void Led_Init();
void Led_On();
void Led_Off();
void Led_Lshift();
void Led_Rshift();

#endif /* SRC_HW_LED_LED_H_ */
