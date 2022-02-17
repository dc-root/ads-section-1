#include <stdlib.h>

int main () {
  int base=0, potencia=1, expoente=0;
  printf("Digite dois valores sendo o primeiro para definir a base e o segundo para o expoente:\n");
  scanf("%d%d", &base, &expoente);

  for (int i=0; i<expoente; i++){
    potencia *= base;
  }

  printf("\nA potencia resultante e iguala a %d", potencia);
  return 0;
} 