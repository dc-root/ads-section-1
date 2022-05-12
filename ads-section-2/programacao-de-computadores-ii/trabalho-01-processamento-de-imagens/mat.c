#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define coluna 10
#define linha 10

int main() {
    int mascara = 3;
    int matriz[coluna][linha], matrizOutput[mascara][mascara];

    for(int i=0; i<linha; i++) {
        for(int j=0; j<coluna; j++) {
            matriz[i][j] = 10 + rand() % 20;
        }
    }

    for(int i=0; i<linha; i++) {
        for(int j=0; j<coluna; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n\n######################## Matriz de retorno #######################\n\n");

    for(int i=0; i<mascara; i++) {
        for(int j=0; j<mascara; j++) {
            matrizOutput[i][j] = matriz[i][j];
            printf("%d\t", matrizOutput[i][j]);
        }
        printf("\n");
    }

    printf("\n\n########################## Valor do meio #########################\n\n");

    printf("Valor a ser alterado: %d\n\n", matrizOutput[(mascara/2) + 1][(mascara/2) + 1]);

    return 0;
}