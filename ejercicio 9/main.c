/*
 * main.c
 *
 *  Created on: Jan 12, 2022
 *      Author: admin-pg
 */

#include <stdio.h>
#include "functions.h"

void main() {
	struct office bcn_office;
	modifyData(&bcn_office);//es passa per referència
	printData(bcn_office); //es passa per valor


}
