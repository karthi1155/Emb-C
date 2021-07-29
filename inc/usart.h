#ifndef __USART_H__
 #define __USART_H__
 #include<avr/io.h>
 #include<avr/pgmspace.h>
 #include "project_config.h"
 #include<util/delay.h>


 /**
  * @brief Function to initialize the registers required for serial communication
  */
  void initUSART(uint16_t ubrr_value);

/**
 * @brief Function that decides the data to be tranmitted and then calls the function to transmit the data
 */
void transmitCharUSART(char data);

#endif
