/*
 ============================================================================
 Name        : T3_ej1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {

	char nie[] = "Y-44333333-Z";
	int edad = 26;
	double altura = 183.0;
	float peso = 100.7;
	char inicial = 'A';

	printf("String \n\t valor = %s\n\t tamanyo %lu \n\n", nie , sizeof(nie));
	printf("Int \n\t valor = %d\n\t tamanyo %lu \n\n", edad, sizeof(edad));
	printf("Double \n\t valor = %lf\n\t tamanyo %lu \n\n", altura, sizeof(altura));
	printf("Float \n\t valor = %f\n\t tamanyo %lu \n\n", peso, sizeof(peso));
	printf("Char \n\t valor = %c\n\t tamanyo %lu \n\n", inicial, sizeof(inicial));

	return 0;
}
