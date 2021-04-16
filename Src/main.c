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
	uint32_t volatile *const GPIO_D_pull_up_down = (uint32_t*) 0x40020C0C; // GPIO D Pull up/down Resistors

	// enable clock for GPIO D. Setting 3rd bit
	*RCC_AHB1 |= (1 << 3);

	/* clearing PD0, PD1, PD2, PD3 on i/p mode for Keypad columns
	 setting PD6, PD7, PD8, PD9 on o/p mode for Keypad rows
	 This is done on GPIO D Mode register */

	// Clearing 1st 8 bits for PD0, PD1, PD2, PD3 on i/p mode
	*GPIO_D_mode &= ~(255 << 0);
	// Setting 12 - 19 bits for PD6, PD7, PD8, PD9 on o/p mode
	*GPIO_D_mode |= (85 << 12);

	// Have pull up registers ready to keep PD0, PD1, PD2, PD3 High. Hence 1st 8 bits (0-7) of pull up registers should be 01010101 = 85
	*GPIO_D_pull_up_down |= (85 << 0);

	// Set PD6, PD7, PD8, PD9 to High as those are rows
	*GPIO_D_output_data |= (15 << 6);

	// Super loop starts
	while(1) {
		/* Low PD6 and test PD0, PD1, PD2, PD3
		 * if any of PD0, PD1, PD2, PD3 is low (initially they're high by pull up reg) consider that button is pressed
		 */

	}
}
