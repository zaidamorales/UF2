/*
 * functions.h
 *
 *  Created on: Jan 12, 2022
 *      Author: admin-pg
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#define MSG "Quants registres introduïras:\n"
#define MSG2 "Introdueix un nombre[1-10]:\n"

float validar(char *, int, int);
void omplir(float *, int);
float mitjana(float *, int);
float max(float *, int);
float min(float *, int);
void order(float *, int);


#endif /* FUNCTIONS_H_ */
