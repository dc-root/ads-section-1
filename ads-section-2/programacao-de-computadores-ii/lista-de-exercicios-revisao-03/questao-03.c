#include <stdlib.h>
#include <stdio.h>

#define qnt_num 10

int main () {
  int vetorNumerosImpares[qnt_num];  
  int numeroImpar=0, count=0;

  while (numeroImpar < qnt_num) {
    if (count % 2 != 0) {
      vetorNumerosImpares[numeroImpar] = count;
      numeroImpar++;
    }
    count++;
  }
 
  printf("Os %d primeiros numeros impares são: ", qnt_num);
  
  for (int i=0; i<qnt_num; i++) {
    printf(" %d", vetorNumerosImpares[i]);
  }

  return 0;
}