/*
 * functions.c
 *
 *  Created on: Jan 12, 2022
 *      Author: admin-pg
 */

#include <stdio.h>
#include "functions.h"

int  mates(){
    int num = 0;
    do{
        printf("Introdueix una nota: \n");
        scanf("%d",&num);
        return num;
    }while(num<0 || num>10);

}
