#include <stdio.h>
#include <stdlib.h>

void main () {
  int vet_int[5], *p_vet_int;
  p_vet_int=&vet_int;

  for (int i=0; i<5; i++, p_vet_int++) {
    printf("%dº valor: ", i+1);
    scanf("%d", p_vet_int);
  }

  printf("\n\nvalores do vetor: ");
  for (int i=0; i<5; i++) {
    printf("%d ", *p_vet_int);
    p_vet_int++;
  }

  getchar();
}