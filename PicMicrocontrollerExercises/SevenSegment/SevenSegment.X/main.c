/* 
 * File:   main.c
 * Author: JazerMarie
 *
 * Created on July 30, 2016, 8:12 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "configuration.h"

#define _XTAL_FREQ 8000000

static unsigned char anodeNumbers[] =
{
    0xC0, // 0
    0xF9, // 1
    0xA4, // 2
    0xB0, // 3
    0x99, // 4
    0x92, // 5
    0x82, // 6
    0xF8, // 7
    0x80, // 8
    0x90, // 9
};

static unsigned char cathodeNumbers[] =
{
    0x3F, // 0
    0x06, // 1
    0x5B, // 2
    0x4F, // 3
    0x66, // 4
    0x6D, // 5
    0x7D, // 6
    0x07, // 7
    0x7F, // 8
    0x6F, // 9
};

typedef enum
{
    Zero,
    One,
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    MaxNumber
}etypeNumbers;

int main(int argc, char** argv) {

    unsigned char displayCounter = Zero;

    PORTB = anodeNumbers[displayCounter];
    TRISB = 0x00;

    PORTC = displayCounter;
    TRISC = 0x00;

    PORTD = cathodeNumbers[displayCounter];
    TRISD = 0x00;
    
    while(1)
    {
        __delay_ms(500);

        displayCounter++;
        if (displayCounter >= MaxNumber)
        {
            displayCounter = Zero;
        }

        PORTB = anodeNumbers[displayCounter];
        PORTD = cathodeNumbers[displayCounter];
        PORTC = displayCounter;
    }
}

