#include <stdio.h>

void main () {
  int x=100, *px=&x, res_divisao;

  res_divisao = *px/5;
  printf("O resultado da divisão e igual a %d\n", res_divisao);

  getchar();
}