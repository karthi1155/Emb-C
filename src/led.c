#include "led.h"

void initPort()
{
     ///setting the pin C0 and C1 as input by clearing bit
    SWITCH &= ~(1<<HEATER);
    SWITCH &= ~(1<<DRIVER);

    ///setting the pin B0 as output
    LED |= (1<<STATUS_LED);
}

int check()
{
    ///The integers that temporarily store the status of the input switches
        volatile int switch1, switch2;
        int flag = 0;
        ///Storing the switch input in variables
        switch1 = TEMP_SENSOR_IP&(1<<HEATER);
        _delay_ms(200);
        switch2 = TEMP_SENSOR_IP&(1<<DRIVER);
        _delay_ms(200);
        //checking if both the push button switches are switched on

        if (switch1&&switch2)
        {
            ///LED is switched on if both switches are high
            LED_OP |= (1<<STATUS_LED);
            _delay_ms(1000);
            flag = 1;
        }
        else
        {
            //LED is off otherwise
            LED_OP &= ~(1<<STATUS_LED);
            _delay_ms(1000);
        }
        if (flag==1)
        return 1;
        return 0;
}