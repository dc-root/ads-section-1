#include <stdio.h>
#include <stdlib.h>

// Declarando a função que imprimi os valores da matriz
void mostrar_matriz(int *matriz);

void main() {
  int Mat[10][10];

  // Gerado matriz de acordo com as regras estabelecidas
  for (int i=0; i<10; i++) {
    for (int j=0; j<10; j++) {
      if (i < j)
        Mat[i][j] = (2*i) + (7*j) + 2;
      else if (i == j)
        Mat[i][j] = 3 * (i*i) + 1;
      else if (i > j)
        Mat[i][j] = 4 * (i*i*i) + 5 * (j*j) + 1;
    }
  }

  // Chamando função que imprime os valores da matriz gerada
  mostrar_matriz(Mat);
}

// Definndo função que imprimi os valores da matriz
void mostrar_matriz(int *matriz) {
  int i, j;

  for (i=0; i<10; i++) {
    if (i !=0 ) printf("\n");
    for (j=0; j<10; j++) {
      printf("%d\t", matriz[i * 10 + j]);
    }
  }
}