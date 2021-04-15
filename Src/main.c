/**
 ******************************************************************************
 Problem Statement: Detect which key is pressed in keypad
 ******************************************************************************
 */

#include <stdint.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
	uint32_t volatile *const RCC_clock = (uint32_t*) 0x40023830; // RCC_AHB1ENR Address
	uint32_t volatile *const GPIO_D_mode = (uint32_t*) 0x40020C00; // GPIO D Mode Register Address
	uint32_t volatile *const GPIO_D_output_data = (uint32_t*) 0x40020C14; // GPIO D O/P Data Register Address
	uint32_t const volatile *const GPIO_D_input_data = (uint32_t*) 0x40020C10; // GPIO D i/p Data Register Address
	uint32_t volatile *const GPIO_D_pull_up_down_resistors = (uint32_t*) 0x40020C0C; // GPIO D Pull up/down Resistors

	// enable clock for GPIO D. Setting 3rd bit
	*RCC_AHB1 |= (1 << 3);



    /* Loop forever */
	for(;;);
}
