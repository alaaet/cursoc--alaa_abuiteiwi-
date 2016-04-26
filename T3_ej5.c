/*
 ============================================================================
 Name        : T3_ej5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//a) Tiene al menos dos variables de dos tipos distintos
	int x = 5;
	char a = 'a';

	//b) Tiene un puntero apuntando a cada una de estas variables
	int *xp = x ;
	char *ap = a ;

	//c) Cambia el valor de una variable a través de su puntero
	*xp = 7;
	*ap = 'c';

	//d) Consulta el valor de una variable a través de su puntero
	printf("El valor de x es: %d\n",x);
	printf("El valor de a es: %c\n",a);

	//a) Crea e inicializa un vector de enteros y otro de reales de 5 elementos cada uno
	int array1[5] = {1,2,3,4,5};
	double array2[5] = {1.0,2.0,3.0,4.0,5.0};

	//b) Crea otro vector de float de 5 elementos sin inicializar
	float array3[5];

	//c) Declara dos punteros para cada array
	int *array1p = array1;
	double *array2p = array2;

	//d) Utiliza la “forma 1” para imprimir los dos vectores
	int i;
	for(i=0;i<5;i++){
		printf("%d\t ",*array1p++);}
	printf("----------------------");
	for(i=0;i<5;i++){
		printf("%lf\t ",*array2p++);}
	printf("----------------------");

	//e) Utiliza la “forma 3” multiplicar los elementos del primer y el segundo vector y guardarlos en el tercero: v3[i] = v1[i] ∗ v2[i]
	for(i=0,array1p=&array1,array2p=&array2; i<5;i++){
		array3[i]= (*array1p[i]) * (*array2p[i]);
		array1p++;
		array2p++;
		}

	for(i=0;i<5;i++){
			printf("%d\t ",array3[i]);}
		printf("----------------------");
	//f) Crea una cadena y dos punteros a char
		char nombre[] ={'a','b','c','d','e','f'};
		char *nompont1 , *nompont2;

	//g) Utiliza la “forma 2” y los dos punteros para invertir la cadena: str[i] = str[N − i]
		char temp;
		for(nompont1 = nombre, nompont2=nombre[5];nompont1 < &nombre[3]; nompont1++,nompont2--){
			temp = *nompont1;
			*nompont1 = *nompont2;
			*nompont2 = temp;
		}
		for(i=0;i<6;i++){
			printf("%d\t ",nombre[i]);}
			printf("----------------------");

		//a) Crea una matríz de enteros de 3x3 e inicialízala
			int numerosMat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

		//b) Crea un puntero que apunte a la matríz
			int *numeroMatP[3] = numerosMat;

		//c) Crea dos enteros i y j
			int i,j;

		//d) Utiliza los enteros y el puntero para recorrer e imprimir la matríz la matríz.
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					printf("%d\t",*numeroMatP[i]++);
				}
				printf("\n");
			}

	return EXIT_SUCCESS;
}
