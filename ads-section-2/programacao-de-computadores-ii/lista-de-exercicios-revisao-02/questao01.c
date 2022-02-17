#include <stdlib.h>

int main () {
  int num1, num2, menorNumero;

  printf("Digite dois numeros:\n");
  scanf("%d%d", &num1, &num2);

  if (num1 < num2) {
    menorNumero = num1;
  } else {
    menorNumero = num2;
  }

  printf("\nO menor numero e: %d", menorNumero); 

  return 0;
} 