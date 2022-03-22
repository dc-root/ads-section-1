#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  int MatNumerosAleatorio[5][5];
  int somaColunas[5], somaLinhas[5];

  // Inicializando vetores
  for (int i=0; i<5; i++) {
    somaColunas[i] = 0;
    somaLinhas[i] = 0;
  }

  srand(time(NULL));

  // Gerando valores para a matriz
  for (int i=0; i<5; i++) {
    printf("\n");
    for (int j=0; j<5; j++) {
      MatNumerosAleatorio[i][j] = rand() % 100;

      somaLinhas[i] += MatNumerosAleatorio[i][j];
      somaColunas[j] += MatNumerosAleatorio[i][j];
      
      printf("%d\t", MatNumerosAleatorio[i][j]);
    }
  }

  // Imprimindo a soma das linhas e colunas
  printf("\n\nSoma das Linhas: ");
  for (int i=0; i<5; i++) {
    printf("%d\t", somaLinhas[i]);
  }
  printf("\nSoma das Colunas: "); 
  for (int i=0; i<5; i++) {
    printf("%d\t", somaColunas[i]);
  }
}