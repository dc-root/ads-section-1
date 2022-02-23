#include <stdlib.h>
#include <stdio.h>

#define qnt_num 10

int main () {
  int primeiroVetor[qnt_num], segundoVetor[qnt_num];
  printf("Insira %d numeros\n\n", qnt_num);

  for (int i=0; i<qnt_num; i++) {
    printf("%dº numero: ", i+1);
    scanf("%d", &primeiroVetor[i]);
  }

  for (int i=0; i<qnt_num; i++) {
    segundoVetor[i] = primeiroVetor[i] * 5;
  }

  // Primeiro vetor
  printf("\nTabela dos dois vetores\n\nvetor\tvetor(x5)\n");
  for (int i=0; i<qnt_num; i++) {
    printf("%d", primeiroVetor[i]);
    printf("\t%d\n", segundoVetor[i]);

  }
  return 0;
} 