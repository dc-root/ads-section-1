#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
  char string[100];
  char *p_string=string;
  int countCaractere=0;

  printf("Digite uma frase qualquer: ");
  fgets(string, 100, stdin);

  printf("Tamanho: %d", strlen(p_string));

  // while (*p_string) {
  //   p_string++;
  //   // if(*p_string != ' ')
  //   countCaractere++;
  // }

  // printf("A frase contem %d letras\n", countCaractere);
  
  return 0;
}