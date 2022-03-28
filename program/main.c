/*
example code for 4 digit 7 fragment universal library

by KK ©
 */
///###standard libraries###
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

///###LED_display 4 characters 7segment###

#include "Display_LED/DLED.h"


int main(void)
{

    // Initialize
    dled_init();

    ///!important element-> without this Display will not work good
//interval around 200 times per second
    TCCR0A=0;
    TCCR0A|=(1<<WGM01); //CTC mode
    TCCR0B=0;
    TCCR0B|=(1<<CS02); //div by 256 -> I have 12 Mhz crystal quartz
    OCR0A=234; //to have around 200 times per second
    TIMSK|=(1<<OCIE0A); //enable compare match interrupt
    sei(); //enable global interrupts
    ///!!!!!

    //to see description of each function see dled.h

    //some code you want to do
    //at start display is empty soooo let's fill it

    // D_D1 mean that we are setting on first digit, D_B and D_C are the fragments of display described as a B and C in datasheet, 1 means to enable
    dled_set(D_D1,D_B,1); //number 1
    dled_set(D_D1,D_C,1);
    dled_setd(D_D2,0b01011011); //number 2 - A,B,D,E,G on
    dled_setd(D_D3,0b01001111); //number 3
    dled_setd(D_D4,0b01100110); //number 4

    _delay_ms(1000);
    dled_clear();
    dled_setd(D_D4,0b00000110); //1
    dled_setd(D_D3,0b01011011); //2
    dled_setd(D_D2,0b01001111); //3
    dled_setd(D_D1,0b01100110); //4

    _delay_ms(1000);
    dled_cleard(D_D2);
    _delay_ms(1000);

    dled_setd(D_D1,D_5); //5
    dled_setd(D_D2,D_6); //6
    dled_setd(D_D3,D_7); //7
    dled_setd(D_D4,D_8); //8

    _delay_ms(1000);
    dled_setd(D_D3,D_9); //9
    _delay_ms(1000);

    dled_setn(1024); //1024 on screen

    _delay_ms(1000);

    dled_setn(-257); //-257

    while(1)
    ;

    return 0;
}


///!important element-> without this Display will not work good
ISR(TIMER0_COMPA_vect){
dled_int(); //refresh display
}
///!
