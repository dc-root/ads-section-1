#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define QUANTIDADE_DE_SERVICOS 7

typedef struct {
  int dia;
  int mes;
  int ano
} tData;

typedef struct {
  char nome[200];
} tServicos;

typedef struct {
  int numeroOrdemCervico;
  tData dataCervico;
  float valor;
  tServicos Servico[QUANTIDADE_DE_SERVICOS];
  char nomeCliente[50];
} tOrdemServico, *pOrdemServico;

void main() {
  tOrdemServico OS;
  pOrdemServico pOS = &OS;

  const tOrdemServico Servicos = {
    .Servico = {
      { .nome = "Manutenção da embreagem" },
      { .nome = "Troca de óleo do motor" },
      { .nome = "Troca de óleo do câmbio automático" },
      { .nome = "Troca de filtros" },
      { .nome = "Troca de lâmpadas" },
      { .nome = "Alinhamento e Balanceamento" },
      { .nome = "Revisão no Sistema de Arrefecimento" }
    }
  };
  
  for (int i=0; i<7; i++) {
    printf("\n%s", Servicos.Servico[i].nome);

  }
  
  // Lendo as informações do usuário
  
  getchar();
}
