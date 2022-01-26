/*
 * main.c
 *
 *  Created on: Jan 12, 2022
 *      Author: admin-pg
 */


#include <stdio.h>
#include "functions.h"

void main(){
	int num;
	num = validacion();

	printf("Numero introducido: %d\n",num);
    numero(num);

}
