#include <stdlib.h>
#include <stdio.h>

void calc_hexa(float l, float *area, float *perimetro);
 
int main () {

  float lado, area, perimetro;

  printf("Digite o valor do lado: ");
  scanf("%f", &lado);
  calc_hexa(lado, &area, &perimetro);

  printf("area: %.2f\nperimetro: %.2f", area, perimetro);
  
  return 0;
}

void calc_hexa(float l, float *area, float *perimetro) {
  *area = ((3*l) * 1.73205080757) / 2;
  *perimetro = 6 * l;
}