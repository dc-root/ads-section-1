#include <stdlib.h>
#include <stdio.h>

#define qnt_num 20

int main () {
  int vetor[qnt_num], x=0, numeroEncontrado=0;
  
  printf("Insira o valor de %d numeros\n\n", qnt_num);

  for (int i=0; i<qnt_num; i++) {
    printf("%dº numero: ", i+1);
    scanf("%d", &vetor[i]);
  }
  
  printf("procure um numero no vetor(x): ");
  scanf("%d", &x);

  for (int i=0; i<qnt_num; i++) {
    if (vetor[i] == x) {
      printf("\nO numero digitado foi encontrado na posição %d", i);
      numeroEncontrado++;
    }
    if (i == qnt_num-1 && numeroEncontrado==0) {
      printf("\nO numero não foi encontrado!!");
    }
  }
  return 0;
} 