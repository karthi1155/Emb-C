/**
 * @file project_config.h
 * @author Karthika (srikarthi2017@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __PROJECT_CONFIG_H__
#define __PROJECT_CONFIG_H__

#include<avr/io.h>

#define F_CPU 1600000UL

#include <util/delay.h>

///Input ports for switches
#define HEATER PC0
#define DRIVER PC1

///output ports for LEDS
#define STATUS_LED PB0

///Data direction registers for LEDs and switches
#define SWITCH DDRC
#define LED DDRB

///Input port for switches
#define TEMP_SENSOR_IP PINC
#define LED_OP PORTB

#endif