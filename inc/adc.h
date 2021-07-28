/**
 * @file adc.h
 * @author Karthika (srikarthi2017@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ADC_H__
 #define __ADC_H__

#include<avr/io.h>

/**
 * @brief Function to initialize the registers required to read data from the ADC
 */
 void initADC();

 /**
  * @brief Function to read data from the ADC
  */
uint16_t readADC(uint8_t ch);

 #endif