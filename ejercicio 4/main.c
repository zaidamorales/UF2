/*
 * main.c
 *
 *  Created on: Jan 12, 2022
 *      Author: admin-pg
 */

#include <stdio.h>
#include "functions.h"

void main(){
    int num=0,i,aprov=0,susp=0,mitjA=0,mitjS=0;
    for(i=0;i<15;i++){
        num = mates();
        if(num<5){
            mitjS += num;
            susp++;
        }else{
            mitjA += num;
            aprov++;
        }
    }
    mitjA = mitjA/aprov;
    mitjS = mitjS/susp;
    printf("La quantitat d'aprovats és de: %d \n", aprov);
    printf("La mitjana d'aprovats es de: %d \n", mitjA);
    printf("La quantitat de suespesos és de: %d \n", susp);
    printf("La mitjana de suspesos és de: %d \n", mitjS);
}
