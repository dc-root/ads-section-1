#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define NUMERO_REGOSTROS 1

// Definindo estrutura
typedef struct {
  char nome[100];
  char email[100];
  int matricula;
  int telefone;
} Registro;

// Criando variavel registro com tipo Registro
Registro RG, RG2;

int main () {
  FILE *fp;

  fp = fopen("arquivo.csv", "w+");

  if (fp == NULL) {
    perror("Error ao ler o arquivo!!");
    exit(1);
  }
  
  // Lendo os dados do usuario
  // for (int i=0; i<NUMERO_REGOSTROS; i++) {
    fflush(stdin);

    printf("Digite o nome: ");
    fgets(RG.nome, 100, stdin);
    
    fflush(stdin);

    printf("Digite o email: ");
    fgets(RG.email, 100, stdin);

    printf("Digite o numero da matricula: ");
    scanf("%d", &RG.matricula);

    printf("Digite o numero de telefone: ");
    scanf("%d", &RG.telefone);
  // }

  // imprimindo no arquivo
  // for (i = 0; i < NUMERO_REGOSTROS; i++) {
    // fwrite(&RG, sizeof(RG), 1, fp);
    // fread(RG[NUMERO_REGOSTROS], NUMERO_REGOSTROS, sizeof(RG), arquivo);
  // }

  fwrite(&RG, sizeof(RG), 1, fp);

  fread(&RG2, sizeof(RG), 1, fp);

  printf("Matricula: %d", RG2.matricula);
  
  fclose(fp);
  return 0;
}