#include "Led.h"

XGpio GPIO_LED;

void Led_Init()
{
	XGpio_Initialize(&GPIO_LED, XPAR_AXI_GPIO_0_DEVICE_ID);
	XGpio_SetDataDirection(&GPIO_LED, CHANNEL_1, 0x00);
}


void Led_On()
{
	XGpio_DiscreteWrite(&GPIO_LED, CHANNEL_1, 0xff);
}

void Led_Off()
{
	XGpio_DiscreteWrite(&GPIO_LED, CHANNEL_1, 0x00);
}

int ledstate = 0;

void Led_Lshift()
{
	for(int i = 0; i < 8; i++)
	{
		XGpio_DiscreteWrite(&GPIO_LED, CHANNEL_1, 1 << i);
		usleep(300000);
		XGpio_DiscreteWrite(&GPIO_LED, CHANNEL_1, 0 << i);
	}
}

void Led_Rshift()
{
	for(int i = 0; i < 8; i++)
	{
		XGpio_DiscreteWrite(&GPIO_LED, CHANNEL_1, 128 >> i);
		usleep(300000);
		XGpio_DiscreteWrite(&GPIO_LED, CHANNEL_1, (0 & (128 >> i)));
	}
}
