/*
 * GPIOx.h
 *
 *  Created on: Apr 17, 2021
 *      Author: Niaz
 */

#ifndef GPIOX_H_
#define GPIOX_H_

#define GPIOD_MODE_REG_ADDR 		((GPIOx_MODER_t*)(0x40020C00 + 0x00))
#define GPIOD_OUT_DATA_REG_ADDR 	((GPIOx_ODR_t*)(0x40020C00 + 0x14))
#define GPIOD_IN_DATA_REG_ADDR 		((GPIOx_IDR_t*)(0x40020C00 + 0x10))
#define GPIOD_PUPDR_REG_ADDR 		((GPIOx_PUPDR*)(0x40020C00 + 0x0C))

#define ENABLE	 	(1)
#define DISABLE 	(0)
#define DELAY 		(600000)

#define KEYPAD_ROW_1	(1)
#define KEYPAD_ROW_2	(2)
#define KEYPAD_ROW_3	(3)
#define KEYPAD_ROW_4	(4)

typedef struct {
	uint32_t pin_0		:2;
	uint32_t pin_1		:2;
	uint32_t pin_2		:2;
	uint32_t pin_3		:2;
	uint32_t pin_4		:2;
	uint32_t pin_5		:2;
	uint32_t pin_6		:2;
	uint32_t pin_7		:2;
	uint32_t pin_8		:2;
	uint32_t pin_9		:2;
	uint32_t pin_10		:2;
	uint32_t pin_11		:2;
	uint32_t pin_12		:2;
	uint32_t pin_13		:2;
	uint32_t pin_14		:2;
	uint32_t pin_15		:2;
} GPIOx_MODER_t;

typedef struct {
	uint32_t pin_0		:1;
	uint32_t pin_1		:1;
	uint32_t pin_2		:1;
	uint32_t pin_3		:1;
	uint32_t pin_4		:1;
	uint32_t pin_5		:1;
	uint32_t pin_6		:1;
	uint32_t pin_7		:1;
	uint32_t pin_8		:1;
	uint32_t pin_9		:1;
	uint32_t pin_10		:1;
	uint32_t pin_11		:1;
	uint32_t pin_12		:1;
	uint32_t pin_13		:1;
	uint32_t pin_14		:1;
	uint32_t pin_15		:1;
	uint32_t res		:16;
} GPIOx_ODR_t;

typedef struct {
	uint32_t pin_0		:1;
	uint32_t pin_1		:1;
	uint32_t pin_2		:1;
	uint32_t pin_3		:1;
	uint32_t pin_4		:1;
	uint32_t pin_5		:1;
	uint32_t pin_6		:1;
	uint32_t pin_7		:1;
	uint32_t pin_8		:1;
	uint32_t pin_9		:1;
	uint32_t pin_10		:1;
	uint32_t pin_11		:1;
	uint32_t pin_12		:1;
	uint32_t pin_13		:1;
	uint32_t pin_14		:1;
	uint32_t pin_15		:1;
	uint32_t res		:16;
} GPIOx_IDR_t;

typedef struct {
	uint32_t pin_0		:2;
	uint32_t pin_1		:2;
	uint32_t pin_2		:2;
	uint32_t pin_3		:2;
	uint32_t pin_4		:2;
	uint32_t pin_5		:2;
	uint32_t pin_6		:2;
	uint32_t pin_7		:2;
	uint32_t pin_8		:2;
	uint32_t pin_9		:2;
	uint32_t pin_10		:2;
	uint32_t pin_11		:2;
	uint32_t pin_12		:2;
	uint32_t pin_13		:2;
	uint32_t pin_14		:2;
	uint32_t pin_15		:2;
} GPIOx_PUPDR;

#endif /* GPIOX_H_ */
