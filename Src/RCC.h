/*
 * RCC.h
 *
 *  Created on: Apr 17, 2021
 *      Author: Niaz
 */

#ifndef RCC_H_
#define RCC_H_

#define RCCAHB1ENR_REG_ADDR ((RCC_AHB1ENR_t*)(0x40023800 + 0x30))


typedef struct {
	uint32_t gpio_a_en		:1;
	uint32_t gpio_b_en		:1;
	uint32_t gpio_c_en		:1;
	uint32_t gpio_d_en		:1;
	uint32_t gpio_e_en		:1;
	uint32_t gpio_f_en		:1;
	uint32_t gpio_g_en		:1;
	uint32_t gpio_h_en		:1;
	uint32_t gpio_i_en		:1;
	uint32_t gpio_j_en		:1;
	uint32_t gpio_k_en		:1;
	uint32_t res_1			:1;
	uint32_t crc_en			:1;
	uint32_t res_2			:3;
	uint32_t res_3			:2;
	uint32_t bkpsram_en		:1;
	uint32_t res_4			:1;
	uint32_t ccm_dat_aram_en:1;
	uint32_t dma1_en		:1;
	uint32_t dma2_en		:1;
	uint32_t dma2d_en		:1;
	uint32_t res_5			:1;
	uint32_t eth_mac_en		:1;
	uint32_t eth_mac_txe	:1;
	uint32_t eth_mac_rxe	:1;
	uint32_t eth_mac_ptp_en	:1;
	uint32_t otghs_en		:1;
	uint32_t otghs_ulpi_en	:1;
	uint32_t res_6			:1;
} RCC_AHB1ENR_t;

#endif /* RCC_H_ */
