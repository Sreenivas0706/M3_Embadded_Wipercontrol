
#if !defined(__SOFT_FP__) && defined(__ARM_FP)
#warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#include "drivers_func.h"
#include <stdio.h>

static void Engine_on(void);			   // here this function will Turn on the red LED
static void Engine_off(void);		   // here this function will Turn off the red LED
static void wiper_clock(void);  // here this function will on and off LED's with a certain delay 
static void wiper_clockspeed(void); // here this function will on and off LED's with a certain delay
static void Engine_on(void) //This function Engine on 
{
	led_on(LED_RED);
}

static void wiper_clock(void) // This function will run the wiper  
{

	led_on(LED_BLUE);
	my_delay_ms(350);
	led_off(LED_BLUE);
	led_on(LED_GREEN);
	my_delay_ms(350);
	led_off(LED_GREEN);
	led_on(LED_ORANGE);
	my_delay_ms(350);
	led_off(LED_ORANGE);
	led_on(LED_GREEN);
	my_delay_ms(350);
	led_off(LED_GREEN);
	led_on(LED_BLUE);
	my_delay_ms(350);
	led_off(LED_BLUE);
}

static void wiper_clockspeed(void) // This function will run the wiper in one speed 
{

	led_on(LED_BLUE);
	my_delay_ms(250);
	led_off(LED_BLUE);
	led_on(LED_GREEN);
	my_delay_ms(250);
	led_off(LED_GREEN);
	led_on(LED_ORANGE);
	my_delay_ms(250);
	led_off(LED_ORANGE);
	led_on(LED_GREEN);
	my_delay_ms(250);
	led_off(LED_GREEN);
	led_on(LED_BLUE);
	my_delay_ms(250);
	led_off(LED_BLUE);
}
static void Engine_off(void) // This function will Engine off the car
{
	led_off(LED_RED);
}


int main(void)
{

	led_init_all();
	button_init();

	while (1)
	{
		int btncnt = btn_press();
		volatile int encrypredData = Encryption(btncnt);
		if (encrypredData == 1244)
		{ // comparing encrypted data
			Engine_on();
			btncnt = 0;
		}
		else if (encrypredData == 1843)
		{ // comparing encrypted data
			Engine_off();
			btncnt = 0;
		}
		else if (encrypredData == 6789)
		{ // comparing encrypted data
			wiper_clock();

			btncnt = 0;
		}
		else if (encrypredData == 5478)
		{ // comparing encrypted data
			wiper_clockspeed();
			btncnt = 0;
		}
		
	}
}