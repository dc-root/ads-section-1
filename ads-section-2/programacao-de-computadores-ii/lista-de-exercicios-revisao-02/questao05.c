#include <stdlib.h>

int main () {
  int X, Y, Z;

  printf("Digite o três valores seguidos para atribuir aos lados de um triângulo:\n");
  scanf("%d%d%d", &X, &Y, &Z);

  if (X + Y < Z || X + Z < Y || Z + Y < X) {
    printf("\nNão foi possivel formar um triângulo com os valores digitados!!");
  } else if (X == Z == Y) {
    printf("O triângulo e do tipo EQUILÁTERO");

  } else if (X == Z ||  Z == Y || Y == X) {
    printf("O triângulo e do tipo ISÓSCELES");
  
  } else if (X != Z != Y) {
    printf("O triângulo e do tipo ESCALENO");
  }
  return 0;
} 