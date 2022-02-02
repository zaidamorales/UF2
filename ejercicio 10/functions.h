/*
 * functions.h
 *
 *  Created on: Jan 12, 2022
 *      Author: admin-pg
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

struct fecha{
    int dia;
    int mes;
    int any;
};

struct biblio{
    char titol[50];
    char autor[50];
    char editorial[50];
    int unitats;
    char usuari[50];
    int temps;
    struct fecha date;
};

int validate();
void modifyData(struct biblio *, int);
void printData(struct biblio*, int);

#endif /* FUNCTIONS_H_ */

