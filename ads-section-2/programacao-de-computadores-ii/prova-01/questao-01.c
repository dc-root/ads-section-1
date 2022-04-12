#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
  int registrationNum;
  char full_name[100];
} tRegister, *pRegistro;

int main () {
  tRegister RG;
  pRegistro pRG = &RG;

  // Lendo os valores do registro
  printf("Digite o seu nome completo: ");
  fgets(RG.full_name, 100, stdin);
  
  printf("Digite o numero da matricula: ");
  scanf("%d%*c", &RG.registrationNum);

  // Imprimindo os valores registrados
  printf("Nome Completo: %s\nRegistro: %d", RG.full_name, RG.registrationNum);

  // Verificando se o numero da matricula e Par ou Impar
  if ((pRG->registrationNum % 2) == 0) {
    printf("\n\tO numero da matricula registrado e PAR!!");

  } else {
    printf("\n\tO numero da matricula registrado e IMPAR!!");
  }

  printf("\n\n");

  // Imprimindo o nome completo
  printf("%s", pRG->full_name);

  // Invertendo o nome e imprimindo-o novamente
  for (int i=strlen(pRG->full_name); i >=0; i--) {
    printf("%c", pRG->full_name[i]);
  }

  return 0;
}