#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
  char string1[100];
  char string2[100];
  char concat[100];

  printf("valor da primeira string: ");
  fgets(string1, 100, stdin);

  printf("valor da primeira string: ");
  fgets(string2, 100, stdin);

  char *ponteiro = &string1;
  concat = string2 + (*ponteiro);

  printf("string-1: %s\n", string1);
  printf("string-2: %s\n", string2);
  // printf("ponteiro aponta para: %s\n", concat);/

  return 0;
}