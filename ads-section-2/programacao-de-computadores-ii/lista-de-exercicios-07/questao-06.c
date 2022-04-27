#include <stdio.h>
#include <math.h>

int main() {
  unsigned int P11=0, P12=0, P21=0, P22=0;

  float distanceFromPoints(int *x1, int *y1, int *x2, int *y2);
  
  printf("Digite o valor do primeiro ponto(x, y): ");
  scanf("%d, %d", &P11, &P12);

  printf("Digite o valor do segundo ponto(x, y): ");
  scanf("%d, %d", &P21, &P22);

  printf("\n\n\tDISTANCIA: %f", distanceFromPoints(&P11, &P12, &P21, &P22));

  return 0;
}

float distanceFromPoints(int *x1, int *y1, int *x2, int *y2) {
  float dist;

  dist = (float) sqrt(pow((*x1 - *x2), 2) + pow((*y1 - *y2), 2));

  return dist;
}