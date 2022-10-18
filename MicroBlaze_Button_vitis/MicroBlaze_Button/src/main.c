#include "main.h"

XGpio GPIO_LED;

int main()
{
    init_platform();

    buttonInst modeButton;
    buttonInst upButton;
    buttonInst downButton;

    Button_Init();
    Button_MakeInst(&modeButton, Button_0);
    Button_MakeInst(&upButton, Button_1);
    Button_MakeInst(&downButton, Button_2);
    while (1)
    {
    	if(Buttom_GetState(&modeButton)){
    		print("pushed mode button\n\r");
    	}
    	else if(Buttom_GetState(&upButton)){
    		print("pushed mode button\n\r");
    	}
    	else if(Buttom_GetState(&downButton)){
    		print("pushed mode button\n\r");
    	}
    }

    cleanup_platform();
    return 0;
}
