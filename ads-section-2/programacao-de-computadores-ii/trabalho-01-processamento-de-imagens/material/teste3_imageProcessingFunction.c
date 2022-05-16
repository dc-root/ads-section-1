#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define coluna 20
#define linha 15

int main() {
	int mascara = 3;
	int matriz[coluna][linha], matrizOutput[mascara][mascara];
	
	for(int i=0; i<linha; i++) {
		for(int j=0; j<coluna; j++) {
			matriz[i][j] = 10 + rand() % 90;
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n\n############## Bloco de retorno ##############\n\n");
	
	// to qsort
	// size_t tamanho = sizeof(*matrizOutput);
	// printf("\ntamnho: %d\n", tamanho);

	for (int a=0; a < (linha - (mascara/2)); a++) {
		for (int b=0; b < (coluna - (mascara/2)); b++) {
			
			for (int i=a; i<mascara+a; i++) {
				for(int j=b; j<mascara+b; j++) {
					matrizOutput[i][j] = matriz[i][j];
					printf("%d ", matrizOutput[i][j]);
			// 		// qsort(&matrizOutput[i][j], (mascara*mascara), tamanho);
				}
				printf("\n");
			}
			printf("\n");
		}
	}
		
	// printf("\n\n############## valor do meio ##############\n\n");

	// printf("Valor a ser alterado: %d\n\n", matrizOutput[(mascara/2)][(mascara/2)]);

	return 0;
}
