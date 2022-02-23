#include <stdlib.h>
#include <stdio.h>

#define qnt_num 8

int main () {
  int vetor[qnt_num], sumVetor=0, numPositivos=0;

  for (int i=0; i<qnt_num; i++) {
    printf("%dº numero: ", i+1);
    scanf("%d", &vetor[i]);
  }

  // Mostrar os valores do vetor
  printf("\nValores do vetor lido: ");
  for (int i=0; i<qnt_num; i++) {
    printf(" %d", vetor[i]);
  }
  
  // Soma dos valores do vetor
  for (int i=0; i<qnt_num; i++) {
    sumVetor += vetor[i];

    if (i+1 == qnt_num) printf("\nSoma dos valores do vetor: %d", sumVetor);
  }

  // Quantidade de numeros positivos
  for (int i=0; i<qnt_num; i++) {
    if (vetor[i] >= 0) numPositivos++;

    if (i+1 == qnt_num) printf("\nO vetor contem %d numeros positivos", numPositivos); 
  }
}