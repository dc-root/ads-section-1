#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>

#define NUM_SERVICOS 100 // Quantidade de serviços que a oficina mecânica pode realizar
#define NUM_OS 100 // Limite de serviços que podem ser ordenados

// DEFININDO AS ESTRUTURAS
typedef struct {
  char nomeServico[100];
  char descricaoServico[500];
} tServicos;

typedef struct {
  int numeroOrdemServico;
  char dataEmissaoOrdemServico[100];
  tServicos servicoEmitido;
  float valorServico;
  char nomeCliente[50];
} tOrdemServico, *pOrdemServico;

tServicos vServicos[NUM_SERVICOS];
tOrdemServico OS[NUM_OS];
pOrdemServico pOS = OS;

int countG=0;

// DECLARANDO AS FUNÇÕES
void cadastrarServico(char *nome, char *description);
void registrarOrdemServico(float *soma_vs, char *nome_cliente_smc, float *valor_smc, char *data_smc, char *descricao_smc);

void main() {
  int optionMenu=0, countServico=0, countOrdemServico=0;
  float somaValoresServicos=0.0, mediaValoreServico=0, valorServicoMaisCaro=0.0;
  char nomeClienteMaisCaro[50], dataEmissaoServicoMaisCaro[100], descricaoClienteMaisCaro[500];

  while (countServico < NUM_SERVICOS) {
    // Menu
    printf("\n\t1. Cadastrar novo serviços\n\t2. Sair\n\nEscolha uma das opções acima: ");
    scanf("%i%*c", &optionMenu);

    if (optionMenu == 1) {
      cadastrarServico(vServicos[countServico].nomeServico, vServicos[countServico].descricaoServico);

      countServico++;
    } else if (optionMenu == 2)
      break;
    else;
  }

  countG=countServico;

  // sleep(2);
  // printf("\nOK, Serviços cadastrado com sucesso!!\n");
  // sleep(2);

  // Lenitura das OS
  while (countOrdemServico < NUM_OS) {
    // Menu
    printf("\n\t1. Registrar Ordem de Serviço\n\t2. Sair\n\nEscolha uma das opções acima: ");
    scanf("%i%*c", &optionMenu);
    if (optionMenu == 1) {
      registrarOrdemServico(&somaValoresServicos, nomeClienteMaisCaro, &valorServicoMaisCaro, dataEmissaoServicoMaisCaro, descricaoClienteMaisCaro);

      countOrdemServico++;
      pOS++;
    } else if (optionMenu == 2)
      break;
    else;
  }

  // Mostrando Resultado
  printf("\n\n################################ INFORMATION ################################\n\n");
  
  printf("Media dos valores entre os serviços ordenados registrados: R$%.2f\n\n", mediaValoreServico);
  mediaValoreServico = somaValoresServicos / countOrdemServico;

  printf("Cliente com maior oferta: \t%s\n", nomeClienteMaisCaro);
  printf("Valor do serviço: \tR$%.2f\n", valorServicoMaisCaro);
  printf("Descrição: \t%s\n", descricaoClienteMaisCaro);
  printf("Data da solicitação: \t%s", dataEmissaoServicoMaisCaro);

  printf("\n\n##############################################################################\n\n");
}

// DEFININDO AS FUNÇÕES

// Função para cadastro de serviços
void cadastrarServico(char *nome, char *description) {
  // Nome do serviço
  printf("\nDigite o nome do serviço: ");
  fgets(nome, 100, stdin);

  // Descrição do serviço
  printf("Descrição:\n> ");
  fgets(description, 500, stdin);
}

void registrarOrdemServico(float *soma_vs, char *nome_cliente_smc, float *valor_smc, char *data_smc, char *descricao_smc) {
  int opcaoServico;

  // Numero da OS
  pOS->numeroOrdemServico = 10000000 + rand() % 99999999;
  printf("\nNumero de OS: %i", pOS->numeroOrdemServico);

  // Data da OS
  time_t now;
  now = time(NULL);

  strcpy(pOS->dataEmissaoOrdemServico, ctime(&now));
  printf("\n%s\n", pOS->dataEmissaoOrdemServico);

  // Leitura do serviço
  for (int i=0; i<countG; i++) {
    printf("%i. %s", i+1, vServicos[i].nomeServico);
  }
  printf("\nEscolha uma das opções de serviço acima: ");
  scanf("%i", &opcaoServico);
  strcpy(pOS->servicoEmitido.nomeServico, vServicos[opcaoServico].nomeServico);

  // Leitura do valor do serviço
  printf("Digite o valor do serviço(R$): ");
  scanf("%f%*c", &pOS->valorServico);

  // Leitura do nome do cliente
  printf("Qual o nome do cliente: ");
  fgets(pOS->nomeCliente, 50, stdin);

  // Soma valores
  *soma_vs += pOS->valorServico;

  // Cliente mais caro
  if (*valor_smc < pOS->valorServico) {
    strcpy(nome_cliente_smc, pOS->nomeCliente);
    *valor_smc = pOS->valorServico;
    strcpy(data_smc, pOS->dataEmissaoOrdemServico);
    strcpy(descricao_smc, pOS->servicoEmitido.descricaoServico);
  }
}