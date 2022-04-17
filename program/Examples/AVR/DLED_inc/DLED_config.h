/*
by KK ©
 */
#ifndef DLED_CONFIG_H_INCLUDED
#define DLED_CONFIG_H_INCLUDED
//configure pins-> see F5463BH.pdf in dokumentacje/
/*
select platform on which you are:
0-AVR
1-STM32
...<- you must write by yourself low level drivers-> dled_int() and dled_init()
*/
#define DLED_SYS 0


/* configure connections */
//connections

//first digit
#define DIG1_PIN 0
#define DIG1_PORT B

//second
#define DIG2_PIN 1
#define DIG2_PORT B

//third
#define DIG3_PIN 2
#define DIG3_PORT B

//fourth
#define DIG4_PIN 3
#define DIG4_PORT B

#define D_A_PIN 0
#define D_A_PORT D

#define D_B_PIN 1
#define D_B_PORT D

#define D_C_PIN 2
#define D_C_PORT D

#define D_D_PIN 3
#define D_D_PORT D

#define D_E_PIN 4
#define D_E_PORT D

#define D_F_PIN 5
#define D_F_PORT D

#define D_G_PIN 6
#define D_G_PORT D







#endif // DLED_CONFIG_H_INCLUDED
