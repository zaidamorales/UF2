/*
 * functions.c
 *
 *  Created on: Jan 12, 2022
 *      Author: admin-pg
 */

#include <stdio.h>
#include "functions.h"

void validar(){
	int size;
	do{
		printf("Introduce el tamaño del array:\n");
		scanf("%d", &size);
	}while(size<=1 && size>=50);

	rellenar(size);
}

int validacion(){
	int num;
	do{
		printf("Introduce un valor natural:\n");
		scanf("%d",&num);
	}while(num<1);
	return num;
}

void rellenar(int size){
	int lista[size], i=0;
		while (i<size){
			lista[i]=validacion();
			i++;
		}
		mostrar(lista, size);
	}

void mostrar(int *llista, int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (llista[i] < llista[j]) {
				int canvi = llista[i];
				llista[i] = llista[j];
				llista[j] = canvi;
			}

		}
	}
	printf("\n");
	for (int i = 0; i < size; i++) {
			printf("%d  ", llista[i]);
		}
}
