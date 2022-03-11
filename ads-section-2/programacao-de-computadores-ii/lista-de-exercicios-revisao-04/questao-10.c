#include <stdio.h>
#include <stdlib.h>

// Declarando função de troca
void trocar(char *v1, char *v2) {
  int aux;
  aux = *v1;
  *v1 = *v2;
  *v2 = aux;
}

int main () {
  int valor1, valor2;

  // Coletando os valores das strings
  printf("Digite o valor 1: ");
  scanf("%d", &valor1);

  printf("Digite o valor 2: ");
  scanf("%d", &valor2);

  trocar(&valor1, &valor2);

  printf("\n1º valor: %d", valor1);
  printf("\n2º valor: %d", valor2);

  return 0;
}