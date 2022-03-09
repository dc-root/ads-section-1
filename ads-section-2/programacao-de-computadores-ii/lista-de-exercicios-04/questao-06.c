#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
  float cateto1, cateto2;

  printf("Digite o valor do primeiro cateto: ");
  scanf("%f", &cateto1);

  printf("Digite o valor do segundo cateto: ");
  scanf("%f", &cateto2);

  printf("\ncateto 1: %.2f\ncateto 2: %.2f", pow(cateto1, 2), pow(cateto2, 2));

  // hipotenusa = pow(cateto1,2) + pow(cateto2,2);

  // printf("O valor de hipotenusa e igual a %.2f", hipotenusa);

  return 0;
}