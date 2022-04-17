/*
by KK ©
 */
#include "../DLED_inc/DLED.h"


volatile uint8_t number_7dlib;
volatile char buffer_7dlib[4];


///*********************************************************high level functions*************************
void dled_set(uint8_t d,uint8_t p,uint8_t sc){
    if(sc)
        buffer_7dlib[d]|=(1<<p);
    else
        buffer_7dlib[d]&=~(1<<p);

}

void dled_setd(uint8_t d,uint8_t v){
        buffer_7dlib[d]=v;
}

void dled_clear(){
    for(int i=0;i<4;i++)
        buffer_7dlib[i]=0;
}

void dled_cleard(uint8_t d){
    buffer_7dlib[d]=0;
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


