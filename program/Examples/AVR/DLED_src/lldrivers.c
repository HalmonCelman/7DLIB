/*
by KK
*/
#include "../DLED_inc/DLED.h"

#if DLED_SYS==0
//init
void dled_init(){
    number_7dlib=0;
    for(int i=0;i<4;i++){
    buffer_7dlib[i]=0;
    }
    //all out
DDR(DIG1_PORT) |= (1<<DIG1_PIN);
DDR(DIG2_PORT) |= (1<<DIG2_PIN);
DDR(DIG3_PORT) |= (1<<DIG3_PIN);
DDR(DIG4_PORT) |= (1<<DIG4_PIN);

DDR(D_A_PORT) |= (1<<D_A_PIN);
DDR(D_B_PORT) |= (1<<D_B_PIN);
DDR(D_C_PORT) |= (1<<D_C_PIN);
DDR(D_D_PORT) |= (1<<D_D_PIN);
DDR(D_E_PORT) |= (1<<D_E_PIN);
DDR(D_F_PORT) |= (1<<D_F_PIN);
DDR(D_G_PORT) |= (1<<D_G_PIN);


PORT(DIG1_PORT) &=~ (1<<DIG1_PIN);
PORT(DIG2_PORT) &=~ (1<<DIG2_PIN);
PORT(DIG3_PORT) &=~ (1<<DIG3_PIN);
PORT(DIG4_PORT) &=~ (1<<DIG4_PIN);

PORT(D_A_PORT) |= (1<<D_A_PIN);
PORT(D_B_PORT) |= (1<<D_B_PIN);
PORT(D_C_PORT) |= (1<<D_C_PIN);
PORT(D_D_PORT) |= (1<<D_D_PIN);
PORT(D_E_PORT) |= (1<<D_E_PIN);
PORT(D_F_PORT) |= (1<<D_F_PIN);
PORT(D_G_PORT) |= (1<<D_G_PIN);

}



void dled_int(){
switch(number_7dlib){
case 0:
    PORT(DIG4_PORT) &=~ (1<<DIG4_PIN);
    PORT(DIG1_PORT) |= (1<<DIG1_PIN);
    break;
case 1:
    PORT(DIG1_PORT) &=~ (1<<DIG1_PIN);
    PORT(DIG2_PORT) |= (1<<DIG2_PIN);
    break;
case 2:
    PORT(DIG2_PORT) &=~ (1<<DIG2_PIN);
    PORT(DIG3_PORT) |= (1<<DIG3_PIN);
    break;
case 3:
    PORT(DIG3_PORT) &=~ (1<<DIG3_PIN);
    PORT(DIG4_PORT) |= (1<<DIG4_PIN);
    break;
}


PORT(D_A_PORT) |= (1<<D_A_PIN);
PORT(D_B_PORT) |= (1<<D_B_PIN);
PORT(D_C_PORT) |= (1<<D_C_PIN);
PORT(D_D_PORT) |= (1<<D_D_PIN);
PORT(D_E_PORT) |= (1<<D_E_PIN);
PORT(D_F_PORT) |= (1<<D_F_PIN);
PORT(D_G_PORT) |= (1<<D_G_PIN);

if(buffer_7dlib[number_7dlib]>>D_A & 1){
    PORT(D_A_PORT) &=~ (1<<D_A_PIN);
}
if(buffer_7dlib[number_7dlib]>>D_B & 1){
    PORT(D_B_PORT) &=~ (1<<D_B_PIN);
}
if(buffer_7dlib[number_7dlib]>>D_C & 1){
    PORT(D_C_PORT) &=~ (1<<D_C_PIN);
}
if(buffer_7dlib[number_7dlib]>>D_D & 1){
    PORT(D_D_PORT) &=~ (1<<D_D_PIN);
}
if(buffer_7dlib[number_7dlib]>>D_E & 1){
    PORT(D_E_PORT) &=~ (1<<D_E_PIN);
}
if(buffer_7dlib[number_7dlib]>>D_F & 1){
    PORT(D_F_PORT) &=~ (1<<D_F_PIN);
}
if(buffer_7dlib[number_7dlib]>>D_G & 1){
    PORT(D_G_PORT) &=~ (1<<D_G_PIN);
}



number_7dlib++;
if(number_7dlib>3)
    number_7dlib=0;


}
#endif

#if DLED_SYS==1
//This version isn t yet supported
#endif
