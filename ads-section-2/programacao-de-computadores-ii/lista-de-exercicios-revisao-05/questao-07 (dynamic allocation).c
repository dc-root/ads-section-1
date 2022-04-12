#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>

#define NUM_SERVICOS 100 // Quantidade de serviços que a oficina mecânica pode realizar
#define NUM_OS 100 // Limite de serviços que podem ser ordenados

// DEFININDO AS ESTRUTURAS
typedef struct {
  char nomeServico[100], descricaoServico[500];
} tServicos;

typedef struct {
  int numeroOrdemServico;
  char dataEmissaoOrdemServico[100], nomeCliente[50];
  tServicos servicoEmitido;
  float valorServico;
} *pOrdemServico;

pOrdemServico pOS;
tServicos vServicos[NUM_SERVICOS];

int countG=0;
float somaValoresServicos=0.0, mediaValoreServico=0, valorServicoMaisCaro=0.0;
char nomeClienteMaisCaro[50], dataEmissaoServicoMaisCaro[100], descricaoClienteMaisCaro[500];

// DECLARANDO AS FUNÇÕES
void cadastrarServico(char *nome, char *description);
void registrarOrdemServico();

void main() {
  pOS = malloc(sizeof(pOrdemServico));
  if (!pOS) {
    printf("\nError na alocação de memoria!!");
    exit(1);
  }

  int optionMenu=0, countServico=0, countOrdemServico=0;

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

  sleep(2);
  printf("\nOK, Serviços cadastrado com sucesso!!\n");
  sleep(2);

  // Lenitura das OS
  while (countOrdemServico < NUM_OS) {
    // Menu
    printf("\n\t1. Registrar Ordem de Serviço\n\t2. Sair\n\nEscolha uma das opções acima: ");
    scanf("%i%*c", &optionMenu);
    if (optionMenu == 1) {
      registrarOrdemServico();
      countOrdemServico++;
      pOS++;
    } else if (optionMenu == 2)
      break;
    else;
  }

  mediaValoreServico = somaValoresServicos / countOrdemServico;

  sleep(2);

  // Mostrando Resultado
  printf("\n\n################################ INFORMAÇÕES ################################\n\n");
  
  printf("Media dos valores entre os serviços ordenados registrados: R$%.2f\n\n", mediaValoreServico);
  
  printf("CLIENTE MAIS CARO\n\n");
  printf("CLIENTE COM MAIOR OFERTA:\t%s", nomeClienteMaisCaro);
  printf("VALOR DO SERVIÇO:        \t\tR$%.2f\n", valorServicoMaisCaro);
  printf("DESCRIÇÃO  DO SERVIÇO:   \t%s", descricaoClienteMaisCaro);
  printf("DATA DA SOLICITAÇÃO:     \t%s", dataEmissaoServicoMaisCaro);

  printf("\n\n##############################################################################\n\n");

  free(pOS);
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

void registrarOrdemServico() {
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

  strcpy(pOS->servicoEmitido.nomeServico, vServicos[opcaoServico-1].nomeServico);
  strcpy(pOS->servicoEmitido.descricaoServico, vServicos[opcaoServico-1].descricaoServico);

  // Leitura do valor do serviço
  printf("Digite o valor do serviço(R$): ");
  scanf("%f%*c", &pOS->valorServico);

  // Leitura do nome do cliente
  printf("Qual o nome do cliente: ");
  fgets(pOS->nomeCliente, 50, stdin);

  // Soma valores
  somaValoresServicos += pOS->valorServico;

  // Cliente mais caro
  if (valorServicoMaisCaro < pOS->valorServico) {
    strcpy(nomeClienteMaisCaro, pOS->nomeCliente);
    valorServicoMaisCaro = pOS->valorServico;
    strcpy(dataEmissaoServicoMaisCaro, pOS->dataEmissaoOrdemServico);
    strcpy(descricaoClienteMaisCaro, pOS->servicoEmitido.descricaoServico);
  }
}