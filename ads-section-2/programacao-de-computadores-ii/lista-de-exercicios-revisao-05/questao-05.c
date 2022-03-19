#include <stdio.h>
#include <stdlib.h>

// Função de filtragem. Obtem apartir de um numero real o valor inteiro e o valor fracionário
void frac(float number, int *integer, float *frac) {
  *integer = number;
  *frac = number - *integer;

  printf("INTEGER: %d\n", *integer);
  printf("REAL: %.3f", *frac);
}

void main () {
  float numero, valorFracionario;
  int valorInteiro;

  printf("Digite um numero: ");
  scanf("%f", &numero);

  // chamando a função passando os seus respectivos argumentos
  frac(numero, &valorInteiro, &valorFracionario);

  getchar();
}