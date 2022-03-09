#include <stdio.h>

int Operation(int valor_1, int valor2) {
  printf("A soma dos elementos e igual á: %d\n", valor_1 + valor2);
  printf("A Subtração dos elementos e igual á: %d\n", valor_1 - valor2);
  printf("A Multiplicação dos elementos e igual %d: \n", valor_1 * valor2);
  printf("A Divisão dos elementos e igual á: %d", valor_1 / valor2);
}

void main (void) {
  Operation(10, 5);

  getchar();
}