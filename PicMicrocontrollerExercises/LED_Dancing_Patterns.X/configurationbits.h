/* 
 * File:   configurationbits.h
 * Author: JazerMarie
 *
 * Created on June 22, 2015, 10:49 PM
 */

#ifndef CONFIGURATIONBITS_H
#define	CONFIGURATIONBITS_H

#ifdef	__cplusplus
extern "C" {
#endif


// PIC16F877A Configuration Bit Settings

// 'C' source line config statements

#include <xc.h>

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

// CONFIG
#pragma config FOSC = LP        // Oscillator Selection bits (LP oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = OFF      // Brown-out Reset Enable bit (BOR disabled)
#pragma config LVP = ON         // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3/PGM pin has PGM function; low-voltage programming enabled)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)


#ifdef	__cplusplus
}
#endif

#endif	/* CONFIGURATIONBITS_H */

