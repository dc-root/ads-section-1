#include <stdio.h>

void main (void) {
  int vetor[15] = {10, 203, 30, 45, 35, 15, 20, 21, 12, 6, 7, 2, 30, 34, 100},
      x=0;

  for (int i=0; i<16; i++) {
    if (vetor[i] == 30) {
      printf("\nElemento de valor 30 na posição %d do vetor", i);
      x++;
    }

    if (i==15 && x==0)
      printf("\nNão possui elemento com o valor 30");
  }

  getchar();
}