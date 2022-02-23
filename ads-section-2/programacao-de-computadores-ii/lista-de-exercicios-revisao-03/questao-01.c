#include <stdlib.h>
#include <stdlib.h>

#define num 10

int main () {
  int numeros[num], sumNumeros=0;
  
  printf("Digite %d numeros e saiba a soma desses numeros\n\n", num);

  // Coletar os numeros e realizar a soma
  for (int i=0; i<num; i++) {
    printf("Digite o %dº numero: ", i+1);
    scanf("%d", &numeros[i]);

    sumNumeros += numeros[i];
  }

  // Mostrar os numeros digitados no console
  printf("\nA soma dos numeros e igual a %d\n", sumNumeros);
  printf("Numeros digitados: ");
  for (int i=0; i<num; i++) {
    printf(" %d", numeros[i]);
  }
  
  return 0;
}