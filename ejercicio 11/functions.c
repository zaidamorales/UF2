/*
 * functions.c
 *
 *  Created on: Jan 12, 2022
 *      Author: admin-pg
 */

#include <stdio.h>
#include "functions.h"

void parells(){
	int Parells[SIZE], j=2;

	for (int i=0; i<SIZE;i++){
		Parells[i] = j;
		j = j+2;
	}
	mostrar(Parells);
}

void mostrar(int *llista){
	for (int i = 0; i<SIZE; i++){
		printf("%d / ", llista[i]);
	}
}
