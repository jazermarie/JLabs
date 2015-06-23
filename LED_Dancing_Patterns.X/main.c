#include "configurationbits.h"
#define _XTAL_FREQ 4000000

#define NEGATING_PATTERN 1

int main(int argc, char** argv)
{
    TRISB = 0x00;
    PORTB = 0x00;

#if NEGATING_PATTERN
    int nextPattern = 0b10101010;

    while(1)
    {
        PORTB = nextPattern;

        nextPattern ^= 0xFF;
        __delay_ms(250);        
    }
#else
    int shiftCount = 0;
    int toTheLeft = 1;

    while(1)
    {
        PORTB = 0x1 << shiftCount;

        __delay_ms(100);

        if(1 == toTheLeft)
        {
            shiftCount++;

            if(shiftCount > 7)
            {
                shiftCount = 6;
                toTheLeft = 0;
            }
        }
        else
        {
            shiftCount--;

            if(shiftCount < 0)
            {
                shiftCount = 1;
                toTheLeft = 1;
            }
        }
    }
#endif
    return 0;
}

