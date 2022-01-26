/*
 * functions.c
 *
 *  Created on: Jan 12, 2022
 *      Author: admin-pg
 */

#include <stdio.h>

int validacion(){
	int num;
	do{
		printf("Introduce un valor:\n");
		scanf("%d",&num);
	}while(num<1);
	return num;
}

int numero(int num){
    int aux=0, aux1=0,i=0;
   printf("\nSecuencia ordenada:");
   for (i = 1; i < num; i++){
	   aux +=i;
	   if (aux < num){
		   printf("%d ", i);
		   aux1 += i;
	   }
   }
   printf("\nSuma total: %d",aux1);
}
