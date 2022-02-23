#include <stdlib.h>
#include <stdio.h>

#define qnt_num 10

int main () {
  int numeros[qnt_num], numPares=0;

  // lê 10 numeros inteiros
  for (int i=0; i<qnt_num; i++) {
    printf("%dº numero: ", i+1);
    scanf("%d", &numeros[i]);
  }

  // mostrar numeros pares
  for (int i=0; i<qnt_num; i++) {
    if(numeros[i] % 2 == 0){
      numPares++;
    }
  }

  if (numPares == 0) printf("\n\nNão a numeros pares no vetor!");
  else printf("\n\nNo vetor á %d numeros pares", numPares);
}