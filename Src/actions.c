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
		gpio_d_mode->pin_13 = ENABLE; // enable pin 13 of GPIOD o/p Mode Register
		gpio_d_odr->pin_13 = ENABLE; // enable pin 13 of GPIOD o/p Data Register
		for(uint32_t j = 0; j < DELAY; j++); // creating fake delay
		gpio_d_mode->pin_13 = DISABLE;
		gpio_d_odr->pin_13 = DISABLE;
		for(uint32_t j = 0; j < DELAY; j++); // creating fake delay
	}
}

// Green LED
void toggle_LD4(GPIOx_MODER_t volatile *const gpio_d_mode, GPIOx_ODR_t volatile *const gpio_d_odr, uint8_t times) {
	for(uint8_t i = 0; i < times; i++) {
		gpio_d_mode->pin_12 = ENABLE; // enable pin 13 of GPIOD o/p Mode Register
		gpio_d_odr->pin_12 = ENABLE; // enable pin 13 of GPIOD o/p Data Register
		for(uint32_t j = 0; j < DELAY; j++); // creating fake delay
		gpio_d_mode->pin_12 = DISABLE;
		gpio_d_odr->pin_12 = DISABLE;
		for(uint32_t j = 0; j < DELAY; j++); // creating fake delay
	}
}

// Red LED
void toggle_LD5(GPIOx_MODER_t volatile *const gpio_d_mode, GPIOx_ODR_t volatile *const gpio_d_odr, uint8_t times) {
	for(uint8_t i = 0; i < times; i++) {
		gpio_d_mode->pin_14 = ENABLE; // enable pin 13 of GPIOD o/p Mode Register
		gpio_d_odr->pin_14 = ENABLE; // enable pin 13 of GPIOD o/p Data Register
		for(uint32_t j = 0; j < DELAY; j++); // creating fake delay
		gpio_d_mode->pin_14 = DISABLE;
		gpio_d_odr->pin_14 = DISABLE;
		for(uint32_t j = 0; j < DELAY; j++); // creating fake delay
	}
}

// Blue LED
void toggle_LD6(GPIOx_MODER_t volatile *const gpio_d_mode, GPIOx_ODR_t volatile *const gpio_d_odr, uint8_t times) {
	for(uint8_t i = 0; i < times; i++) {
		gpio_d_mode->pin_15 = ENABLE; // enable pin 13 of GPIOD o/p Mode Register
		gpio_d_odr->pin_15 = ENABLE; // enable pin 13 of GPIOD o/p Data Register
		for(uint32_t j = 0; j < DELAY; j++); // creating fake delay
		gpio_d_mode->pin_15 = DISABLE;
		gpio_d_odr->pin_15 = DISABLE;
		for(uint32_t j = 0; j < DELAY; j++); // creating fake delay
	}
}

