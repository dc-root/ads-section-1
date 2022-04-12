#include <stdlib.h>
#include <stdio.h>

#include <string.h>
#include <ctype.h>

// 3. Faça um programa que receba do usuário um arquivo texto. Crie
// outro arquivo texto contendo o texto do arquivo de entrada com as
// vogais substituídas por ’*’.

int main() {
  FILE *fileUser, *fileReplacedVowels;
  char *stringFile = NULL;

  fileUser = fopen("fileUser.txt", "r+");
  fileReplacedVowels=fopen("fileRepledQuestion03.txt", "w+");

  const char vowels[5] = {'A', 'E', 'I', 'O', 'U'};

  // verificação do retorno dos arquivos
  if (fileUser == NULL || fileReplacedVowels == NULL) {
    perror("Falha ao abrir o arquivo!");
    exit(1);
  }

  fscanf(fileUser, "%m[^%%]", &stringFile);
  char stringCpy[strlen(stringFile)];

  for (int i=0; i<strlen(stringFile); i++) {
    for (int j=0; j<5; j++) {
      if (toupper(stringFile[i]) == vowels[j]) {
        stringCpy[i] = '*';
        break;
      } else if (toupper(stringFile[i]) != vowels[j]) {
        stringCpy[i] = stringFile[i];
      }
    }
  }

  // Imprimindo a string alterada no novo arquivo
  fprintf(fileReplacedVowels, "%s", stringCpy);

  free(stringFile);
  fclose(fileUser);
  fclose(fileReplacedVowels);
  return 0;
}