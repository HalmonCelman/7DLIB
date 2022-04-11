/*
by KK ©
 */
#ifndef DLED_H_INCLUDED
#define DLED_H_INCLUDED

#include <avr/io.h>
#include "DLED_config.h"

/*
some decription about this what is below
we can't write #define DDR(x) DDR##x cause it's causing error
so we must 'trick' preprocessor and do:
#define sth(x,y) x##y
#define another_sth(x) sth(something,x)
*/

#define PREP_TRICK_DDR(x,y) x??=#y   //so much fun using trigraph XD
#define DDR(x) PREP_TRICK_DDR(DDR,x)

#define PREP_TRICK_PORT(x,y) x##y
#define PORT(x) PREP_TRICK_PORT(PORT,x)

#define PREP_TRICK_PIN(x,y) x##y
#define PIN(x) PREP_TRICK_PIN(PIN,x)



typedef enum {
D_A=0,
D_B,
D_C,
D_D,
D_E,
D_F,
D_G
}dled_fragment;

typedef enum{
D_D1=0,
D_D2,
D_D3,
D_D4
}dled_digit;


#define D_0 0b00111111
#define D_1 0b00000110
#define D_2 0b01011011
#define D_3 0b01001111
#define D_4 0b01100110
#define D_5 0b01101101
#define D_6 0b01111101
#define D_7 0b00000111
#define D_8 0b01111111
#define D_9 0b01101111



/*dled_init()-> initialize led display, and clear screen*/
void dled_init(void);

/*
dled_set() -> set or clear fragment of display
1st param - which digit you want to edit
2nd param - which fragment(enum)
0 - A
1 - B
2 - C
3 - D
4 - E
5 - F
6 - G
3rd param - set or clear 1:set 0:clear
*/
void dled_set(uint8_t,uint8_t,uint8_t);


/*
dled_setd() -> set digit
1st param - which digit
2nd param - what value
0b x x x x x x x x
     ^ ^ ^ ^ ^ ^ ^
     | | | | | | |
     G F E D C B A
  x=1 : on
  x=0 : off
*/
void dled_setd(uint8_t,uint8_t);

/*
dled_clear()-> clears screen
*/
void dled_clear(void);

/*
dled_setn() - set number
1st param - number to set, up to 9999 min -999
*/
void dled_setn(int);

/*
dled_cleard()-> clears digit
1st param - which digit to clear
*/
void dled_cleard(uint8_t);


/*
dled_int()
low level - refreshing screen - see README to information about how to use
*/
void dled_int(void);





uint8_t d_4_7_s_d;
char d_4_7_s[4];



#endif // DLED_H_INCLUDED
