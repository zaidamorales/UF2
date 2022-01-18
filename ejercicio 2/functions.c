/*
 * functions.c
 *
 *  Created on: Jan 12, 2022
 *      Author: admin-pg
 */

#include <stdio.h>
#include "functions.h"

int conver(){
    int seg,horas, minutos, segundos;
    printf("Introduce los segundos : ");
    scanf("%d",&segundos);

        seg = segundos;
        seg = seg % 60;
        horas = segundos/3600;
        minutos = segundos/60;

    printf("Segundos : %d\n",seg);
    printf("Horas : %d\n",horas);
    printf("Minutos : %d\n",minutos);

    return seg,horas,minutos;
}
