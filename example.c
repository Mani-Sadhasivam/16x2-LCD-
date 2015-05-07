#include "DSP28x_Project.h"     // Device Headerfile and Examples Include File
#include "piccolo_lcd.h"
#include "f2802x_common/include/gpio.h"
#include "f2802x_common/include/pie.h"
#include "f2802x_common/include/wdog.h"
#include "f2802x_common/include/clk.h"


void InitialGpio(void);
extern GPIO_Handle myGpio;
void main(void)
{

	WDOG_Handle myWDog;
    myWDog = WDOG_init((void *)WDOG_BASE_ADDR, sizeof(WDOG_Obj));
	WDOG_disable(myWDog);

	myGpio = GPIO_init((void *)GPIO_BASE_ADDR, sizeof(GPIO_Obj));
    InitialGpio();

	InitializeLCD();
	DELAY_US(500);
	DisplayLCD(1,"Mani");

    while(1);       // Stop here
	   }

void InitialGpio()
{
	      GPIO_setMode(myGpio, GPIO_Number_0, GPIO_0_Mode_GeneralPurpose);
		  GPIO_setDirection(myGpio, GPIO_Number_0, GPIO_Direction_Output);
		  GPIO_setMode(myGpio, GPIO_Number_1, GPIO_1_Mode_GeneralPurpose);
		  GPIO_setDirection(myGpio, GPIO_Number_1, GPIO_Direction_Output);
		  GPIO_setMode(myGpio, GPIO_Number_2, GPIO_2_Mode_GeneralPurpose);
		  GPIO_setDirection(myGpio, GPIO_Number_2, GPIO_Direction_Output);
		  GPIO_setMode(myGpio, GPIO_Number_3, GPIO_3_Mode_GeneralPurpose);
		  GPIO_setDirection(myGpio, GPIO_Number_3, GPIO_Direction_Output);
		  GPIO_setMode(myGpio, GPIO_Number_4, GPIO_4_Mode_GeneralPurpose);
		  GPIO_setDirection(myGpio, GPIO_Number_4, GPIO_Direction_Output);
		  GPIO_setMode(myGpio, GPIO_Number_5, GPIO_5_Mode_GeneralPurpose);
		  GPIO_setDirection(myGpio, GPIO_Number_5, GPIO_Direction_Output);
		  GPIO_setMode(myGpio, GPIO_Number_6, GPIO_6_Mode_GeneralPurpose);
		  GPIO_setDirection(myGpio, GPIO_Number_6, GPIO_Direction_Output);
		  GPIO_setMode(myGpio, GPIO_Number_7, GPIO_7_Mode_GeneralPurpose);
		  GPIO_setDirection(myGpio, GPIO_Number_7, GPIO_Direction_Output);
		  GPIO_setMode(myGpio, GPIO_Number_16, GPIO_16_Mode_GeneralPurpose);
		  GPIO_setDirection(myGpio, GPIO_Number_16, GPIO_Direction_Output);
		  GPIO_setMode(myGpio, GPIO_Number_18, GPIO_18_Mode_GeneralPurpose);
		  GPIO_setDirection(myGpio, GPIO_Number_18, GPIO_Direction_Output);


}
