/*
 * functions.c
 *
 *  Created on: Jan 12, 2022
 *      Author: admin-pg
 */

#include <stdio.h>
#include "functions.h"

void modifyData(struct office *o){//punter a office
	int count;
	for (count=0; count<3; count++){
	printf("Introdueix el nom de l'oficina: \n");
	scanf("%s",o->name);
	printf("Introdueix el carrer de l'oficina: \n");
	scanf("%s",o->addr.street);
	printf("Introdueix la ciutat de l'oficina: \n");
	scanf("%s",o->addr.city);
	printf("Introdueix el codi postal de l'oficina: \n");
	scanf("%d",&o->addr.postalCode);
	}
}

void printData(struct office o){
	int count;
	for(count=0; count<3; count++){
		printf("Aquestes són les dades de l'oficina: \n");
		printf("Nom de l'oficina: %s\n", o.name);
		printf("Carrer de l'oficina: %s\n", o.addr.street);
		printf("Ciutat de l'oficina: %s\n", o.addr.city);
		printf("Codi postal de l'oficina: %d\n\n", o.addr.postalCode);
	    }

}

