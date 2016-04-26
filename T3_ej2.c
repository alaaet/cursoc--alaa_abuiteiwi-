/*
 ============================================================================
 Name        : T3_ej2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int numeros[10] = {0,1,2,3,4,5,6,7,8,9};
	int temp[10];
	int i;

	//a) Recorre e imprime el array
	printf("El array entero es:\n");
	for (i=0; i<=9;i++){
		printf("%d ",numeros[i]);
	}
	printf("\n");

	//b) Recorrer los elementos pares en orden inverso
	for (i=9; i>=0;i--){
		printf("(%d,%d)\t",(i+1),numeros[i]);
	}
	printf("\n");

	//c) Cambia el elemento i por el i + 1 (y el último por el primero)
		for (i=0; i<=9;i++){
			temp[i]=numeros[(i+1)%10];
		}
		memcpy(numeros, temp, sizeof(temp));
		printf("El array tanda(i+1) entero es:\n");
			for (i=0; i<=9;i++){
				printf("%d ",numeros[i]);
			}
		printf("\n");

	//d) Cambia el elemento i por el i − 1 (y el primero por el último)
		for (i=0; i<=9;i++){
				temp[i]=numeros[(i-1)%10];
			}
		memcpy(numeros, temp, sizeof(temp));
		printf("El array tanda(i-1) entero es:\n");
			for (i=0; i<=9;i++){
				printf("%d ",numeros[i]);
			}
		printf("\n");
	//e) Espeja el array: array[i] = array[N], array[i + 1] = array[N − 1], .. .
		for (i=0; i<=9;i++){
					temp[i]=numeros[9-i];
				}
		memcpy(numeros, temp, sizeof(temp));
		printf("El array inverso entero es:\n");
			for (i=0; i<=9;i++){
				printf("%d ",numeros[i]);
			}
		printf("\n");
	return EXIT_SUCCESS;
}
