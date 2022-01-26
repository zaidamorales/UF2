/*
 * main.c
 *
 *  Created on: Jan 12, 2022
 *      Author: admin-pg
 */

#include <stdio.h>
#include "functions.h"

void main (){
	int num1=0, num2=0;

	printf("Introduce el primer valor:");
	scanf("%d", &num1);
	printf("Introduce el segundo valor:");
	scanf("%d", &num2);

	intercanvi(&num1, &num2);
	printf ("Primer valor: %d \nSegundo valor: %d", num1, num2 );

}

