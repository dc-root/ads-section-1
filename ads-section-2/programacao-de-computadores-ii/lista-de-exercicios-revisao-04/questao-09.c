#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_STR 100

// Declarando função de concatenação
void concatenar(char *s1, char *s2, char *sres) {
  // percorrendo o valor da primeira string atraves do seu ponteiro e atribuindo o valor ao ponteiro *sres
  while(*s1){
    if (*s1 != '\n') {
        *sres = *s1;
        sres += 1;
    }
    s1 += 1;
  }

  // percorrendo o valor da segundo string atraves do seu ponteiro e atribuindo o valor ao ponteiro *sres
  while(*s2){
    *sres = *s2;
    sres += 1;
    s2 += 1;
  }

  *sres = '\0';
}

int main () {
  char string1[TAMANHO_STR];
  char string2[TAMANHO_STR];
  int tTS = strlen(string1) + strlen(string2);
  char concat[tTS];

  // Coletando os valores das strings
  printf("valor da primeira string: ");
  fgets(string1, TAMANHO_STR, stdin);

  printf("valor da primeira string: ");
  fgets(string2, TAMANHO_STR, stdin);

  // Chamando a função para concatenar as strings passada
  concatenar(string1, string2, concat);
  
  // imprimindo o valor concatenado
  printf("%s", concat);

  return 0;
}