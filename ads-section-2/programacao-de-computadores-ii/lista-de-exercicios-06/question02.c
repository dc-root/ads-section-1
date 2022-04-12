#include <stdlib.h>
#include <stdio.h>

#include <string.h>
#include <ctype.h>

// 2. Faça um programa que receba do usuário um arquivo texto e mostre
// na tela quantas letras são vogais e quantas são consoantes.

int main() {
  FILE *fileUser;
  char *stringFile = NULL;

  int vowelsCount=0, consonantsCount=0;
  
  const char vowels[5] = {'A', 'E', 'I', 'O', 'U'},
  consonants[21] = {'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Y', 'Z'};

  // Abrindo o arquivo e fazendo a verificação de sua abertura
  if ((fileUser=fopen("fileUser.txt", "r+")) == NULL) {
    perror("Falha ao abrir o arquivo!");
    exit(1);
  }

  // lendo o texto do arquivo e armazenando seu valor a uma string de alocação dinamica
  fscanf(fileUser, "%m[^%]", &stringFile);
  printf("%s\n", stringFile);


  for (int i=0; i<strlen(stringFile); i++) {
    for (int j=0; j<5; j++) {
      if (toupper(stringFile[i]) == vowels[j]) {
        vowelsCount++;
      }
    }
    
    for (int k=0; k<21; k++) {
      if(toupper(stringFile[i]) == consonants[k]) {
        consonantsCount++;
      }
    }
  }

  printf("\n\tO texto do arquivo contem %d vogais e %d consoantes", vowelsCount, consonantsCount);

  free(stringFile);
  fclose(fileUser);
  return 0;
}