#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#define QNT_DIGITO_MATRICULA  12

int main () {
  int vetorNumeros[QNT_DIGITO_MATRICULA], maiorNumero=0;
  int *pVetorNumeros = vetorNumeros;

  // lendo a matricula e postando cada digito em um vetor
  for (int i=0; i<QNT_DIGITO_MATRICULA; i++) {
    printf("Digite o %dº digito do numero da matricula:", i+1);
    scanf("%d", &vetorNumeros[i]);
  }

  // Obtendo o maior numero do vetor
  for (int i=0; i<QNT_DIGITO_MATRICULA; i++) {
    if (maiorNumero < vetorNumeros[i]) {
      maiorNumero = vetorNumeros[i];
    }
    pVetorNumeros++;
  }

  printf("\n");
  // imprimindo os valores do vetor
  for (int i=0; i < QNT_DIGITO_MATRICULA; i++) {
    printf("%d", vetorNumeros[i]);
  }

  printf("\nMaior numero e igual a %d", maiorNumero);
  
  return 0;
}