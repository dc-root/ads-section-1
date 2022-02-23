#include <stdlib.h>
#include <stdio.h>

#define qnt_num 20

int main () {
  int vetor[qnt_num];

  for (int i=0; i<qnt_num; i++) {
    printf("%dº numero: ", i+1);
    scanf("%d", &vetor[i]);
  }

  printf("valor multiplcados:");
  for (int i=0; i<qnt_num; i++) {
    printf(" %d", vetor[i] * i);
  }
}