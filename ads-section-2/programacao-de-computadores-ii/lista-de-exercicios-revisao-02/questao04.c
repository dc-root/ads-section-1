#include <stdlib.h>

int main () {
  int numero;

  printf("Digite um numero inteiro: ");
  scanf("%d", &numero);

  if (numero % 2 == 0) {
    if (numero > 0) {
      printf("O numero e PAR e POSITIVO");
    } else {
      printf("O numero e PAR e NEGATIVO");
    }
  } else {
    if (numero > 0) {
      printf("O numero e ÍMPAR e POSITIVO");
    } else {
      printf("O numero e ÍMPAR e NEGATIVO");
    }
  }
  return 0;
} 