#include <stdlib.h>
#include <stdio.h>

#define qnt_num 15

int main () {
  int vetor[qnt_num] = {2, 5, 15, 100, 17, 23, 4, 7, 98, 44, 28, 29, 13, 19, 20},
      menorNumero, p_menor,
      maioNumero=0, p_maior;

  for (int i=0; i<qnt_num; i++) {
    if (vetor[i] > maioNumero) {
      maioNumero = vetor[i];
      p_maior = i;
    }
  }
  printf("O maior numero e o %d e se encontra na posição %d", maioNumero, p_maior);

  menorNumero = maioNumero;

  for (int i=0; i<qnt_num; i++) {
    if (vetor[i] < menorNumero) {
      menorNumero = vetor[i];
      p_menor = i;
    }
  }

  printf("\nO menor numero e o %d e se encontra na posição %d", menorNumero, p_menor);

}