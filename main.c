#include "all_header.h"


int main(void)
{
    initPort();
    initADC();
    initPWM();
    initUSART(103);

    while(1)
    {
        int systemStatus;
        systemStatus = check();
        
        if(systemStatus)
        {
            char temperature;
            uint16_t temp;

            temp = readADC(5);
            _delay_ms(200);
            temperature = Generate_PWM(temp);
            _delay_ms(200);
            transmitCharUSART(temperature);
        }
        else
        {
            OCR1A = 0;
        }
    }
}