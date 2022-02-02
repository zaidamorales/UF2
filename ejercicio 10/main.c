/*
 * main.c
 *
 *  Created on: Jan 12, 2022
 *      Author: admin-pg
 */


#include <stdio.h>
#include "functions.h"

void main() {
    int size;
    size = validate();
    struct biblio biblio[size];
    modifyData(biblio, size);//per referència només l’array, no size
    printData(biblio, size); //es passa per valor
}
