/*
 * File:   runningLed.c
 * Author: mc
 *
 * Created on 27 October 2022, 15:28
 */
#define _XTAL_FREQ 8000000
#define config FOSC = HS
#define config WDTE = ON
#define config PWRTE = OFF
#define config BOREN = ON
#define config LVP = OFF
#define config CPD = OFF
#define config WRT = OFF
#define config CP = OFF

#include <xc.h>

void main(void) {
    TRISB = 0X00;
    PORTB = 0X00;
    TRISD = 0X01;
    
    TRISC = 0x00;
    PORTC = 0x00;
    while (1) {
        if (RD0 == 0) {
            PORTB = 0x01;
            __delay_ms(200);
            PORTB = 0x02;
            __delay_ms(200);
            PORTB = 0x04;
            __delay_ms(200);
            PORTB = 0x08;
            __delay_ms(200);
            PORTB = 0x10;
            __delay_ms(200);
            PORTB = 0x20;
            __delay_ms(200);
            PORTB = 0x40;
            __delay_ms(200);
            PORTB = 0x80;
            __delay_ms(200);
            PORTB = 0x00;
            RC0 = 0x01;
            __delay_ms(200);
            RC0 = 0x0;

        }else{
            RC0 = 0x01;
            __delay_ms(200);
            RC0 = 0x0;
            PORTB = 0x80;
            __delay_ms(200);
            PORTB = 0x40;
            __delay_ms(200);
            PORTB = 0x20;
            __delay_ms(200);
            PORTB = 0x10;
            __delay_ms(200);
             PORTB = 0x08;
            __delay_ms(200);
            PORTB = 0x04;
            __delay_ms(200);
            PORTB = 0x02;
            __delay_ms(200);
            PORTB = 0x01;
            __delay_ms(200);
            PORTB = 0x00;
        }
    }
}
