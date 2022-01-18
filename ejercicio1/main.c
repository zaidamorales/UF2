/*
 * main.c
 *
 *  Created on: Jan 12, 2022
 *      Author: admin-pg
 */


#include <stdio.h>
#include "functions.h"

void main(){
    int num1, num2, a=10,b=5000;
    num1 = natural(a, b);
	printf("El primer numero es correcto \n");
    num2 = natural(a, b);
    printf("El segundo numero es correcto \n");
}
