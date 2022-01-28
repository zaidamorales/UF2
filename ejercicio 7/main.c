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
	num = llegirnum("Coloca el tamany de l'array:\n");
	int vector[num];
	getvalues(vector,num);
	calculate(vector,num);
}

