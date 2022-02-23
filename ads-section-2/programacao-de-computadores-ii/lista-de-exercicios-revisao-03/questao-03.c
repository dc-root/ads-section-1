#include <stdlib.h>
#include <stdio.h>

#define qnt_num 10

int main () {
  int numerosImpares[qnt_num];  
  int numero=0;

  while (numero < 10) {
    
    if (numero % 2 == 0) {
      numerosImpares[numero];
      numero++;
    }
  }
 
  printf("Os %d primeiros numeros impares são: ", qnt_num);
  
  for (int i=0; i<qnt_num; i++) {
    printf(" %d", numerosImpares[i]);
  }

  return 0;
}


// !!!!!!!!!!!!!!!!!!