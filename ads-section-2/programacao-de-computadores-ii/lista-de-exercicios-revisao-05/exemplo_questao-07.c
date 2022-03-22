// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>

// #define QUANTIDADE_DE_SERVICOS 7

// typedef struct {
//   int dia;
//   int mes;
//   int ano
// } tData;

// typedef struct {
//   char nome[200];
// } tServicos;

// typedef struct {
//   int numeroOrdemCervico;
//   tData dataCervico;
//   float valor;
//   tServicos Servico[QUANTIDADE_DE_SERVICOS];
//   char nomeCliente[50];
// } tOrdemServico, *pOrdemServico;

// void main() {
//   tOrdemServico OS;
//   pOrdemServico pOS = &OS;

//   const tOrdemServico Servicos = {
//     .Servico = {
//       { .nome = "Manutenção da embreagem" },
//       { .nome = "Troca de óleo do motor" },
//       { .nome = "Troca de óleo do câmbio automático" },
//       { .nome = "Troca de filtros" },
//       { .nome = "Troca de lâmpadas" },
//       { .nome = "Alinhamento e Balanceamento" },
//       { .nome = "Revisão no Sistema de Arrefecimento" }
//     }
//   };
  
//   for (int i=0; i<7; i++) {
//     printf("\n%s", Servicos.Servico[i].nome);

//   }
  
//   // Lendo as informações do usuário
  
//   getchar();
// }


// ############################################################################

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>

#define TIPOS_DE_SERVICOS 8
#define SOLICITACAO_DE_SERVICO 3 // 100

// Função par limpar o buffer
void clearBuffer(void) {
  char c;
  do {
    c = getchar();
  } while ((c!='\n') && (c!=EOF));
}

// Estrutura do serviço solicitado pelo cliente
typedef struct {
  char nome[200];
  char descricao[500];
} tServicos, *pServicos;

// Estrutura das ordems de serviço
typedef struct {
  int numeroOrdemServico;
  char dataServico[100];
  float valor;
  tServicos servicoPrestado[TIPOS_DE_SERVICOS];
  char nomeCliente[50];
} tOrdemServico, *pOrdemServico;

void main() {
  tOrdemServico OS;
  pOrdemServico pOS = &OS;
  int sair=1, option=0, qntOS=0;
  float mediaValores=0, somaValores=0, servicoMaisCaro=0;
  char nomeClienteMaisCaro[50], nomeServicoMaisCaro[200], descrClienteMaisCaro[500], dataClienteMaisCaro[100];

  time_t now;

  tServicos servicos[TIPOS_DE_SERVICOS];
  pServicos pS = &pOS->servicoPrestado[0];

  // Serviços que a oficina oferece
  char string[TIPOS_DE_SERVICOS][200] = {
    "Manutenção da embreagem",
    "Revisão dos componentes de Freio",
    "Revisão no Sistema de Arrefecimento",
    "Troca de óleo do motor",
    "Troca de óleo do câmbio automático",
    "Troca de filtros",
    "Troca de lâmpadas",
    "Alinhamento e Balanceamento"
  };

  // vinculando-os a estrutura de ordem de serviço
  for (int i=0; i<TIPOS_DE_SERVICOS; i++) {
    strcpy(pS->nome, string[i]);
    pS++;
  }

  // Lendo as informações do usuário da O.S
  for (int i=0; i<SOLICITACAO_DE_SERVICO; i++, pOS++) {
    printf("\n\t1. Continuar(Solicitar serviço)\n\t0. Cancelar\n\nDigte uma das opções acima: ");
    scanf("%d", &sair);

    if (sair == 0) break;

    // Data do serviço
    pOS->numeroOrdemServico = 10000 + rand() % 99999;
    printf("\nNumero da Ordem de Servico: %d\n", pOS->numeroOrdemServico);
    
    now = time(NULL);
    strcpy(pOS->dataServico, ctime(&now));
    printf("Data da ocorrencia do serviço: %s\n", pOS->dataServico);

    // valor do serviço
    printf("Digite o valor do serviço prestado(R$): ");
    scanf("%f", &pOS->valor);

    // Serviço prestado
    for (int i=0; i<TIPOS_DE_SERVICOS; i++) {
      printf("\n%d. %s", i+1, pOS->servicoPrestado[i].nome);
    }

    clearBuffer();
    printf("\n\nQual serviço foi prestado: ");
    scanf("%d", &option);

    // Descrição do serviço
    printf("\nDescreva o que foi feito\n> ");
    fgets(pOS->servicoPrestado[option].descricao, 500, stdin);

    // Nome do cliente
    clearBuffer();
    printf("\nNome do cliente: ");
    fgets(pOS->nomeCliente, 50, stdin);

    qntOS++;
    somaValores += pOS->valor;

    if (pOS->valor > servicoMaisCaro) {
      strcpy(nomeClienteMaisCaro, pOS->nomeCliente);
      strcpy(nomeServicoMaisCaro, pOS->servicoPrestado->nome);
      strcpy(descrClienteMaisCaro, pOS->servicoPrestado->descricao);
      strcpy(dataClienteMaisCaro, pOS->dataServico);
    }
  }

  mediaValores = somaValores / qntOS;
  printf("Media dos valores: R$%.2f\n", mediaValores);

  printf("\n\nCLIENTE MAIS CARO\n\n");
  printf("nome: %s\n", nomeClienteMaisCaro);
  printf("serviço prestado: %s\n", nomeServicoMaisCaro);
  printf("descrição do serviço: %s\n", descrClienteMaisCaro);
  printf("data de realização: %s\n", dataClienteMaisCaro);

  getchar();
}
