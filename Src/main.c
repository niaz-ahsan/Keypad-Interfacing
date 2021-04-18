/**
 ******************************************************************************
 Problem Statement: Detect which key is pressed in keypad

 Objective:
 A 4x4 Membrane Keypad used
 If pressed
 1 - Blink LD3 (Orange) 1x
 2 - Blink LD4 (Green) 1x
 3 - Blink LD5 (Red) 1x
 A - Blink LD6 (Blue) 1x

 4 - Blink LD3 (Orange) 2x
 5 - Blink LD4 (Green) 2x
 6 - Blink LD5 (Red) 2x
 B - Blink LD6 (Blue) 2x

 7 - Blink LD3 (Orange) 3x
 8 - Blink LD4 (Green) 3x
 9 - Blink LD5 (Red) 3x
 C - Blink LD6 (Blue) 3x

 * - Blink LD3 (Orange) 4x
 0 - Blink LD4 (Green) 4x
 # - Blink LD5 (Red) 4x
 D - Blink LD6 (Blue) 4x

 Mapping:
 8x pins of Keypad - MCU mapped
 R1 -> PD0
 R2 -> PD1
 R3 -> PD2
 R4 -> PD3
 C1 -> PD8
 C2 -> PD9
 C3 -> PD10
 C4 -> PD11
 ******************************************************************************
 */

#include <stdint.h>
#include <stdio.h>
#include "RCC.h"
#include "GPIOx.h"
#include "actions.h"

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

void check_what_to_do(uint8_t row, GPIOx_MODER_t volatile *const gpiod_mode_reg, GPIOx_ODR_t volatile *const gpiod_output_data_reg, GPIOx_IDR_t volatile *const gpiod_input_data_reg) {
	if(!gpiod_input_data_reg->pin_8) {
		// button 1 pressed!
		toggle_LD3(gpiod_mode_reg, gpiod_output_data_reg, row);
	}

	if(!gpiod_input_data_reg->pin_9) {
		// button 2 pressed!
		toggle_LD4(gpiod_mode_reg, gpiod_output_data_reg, row);
	}

	if(!gpiod_input_data_reg->pin_10) {
		// button 3 pressed!
		//printf("Button 3 pressed\n");
		toggle_LD5(gpiod_mode_reg, gpiod_output_data_reg, row);
	}

	if(!gpiod_input_data_reg->pin_11) {
		// button A pressed!
		//printf("Button A pressed\n");
		toggle_LD6(gpiod_mode_reg, gpiod_output_data_reg, row);
	}
}

int main() {
	RCC_AHB1ENR_t volatile *const clock_ctrl_reg 			= (RCC_AHB1ENR_t*) 	(0x40023800 + 0x30);
	GPIOx_MODER_t volatile *const gpiod_mode_reg			= (GPIOx_MODER_t*) 	(0x40020C00 + 0x00);
	GPIOx_ODR_t volatile *const gpiod_output_data_reg		= (GPIOx_ODR_t*) 	(0x40020C00 + 0x14);
	GPIOx_IDR_t volatile *const gpiod_input_data_reg		= (GPIOx_IDR_t*) 	(0x40020C00 + 0x10);
	GPIOx_PUPDR volatile *const gpiod_pull_up_down_reg		= (GPIOx_PUPDR*) 	(0x40020C00 + 0x0C);

	// enable clock for GPIOD
	clock_ctrl_reg->gpio_d_en = 1;

	// considering PD0, PD1, PD2, PD3 as rows, hence o/p mode
	gpiod_mode_reg->pin_0 = 1;
	gpiod_mode_reg->pin_1 = 1;
	gpiod_mode_reg->pin_2 = 1;
	gpiod_mode_reg->pin_3 = 1;

	// setting PD0, PD1, PD2, PD3 as High
	gpiod_output_data_reg->pin_0 = 1;
	gpiod_output_data_reg->pin_1 = 1;
	gpiod_output_data_reg->pin_2 = 1;
	gpiod_output_data_reg->pin_3 = 1;

	// considering PD8, PD9, PD10, PD11 as columns, hence i/p mode
	gpiod_mode_reg->pin_8 = 0;
	gpiod_mode_reg->pin_9 = 0;
	gpiod_mode_reg->pin_10 = 0;
	gpiod_mode_reg->pin_11 = 0;

	// Enabling pull-up resistors for columns (PD8, PD9, PD10, PD11)
	gpiod_pull_up_down_reg->pin_8 = 1;
	gpiod_pull_up_down_reg->pin_9 = 1;
	gpiod_pull_up_down_reg->pin_10 = 1;
	gpiod_pull_up_down_reg->pin_11 = 1;

	while(1) {
		// R1 is lowered/grounder
		gpiod_output_data_reg->pin_0 = 0;

		//check if any Cx/colums are low, if so that button is pressed!
		check_what_to_do(1, gpiod_mode_reg, gpiod_output_data_reg, gpiod_input_data_reg);

		// R1 bring back to old state
		gpiod_output_data_reg->pin_0 = 1;

		// R2 is lowered/grounder
		gpiod_output_data_reg->pin_1 = 0;

		//check if any Cx/colums are low, if so that button is pressed!
		check_what_to_do(2, gpiod_mode_reg, gpiod_output_data_reg, gpiod_input_data_reg);

		// R2 bring back to old state
		gpiod_output_data_reg->pin_1 = 1;

		// R3 is lowered/grounder
		gpiod_output_data_reg->pin_2 = 0;

		//check if any Cx/colums are low, if so that button is pressed!
		check_what_to_do(3, gpiod_mode_reg, gpiod_output_data_reg, gpiod_input_data_reg);

		// R3 bring back to old state
		gpiod_output_data_reg->pin_2 = 1;

		// R4 is lowered/grounder
		gpiod_output_data_reg->pin_3 = 0;

		//check if any Cx/colums are low, if so that button is pressed!
		check_what_to_do(4, gpiod_mode_reg, gpiod_output_data_reg, gpiod_input_data_reg);

		// R3 bring back to old state
		gpiod_output_data_reg->pin_3 = 1;

	}
}








