/*
 * functions.c
 *
 *  Created on: Jan 12, 2022
 *      Author: admin-pg
 */

int validacion(){
	int num;
	do{
		printf("Introduce un valor:\n");
		scanf("%d",&num);
	}while(num<1);
	return num;
}

int numero(int num){
    int sum=0,i=0;
   printf("\nSecuencia ordenada:");
   while (sum+i<=num){
        i++;
        printf("%d ",i);
        if (sum+i<=num){
            sum=sum+i;
        }
   }
   printf("\nSuma total: %d",sum);
}
