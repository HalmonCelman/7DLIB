#include "DLED.h"
#include <util/delay.h>
///*********************************************************high level functions*************************
void dled_set(uint8_t d,uint8_t p,uint8_t sc){
    if(sc)
        d_4_7_s[d]|=_BV(p);
    else
        d_4_7_s[d]&=~_BV(p);

}

void dled_setd(uint8_t d,uint8_t v){
        d_4_7_s[d]=v;
}

void dled_clear(){
    for(int i=0;i<4;i++)
        d_4_7_s[i]=0;
}

void dled_cleard(uint8_t d){
    d_4_7_s[d]=0;
}

void dled_setn(int n){
    dled_clear();
    int x=10;
int pom;
int www=0;
if(n<0){
    n=-n;
    www=1;
dled_set(D_D1,D_G,1); //-
}

for(int i=0;i<4;i++){
        if(www){
            if(i==3)
                break;
        }
pom=n/x;
pom*=x;
pom=n-pom;
pom=pom/(x/10);

    switch(pom){
    case 0:
        dled_setd(3-i,D_0);
        break;
    case 1:
        dled_setd(3-i,D_1);
        break;
    case 2:
        dled_setd(3-i,D_2);
        break;
    case 3:
        dled_setd(3-i,D_3);
        break;
    case 4:
        dled_setd(3-i,D_4);
        break;
    case 5:
        dled_setd(3-i,D_5);
        break;
    case 6:
        dled_setd(3-i,D_6);
        break;
    case 7:
        dled_setd(3-i,D_7);
        break;
    case 8:
        dled_setd(3-i,D_8);
        break;
    case 9:
        dled_setd(3-i,D_9);
        break;
    }

    x=x*10;

}

}


///**********************************************************end**************************************







///************************************low level instructions*****************************************

#if DLED_SYS==0
//init
void dled_init(){
    d_4_7_s_d=0;
    for(int i=0;i<4;i++){
    d_4_7_s[i]=0;
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
switch(d_4_7_s_d){
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

if(d_4_7_s[d_4_7_s_d]>>D_A & 1){
    PORT(D_A_PORT) &=~ (1<<D_A_PIN);
}
if(d_4_7_s[d_4_7_s_d]>>D_B & 1){
    PORT(D_B_PORT) &=~ (1<<D_B_PIN);
}
if(d_4_7_s[d_4_7_s_d]>>D_C & 1){
    PORT(D_C_PORT) &=~ (1<<D_C_PIN);
}
if(d_4_7_s[d_4_7_s_d]>>D_D & 1){
    PORT(D_D_PORT) &=~ (1<<D_D_PIN);
}
if(d_4_7_s[d_4_7_s_d]>>D_E & 1){
    PORT(D_E_PORT) &=~ (1<<D_E_PIN);
}
if(d_4_7_s[d_4_7_s_d]>>D_F & 1){
    PORT(D_F_PORT) &=~ (1<<D_F_PIN);
}
if(d_4_7_s[d_4_7_s_d]>>D_G & 1){
    PORT(D_G_PORT) &=~ (1<<D_G_PIN);
}



d_4_7_s_d++;
if(d_4_7_s_d>3)
    d_4_7_s_d=0;


}
#endif

#if DLED_SYS==1
This version isn t yet supported
#endif
///**********************************************************end

