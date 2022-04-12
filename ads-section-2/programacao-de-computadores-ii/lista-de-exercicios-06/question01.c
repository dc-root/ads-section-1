#include <stdlib.h>
#include <stdio.h>

int main() {
  FILE *fileCreated = fopen("arq.txt", "w+");
  char caracter, caracterFileCreated;

  if(fileCreated == NULL) {
    perror("Erro ao ler o arquivo");
    exit(1);
  }

  while ((caracter=getc(stdin)) != '0') {
    fputc(caracter, fileCreated);
  }
  
  fclose(fileCreated);
  fflush(0);

  printf("-----------------------------------------\n");

  // Abrindo o fileCreated novamente  
  fileCreated = fopen("arq.txt", "r");

  while ((caracterFileCreated=getc(fileCreated)) != EOF)
    putchar(caracterFileCreated);
  fclose(fileCreated);
  return 0;
}