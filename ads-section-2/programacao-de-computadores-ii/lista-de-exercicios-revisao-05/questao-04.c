#include <stdio.h>

void main () {
  float matriz[3][3];
  float *p_matriz = matriz;

  printf("\nEndereços de cada elemento de uma matriz(3x3):\n\n");
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++){
      printf("%p\t", p_matriz);
      p_matriz++;
    }
    p_matriz++;
    printf("\n");
  }

  getchar();
}