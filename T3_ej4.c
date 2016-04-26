/*
 ============================================================================
 Name        : T3_ej4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int matriz1[3][3] = {{0,1,2},{3,4,5},{6,7,8}};
	int matriz2[3][3];
	int matriz3[3][3];
	int i,j,k;
	int sum = 0;

	//a) Imprime la matríz
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",matriz1[i][j]);
		}
		printf("\n");
	}
	puts("_______________________\n");


	//b) Multiplica todos los elementos por 2
	for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				matriz2[i][j]= 2* matriz1[i][j];
			}
		}
	//printing
	for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("%d ",matriz2[i][j]);
			}
			printf("\n");
		}
	puts("_______________________\n");


	//c) Multiplica las dos matrices entre sí
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				sum+= matriz1[i][k]*matriz2[k][j];
			}
			matriz3[i][j]= sum;
			sum=0;
		}
			}
	//printing
		for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					printf("%d ",matriz3[i][j]);
				}
				printf("\n");
			}
	return EXIT_SUCCESS;
}
