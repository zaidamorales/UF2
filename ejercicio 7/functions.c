/*
 * functions.c
 *
 *  Created on: Jan 12, 2022
 *      Author: admin-pg
 */

#include <stdio.h>
#include "functions.h"

float validar(char *msg, int ini, int final) {

	float num;
	do {
		printf("%s", msg);
		scanf("%f", &num);
	} while (num < ini || num > final);

	return num;
}

void omplir(float *num, int size) {

	int i;

	for (i = 0; i < size; i++) {
		num[i] = validar(MSG2, 1, 10);
	}
}

float mitjana(float *num, int size) {

	int i;
	float j = 0;

	for (i = 0; i < size; i++) {
		j += num[i];
	}
	return j / size;
}

float max(float *num, int size) {

	int i;
	float j = 0;

	for (i = 0; i < size; i++) {
		if (num[i] > j) {
			j = num[i];
		}
	}
	return j;
}

float min(float *num, int size) {

	int i = 0;
	float j = 1;

	j = num[i];
	for (i = 0; i < size; i++) {
		if (j > num[i]) {
			j = num[i];
		}
	}
	return j;
}

void order(float *num, int size) {

	for (int i = 0; i < size - 1; i++){
		for (int j = i + 1; j < size; j++){
			if (num[i] > num[j]) {
				float canvi = num[i];
				num[i] = num[j];
				num[j] = canvi;
			}
		}
	}
}
