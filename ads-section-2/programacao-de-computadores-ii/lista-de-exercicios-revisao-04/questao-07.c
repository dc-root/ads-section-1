#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VETOR 5

int main () {

  int veatorDez[TAMANHO_VETOR],
      *p_vetorDez=veatorDez,
      i=0;

  for (;i<TAMANHO_VETOR; i++) {
    printf("Digite o %dº valor para o vetor: ", i+1);
    scanf("%d", &veatorDez[i]);
  }

  printf("\n\nElementos do vetor: ");

  for (i=TAMANHO_VETOR-1; i>=0; i--) {
    printf("%d ", *p_vetorDez);
    p_vetorDez++;
  }
}