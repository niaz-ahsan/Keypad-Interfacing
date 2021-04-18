/*
 * actions.c
 *
 *  Created on: Apr 18, 2021
 *      Author: Niaz
 */

#include <stdint.h>
#include "GPIOx.h"

// Orange LED
void toggle_LD3(GPIOx_MODER_t volatile *const gpio_d_mode, GPIOx_ODR_t volatile *const gpio_d_odr, uint8_t times) {
	for(uint8_t i = 0; i < times; i++) {
		gpio_d_mode->pin_13 = 1; // enable pin 13 of GPIOD o/p Mode Register
		gpio_d_odr->pin_13 = 1; // enable pin 13 of GPIOD o/p Data Register
		for(uint32_t j = 0; j < 600000; j++); // creating fake delay
		gpio_d_mode->pin_13 = 0;
		gpio_d_odr->pin_13 = 0;
		for(uint32_t j = 0; j < 600000; j++); // creating fake delay
	}
}

// Green LED
void toggle_LD4(GPIOx_MODER_t volatile *const gpio_d_mode, GPIOx_ODR_t volatile *const gpio_d_odr, uint8_t times) {
	for(uint8_t i = 0; i < times; i++) {
		gpio_d_mode->pin_12 = 1; // enable pin 13 of GPIOD o/p Mode Register
		gpio_d_odr->pin_12 = 1; // enable pin 13 of GPIOD o/p Data Register
		for(uint32_t j = 0; j < 600000; j++); // creating fake delay
		gpio_d_mode->pin_12 = 0;
		gpio_d_odr->pin_12 = 0;
		for(uint32_t j = 0; j < 600000; j++); // creating fake delay
	}
}

// Red LED
void toggle_LD5(GPIOx_MODER_t volatile *const gpio_d_mode, GPIOx_ODR_t volatile *const gpio_d_odr, uint8_t times) {
	for(uint8_t i = 0; i < times; i++) {
		gpio_d_mode->pin_14 = 1; // enable pin 13 of GPIOD o/p Mode Register
		gpio_d_odr->pin_14 = 1; // enable pin 13 of GPIOD o/p Data Register
		for(uint32_t j = 0; j < 600000; j++); // creating fake delay
		gpio_d_mode->pin_14 = 0;
		gpio_d_odr->pin_14 = 0;
		for(uint32_t j = 0; j < 600000; j++); // creating fake delay
	}
}

// Blue LED
void toggle_LD6(GPIOx_MODER_t volatile *const gpio_d_mode, GPIOx_ODR_t volatile *const gpio_d_odr, uint8_t times) {
	for(uint8_t i = 0; i < times; i++) {
		gpio_d_mode->pin_15 = 1; // enable pin 13 of GPIOD o/p Mode Register
		gpio_d_odr->pin_15 = 1; // enable pin 13 of GPIOD o/p Data Register
		for(uint32_t j = 0; j < 600000; j++); // creating fake delay
		gpio_d_mode->pin_15 = 0;
		gpio_d_odr->pin_15 = 0;
		for(uint32_t j = 0; j < 600000; j++); // creating fake delay
	}
}

