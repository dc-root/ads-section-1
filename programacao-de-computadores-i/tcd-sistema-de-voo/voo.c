#include "voo.h"
#include <stdio.h>
#include <string.h>

//FUNCOES AUXILIARES
void imprimeRegistroPassagem(RegistroPassagem registro) {
    printf("CPF do passageiro: %s\n", registro.cpf_passageiro);
    printf("Numero da poltrona: %d\n", registro.numero_poltrona);
    printf("Data da Compra: %02d/%02d%04d\n", registro.data_compra.dia, registro.data_compra.mes, registro.data_compra.ano);
    printf("Valor Pago: %.2lf\n", registro.valor_passagem);
}

int calcularDiferencaDias(Data data1, Data data2) {
    //dados
    long unsigned int qtd_dias_data1 = 0;
    long unsigned int qtd_dias_data2 = 0;

    qtd_dias_data1 = data1.dia + (data1.mes * 30) + (data1.ano * 365);
    qtd_dias_data2 = data2.dia + (data2.mes * 30) + (data2.ano * 365);

    return qtd_dias_data2 - qtd_dias_data1;
}

//FUNCOES PRINCIPAIS
void imprimeVoo(Voo voo, TabelaRegistroPassagem* tabelaRegistros) {
    //dados
    int i;

    printf("-------VOO-------\n");
    printf("Numero: %d\n", voo.numero);
    printf("Origem: %s\n", voo.origem);
    printf("Destino: %s\n", voo.destino);
    printf("Data da viagem: %02d/%02d/%04d\n", voo.data_viagem.dia, voo.data_viagem.mes, voo.data_viagem.ano);
    printf("Horario da viagem: %2d:%2d\n", voo.horario.hora, voo.horario.minutos);
    printf("Valor da Passagem: %.2lf\n", voo.valor_passagem);
    printf("Capacidade: %d passageiros\n", voo.capacidade);
    printf("Lotacao: %d passageiros\n", voo.lotacao);

    //imprime todos os registros de passagens do voo
    printf("Registros:\n");
    for (i = 0; i < tabelaRegistros->indice; i++) {
        if (tabelaRegistros->registros[i].numero_voo == voo.numero) {
            imprimeRegistroPassagem(tabelaRegistros->registros[i]);
        }
    }

    printf("--------------\n");
}

Voo* pesquisarVooNumero(int numero, Voo* voos, int qtd_voos) {
    //dados
    int i;
    Voo* voo_encontrado = NULL;

    //realizar a procura
    for (i = 0; i < qtd_voos; i++) {
        if (voos[i].numero == numero) {
            voo_encontrado = &voos[i];
            break;
        }
    }

    //retorna o voo encontrado
    return voo_encontrado;
}

Voo* pesquisarVooOrigem(char* origem, Voo* voos, int qtd_voos) {
    //dados
    int i;
    Voo* voo_encontrado = NULL;

    //realizar a procura
    for (i = 0; i < qtd_voos; i++) {
        if (!strcmp(voos[i].origem, origem)) {
            voo_encontrado = &voos[i];
            break;
        }
    }

    //retorna o voo encontrado
    return voo_encontrado;
}

Voo* pesquisarVooDestino(char* destino, Voo* voos, int qtd_voos) {
    //dados
    int i;
    Voo* voo_encontrado = NULL;

    //realizar a procura
    for (i = 0; i < qtd_voos; i++) {
        if (!strcmp(voos[i].destino, destino)) {
            voo_encontrado = &voos[i];
            break;
        }
    }

    //retorna o voo encontrado
    return voo_encontrado;
}

int confirmarReserva(Voo* voo, Passageiro passageiro, Data data, TabelaRegistroPassagem* tabela) {
    RegistroPassagem registro_tmp;

    strcpy(registro_tmp.cpf_passageiro, passageiro.cpf);
    registro_tmp.numero_voo = voo->numero;
    registro_tmp.numero_poltrona = voo->lotacao + 1;
    voo->lotacao++;
    registro_tmp.data_compra = data;

    if (calcularDiferencaDias(data, voo->data_viagem) >= 30) {
        registro_tmp.valor_passagem = voo->valor_passagem * (0.95); // %5 de desconto
    } else {
        registro_tmp.valor_passagem = voo->valor_passagem;
    }

    tabela->registros[tabela->indice] = registro_tmp;
    tabela->indice++;

    return 1;
}
