#include "main.h"

int main()
{
    init_platform();

    buttonInst modeButton;
    buttonInst LshiftButton;
    buttonInst RshiftButton;
    buttonInst offButton;

    Led_Init();
    Button_Init();
    Button_MakeInst(&modeButton, Button_0);
    Button_MakeInst(&LshiftButton, Button_3);
    Button_MakeInst(&RshiftButton, Button_2);
    Button_MakeInst(&offButton, Button_1);

    static int button_count = 0;
    while (1)
    {
    	if(Buttom_GetState(&modeButton)){
    		print("pushed mode button\n\r");
    		button_count ++;
			button_count %= 2;
			if(button_count)
			{
				Led_On();
			}
			else
			{
				Led_Off();
				button_count = 0;
			}
    	}
    	if(Buttom_GetState(&LshiftButton)){
    		print("pushed LshiftButton button\n\r");
    		Led_Lshift();
    	}
    	if(Buttom_GetState(&RshiftButton)){
			print("pushed RshiftButton button\n\r");
			Led_Rshift();
		}
    }
    cleanup_platform();
    return 0;
}
