#ifndef SRC_HW_BUTTON_BUTTON_H_
#define SRC_HW_BUTTON_BUTTON_H_

#include "xparameters.h"
#include "xgpio.h"
#include "sleep.h"

#define RELEASED 	0
#define PUSHED 	 	1

#define Button_0 	0
#define Button_1 	1
#define Button_2 	2
#define Button_3 	3

#define CHANNEL_1	1
#define OUTPUT		0x00
#define INPUT		0x0f

typedef struct _buttonInst {
	int prevState;
	int buttonNum;
}buttonInst;

void Button_Init();
void Button_MakeInst(buttonInst *button, int buttonNum);
int Buttom_GetState(buttonInst *button);

#endif /* SRC_HW_BUTTON_BUTTON_H_ */
