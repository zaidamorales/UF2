/*
 * functions.c
 *
 *  Created on: Jan 12, 2022
 *      Author: admin-pg
 */

#include <stdio.h>
#include "functions.h"

int validate(){
    int num;
    do{
        printf("Quants llibres es volen reistrar?\n");
        scanf("%d", &num);
    }while(num<1);
    return num;
}

void modifyData(struct biblio *b,int size){ //punter a office
    for(int i=0; i<size;i++){
        printf("Introdueix el titol del llibre: \n");
        scanf("%s",b[i].titol);
        printf("Introdueix el autor del llibre: \n");
        scanf("%s",b[i].autor);
        printf("Introdueix la editorial: \n");
        scanf("%s",b[i].editorial);
        printf("Introdueix el dia de publicació: \n");
        scanf("%d",&b[i].date.dia);
        printf("Introdueix el mes de publicació: \n");
        scanf("%d",&b[i].date.mes);
        printf("Introdueix l'any de publicació: \n");
        scanf("%d",&b[i].date.any);
        printf("Introdueix les unitats disponibles: \n");
        scanf("%d",&b[i].unitats);
        printf("Introdueix l'usuari que ha agafat en prestec: \n");
        scanf("%s",b[i].usuari);
        printf("Introdueix el temps de prestec: \n");
        scanf("%d",&b[i].temps);
    }
}

/*
void printData(struct biblio *b, int size){
    printf("------------------------------------------------\n");
    for(int i=0; i<size; i++){

        printf("Llibre registrat: [%d]\n", i+1);
        printf("Nom del llibre: %s\n", b[i].titol);
        printf("Nom de l'autor del llibre: %s\n", b[i].autor);
        printf("Nom de la editorial: %s\n", b[i].editorial);
        printf("Dia de publicació: %d\n", b[i].date.dia);
        printf("Mes de publicació: %d\n", b[i].date.mes);
        printf("Any de publicació: %d\n", b[i].date.any);
        printf("Unitats disponibles del llibre: %d\n", b[i].unitats);
        printf("Nom de l'usuari que ho ha agafat en prestec: %s\n", b[i].usuari);
        printf("Temps del prestec del llibre: %d\n", b[i].temps);

        printf("------------------------------------------------\n");
    }
}
*/

void printData(struct biblio *b, int size){
    printf("------------------------------------------------\n");
    printf("Aquest son els registres:\n");
    printf("Llibre\t Autor\t Editorial\t Data\t\t Unitats\t Usuari\t Temps\n");
    for(int i=0; i<size; i++){
    	printf("%s\t %s\t %s\t\t %d/%d/%d\t %d\t %s\t %d\t\n", b[i].titol, b[i].autor, b[i].editorial, b[i].date.dia, b[i].date.mes, b[i].date.any, b[i].unitats, b[i].usuari, b[i].temps );

    }
}
