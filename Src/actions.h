/*
 * actions.h
 *
 *  Created on: Apr 18, 2021
 *      Author: Niaz
 */

#ifndef ACTIONS_H_
#define ACTIONS_H_

// Orange LED
void toggle_LD3(GPIOx_MODER_t volatile *const gpio_d_mode, GPIOx_ODR_t volatile *const gpio_d_odr, uint8_t times);

// Green LED
void toggle_LD4(GPIOx_MODER_t volatile *const gpio_d_mode, GPIOx_ODR_t volatile *const gpio_d_odr, uint8_t times);

// Red LED
void toggle_LD5(GPIOx_MODER_t volatile *const gpio_d_mode, GPIOx_ODR_t volatile *const gpio_d_odr, uint8_t times);

// Blue LED
void toggle_LD6(GPIOx_MODER_t volatile *const gpio_d_mode, GPIOx_ODR_t volatile *const gpio_d_odr, uint8_t times);

#endif /* ACTIONS_H_ */
