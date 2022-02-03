/*
 * functions.h
 *
 *  Created on: Jan 12, 2022
 *      Author: admin-pg
 */
#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

struct address{
	char street[100];
	char city[50];
	char state[20];
	int postalCode;
};

struct office{
	int id;
	char name[50];
	char cto[50];
	int workers;
	struct address addr;
};

#endif /* FUNCTIONS_H_ */
