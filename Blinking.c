/*
 * File:   Blinking.c
 * Author: Miracol Obiano
 *
 * Created on July 31, 2017, 11:13 AM
 */


#include <xc.h>
#include "config.c"

void main(void) {
    int value = 0;
    TRISBbits.TRISB1=0;
    RB1=0;
    while(1){
        RB1 = ~RB1;
        __delay_ms(1000);
    }
}
