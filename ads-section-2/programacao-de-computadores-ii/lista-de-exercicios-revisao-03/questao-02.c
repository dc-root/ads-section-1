#include <stdlib.h>
#include <stdio.h>

#define qnt_pessoas 4

// Estrutura de tipo para coletar os nomes que serão passados pelo usuário
typedef struct {
  char nome[20];
} Nomes;

// Função para limpar o buffer
void clearBuffer(void) {
  char c;
  do {
    c = getchar();
  } while ((c!='\n') && (c!=EOF));
}

int main () {
  // Defino a variavel nomes com tipo criado anteriormente
  Nomes nomes[qnt_pessoas];

  printf("Digite o nome de %d pessoas\n\n", qnt_pessoas);

  // Coletando os nomes
  for (int i=0; i<qnt_pessoas; i++) {
    printf("%dº pessoa: ", i+1);
    scanf("%20s", nomes[i].nome);
    // fgets(nomes[i].nome, qnt_pessoas, stdin);
    clearBuffer();
  }

  // Imprimindo os nomes
  printf("\n\nlista dos nomes digitados:\n\n");
  for (int i=0; i<qnt_pessoas; i++) {
    printf("%s\n", nomes[i].nome);
  }

  // Lista de nomes inversos
  printf("\nlista inversa dos nomes:\n\n");
  for (int i=qnt_pessoas; i>=0; i--) {
    printf("%s\n", nomes[i].nome);
  }

  return 0;
}