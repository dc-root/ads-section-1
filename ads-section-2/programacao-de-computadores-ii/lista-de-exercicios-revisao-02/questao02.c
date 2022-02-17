#include <stdlib.h>
#include <string.h>

int main () {
  int numDiaDaSemana;
  char diaDaSemana[20];

  printf("Digite um numero da semana(1-7): ");
  scanf("%d", &numDiaDaSemana);

  switch (numDiaDaSemana) {
  case 1:
    strcpy(diaDaSemana, "Domingo");
    break;
  case 2:
    strcpy(diaDaSemana, "Segunda-Feira");
    break;
  case 3:
    strcpy(diaDaSemana, "Terça-Feira");
    break;
  case 4:
    strcpy(diaDaSemana, "Quarta-Feira");
    break;
  case 5:
    strcpy(diaDaSemana, "Quinta-Feira");
    break;
  case 6:
    strcpy(diaDaSemana, "Sexta-Feira");
    break;
  case 7:
    strcpy(diaDaSemana, "Sabado");
    break;
  
  default:
    printf("Error: valor invalido");
    break;
  }

  printf("\n%s\n", diaDaSemana);

  return 0;
} 