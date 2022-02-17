#include <stdlib.h>

int main () {
  int grauF;
  float grauC=0;
  
  for (grauF=40; grauF<=80; grauF++) {
    grauC = (float) grauF-32 *  (5/9);

    printf("%d    %.0f\n", grauF, grauC);
  }

  return 0;
} 