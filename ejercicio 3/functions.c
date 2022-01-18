/*
 * functions.c
 *
 *  Created on: Jan 12, 2022
 *      Author: admin-pg
 */

#include <stdio.h>
#include "functions.h"

int validate(int n){

     do {
         printf("Introduce un numero decimal: ");
         scanf("%d",&n);

     }while( n < 0 );

}

int binario(int n){
    int count=1,rem=1,bin=0;

    while(n != 0){
        rem = n % 2;
           n /= 2;
           bin = bin+rem*count ;
           count*=10;
    }

    return bin;
}
