#include "voo.h"
#include <stdio.h>
#include <stdlib.h>

//CONSTANTES
#define QTD_VOOS 2
#define CAPACIDADE_MAX 180

#define FAZER_CONSULTA 1
#define EFETUAR_RESERVA 2
#define SAIR 3

#define POR_NUMERO_VOO 1
#define POR_ORIGEM_VOO 2
#define POR_DESTINO_VOO 3


//FUNCOES
void consultar(Voo* voos, int qtd_voos, TabelaRegistroPassagem* tabelaRegistroPassagem) {
    //dados
    int opcao = 0;
    Voo* voo_pesquisado;
    int numero_voo = 0;
    char origem[31];
    char destino[31];

    //menu consultar
    printf("---MENU CONSULTAR---\n");
    printf("[1] - Por numero de voo.\n");
    printf("[2] - Por origem.\n");
    printf("[3] - Por destino.\n");
    printf("[4] - Volta ao menu Principal.\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    //trata opcao desejada
    switch (opcao)
    {
        case POR_NUMERO_VOO:
            //leitura do numero do voo
            printf("Informe o numero do voo a ser pesquisado: ");
            scanf("%d", &numero_voo);

            //faz a pesquisa
            voo_pesquisado = pesquisarVooNumero(numero_voo, voos, qtd_voos);

            //imprimir voo
            if (voo_pesquisado != NULL)
                imprimeVoo(*voo_pesquisado, tabelaRegistroPassagem);
            else 
                printf("ERROR: voo inexistente!\n");            
            break;
        
        case POR_ORIGEM_VOO:
            //leitura da origem do voo
            printf("Informe a origem do voo: ");
            scanf("%s", origem);

            //faz a pesquisa
            voo_pesquisado = pesquisarVooOrigem(origem, voos, qtd_voos);

            //imprimir voo
            if (voo_pesquisado != NULL)
                imprimeVoo(*voo_pesquisado, tabelaRegistroPassagem);
            else
                printf("ERROR: voo inexistente!\n"); 
            break;
        
        case POR_DESTINO_VOO:
            //leitura da origem do voo
            printf("Informe o destino do voo: ");
            scanf("%s", destino);

            //faz a pesquisa
            voo_pesquisado = pesquisarVooDestino(destino, voos, qtd_voos);

            if (voo_pesquisado != NULL)
                imprimeVoo(*voo_pesquisado, tabelaRegistroPassagem);
            else
                printf("ERROR: voo inexistente!\n"); 
            break;
    }
}

void efetuarReserva(Voo* voos, int qtd_voos, TabelaRegistroPassagem* tbl_registro_passagem) {
    //dados
    int numero_voo = 0;
    Voo* voo_pesquisado;
    Passageiro passageiro;
    Data data_compra;

    //leitura do numero do voo
    printf("Informe o numero do voo desejado: ");
    scanf("%d", &numero_voo);

    voo_pesquisado = pesquisarVooNumero(numero_voo, voos, qtd_voos);

    if (voo_pesquisado == NULL) {
        printf("AVISO: Voo inexistente!\n");
    } else if (voo_pesquisado->capacidade > 0) {
        //leitura dos dados do passageiro
        printf("Informe o CPF do passageiro: ");
        scanf("%s", passageiro.cpf);

        printf("Informe o nome do passageiro: ");
        scanf("%s", passageiro.nome);

        //leitura da data da compra
        printf("Informe a data da compra [dd-mm-yyyy]: ");
        scanf("%d-%d-%d", &data_compra.dia, &data_compra.mes, &data_compra.ano);

        //confirma a reserva
        confirmarReserva(voo_pesquisado, passageiro, data_compra, tbl_registro_passagem);
    } else {
        printf("AVISO: o voo esta lotado!\n");
    }
}

//inicializa os registros de passagem
void inicializaTabelaRegistrosPassagem(TabelaRegistroPassagem* tabela) {
    //dados
    int i;

    for (i = 0; i < (CAPACIDADE_MAX * QTD_VOOS); i++)
        tabela->registros[i].numero_voo = 0;
}

//PROGRAMA PRINCIPAL
int main() {
    //dados
    Voo voos[QTD_VOOS];
    TabelaRegistroPassagem tbl_registrosPassagem;
    int i;
    int opcao = 0;

    //inicializa a tabela de registros
    inicializaTabelaRegistrosPassagem(&tbl_registrosPassagem);

    //leitura
    for (i = 0; i < QTD_VOOS; i++) {
        //numero
        do {
            printf("Informe o numero do voo: ");
            scanf("%d", &voos[i].numero);
            //error
            if (voos[i].numero < 0)
                printf("ERROR: numero do voo invalido!\n");
        } while (voos[i].numero < 0);
        
        //origem
        printf("Informe a origem do voo: ");
        scanf("%s", voos[i].origem);

        //destino
        printf("Informe o destino do voo: ");
        scanf("%s", voos[i].destino);

        printf("Informe a data de viagem [dd-mm-yyyy]: ");
        scanf("%d-%d-%d", &voos[i].data_viagem.dia, &voos[i].data_viagem.mes, &voos[i].data_viagem.ano);

        //horario
        printf("Informe o horario do voo [hh:mm]: ");
        scanf("%d:%d", &voos[i].horario.hora, &voos[i].horario.minutos);

        //valor passagem
        printf("Informe o valor da passagem: ");
        scanf("%lf", &voos[i].valor_passagem);

        voos[i].capacidade = CAPACIDADE_MAX;
        voos[i].lotacao = 0;
    }

    while (1) {
        //menu de opcoes
        printf("---MENU---\n");
        printf("[1] - Consultar.\n");
        printf("[2] - Efetuar Reserva.\n");
        printf("[3] - Sair.\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        //trata a opcao desejada
        switch (opcao) {
            case FAZER_CONSULTA:
                consultar(voos, QTD_VOOS, &tbl_registrosPassagem);
                break;

            case EFETUAR_RESERVA:
                efetuarReserva(voos, QTD_VOOS, &tbl_registrosPassagem);
                break;

            case SAIR:
                exit(0);
        }
    }
}