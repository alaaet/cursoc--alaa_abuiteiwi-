/*
 ============================================================================
 Name        : T3_ej3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char hola[]={"hola mundo, soy alaa!"};
	char temp[sizeof(hola)-1];
	char temp1[sizeof(hola)-1];
	int i;


	//a) Convierte la cadena entera a mayúsculas
	for(i=0;i<sizeof(hola);i++){
	if(hola[i]>96 && hola[i]<123)
		temp[i]= hola[i]-32;
	else
	temp[i] = hola[i];}
	//printing the array
	for(i=0;i<sizeof(temp);i++){
			printf("%c", temp[i]);
		}
	printf("\n");



	//b) Convierte a mayúsculas solo la primera letra de cada palabra
	for(i=0;i<sizeof(hola);i++){
		if(hola[i]>96 && hola[i]<123 &&(i==0||hola[i-1]==32))
			temp1[i]= hola[i]-32;
		else
		temp1[i] = hola[i];
		}
		//printing the array
		for(i=0;i<sizeof(temp1);i++){
				printf("%c", temp1[i]);
			}


	return EXIT_SUCCESS;
}
