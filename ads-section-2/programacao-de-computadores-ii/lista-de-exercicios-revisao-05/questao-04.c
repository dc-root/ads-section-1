#include <stdio.h>
#include <stdlib.h>

void main () {
  float matriz[3][3];
  float *p_matriz = matriz;

  for (int i=0; i<9; i++) {
    printf("%p\n", p_matriz);
    p_matriz++;
  }

  getchar();
}