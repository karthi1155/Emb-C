#include "pwm.h"

void initPWM()
{
    TCCR1A |= (1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
    TCCR1B |= (1<<WGM12)|(1<<CS11)|(1<<CS10);
    DDRB |= (1<<PB1);
}

char Generate_PWM(uint16_t temp)
{
    char temperature = 0;
    if((temp>0)&&(temp<=200))
    {
        //setting 20% duty cycle
        OCR1A = 150;
        temperature = 20;
        _delay_ms(100);
    }
    else if((temp>=210)&&(temp<=500))
    {
        //setting 40% duty cycle
        OCR1A = 500;
        temperature = 25;
        _delay_ms(100);
    }
    else if((temp>=510)&&(temp<=700))
    {
        //setting 70% duty cycle
        OCR1A = 680;
        temperature = 29;
        _delay_ms(100);
    }
    else if((temp>=710)&&(temp<=1024))
    {
        //setting 95% duty cycle
        OCR1A = 1024;
        temperature = 33;
        _delay_ms(100);
    }
    return temperature;
}