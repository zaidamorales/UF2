/*
 * main.c
 *
 *  Created on: Jan 12, 2022
 *      Author: admin-pg
 */


#include<stdio.h>
#include "functions.h"
void main(){
    int n;
    int bin;
    n=validate(n);
    printf("En binario es: %d",binario(n));
}

/*
void main(){
    int count=1,rem,n,bin=0;
    printf("Introduce a natural number:\n");
    scanf("%d",&n);

    while(n!=0){
                    rem = n % 2;
                    n /= 2;
                    bin = bin+rem*count ;
                    count*=10;
       }
   printf("binary is:%d",bin);
}*/
