#ifndef INCLUDED_H_VOO
#define INCLUDED_H_VOO

//TIPO DATA
typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

//TIPO HORARIO
typedef struct {
    int hora;
    int minutos;
} Horario;

//TIPO VOO
typedef struct {
    int numero;
    char origem[31];
    char destino[31];
    Data data_viagem;
    Horario horario;
    double valor_passagem;
    int capacidade;
    int lotacao;
} Voo;

//TIPO PASSAGEIRO
typedef struct {
    char cpf[15];
    char nome[51];
} Passageiro;

//TIPO REGISTRO DE PASSAGEM
typedef struct {
    char cpf_passageiro[15];
    int numero_voo;
    int numero_poltrona;
    Data data_compra;
    double valor_passagem;
} RegistroPassagem;

//TIPO TABELA REGISTROS PASSAGEM
typedef struct {
    int indice;
    RegistroPassagem registros[180*5];
} TabelaRegistroPassagem;

//PROTOTIPOS DAS FUNCOES
void imprimeVoo(Voo voo, TabelaRegistroPassagem* tabela);

Voo* pesquisarVooNumero(int numero_voo, Voo* voos, int qtd_voos);
Voo* pesquisarVooOrigem(char* origem, Voo* voos, int qtd_voos);
Voo* pesquisarVooDestino(char* destino, Voo* voos, int qtd_voos);

int confirmarReserva(Voo* voo, Passageiro passageiro, Data data, TabelaRegistroPassagem* tabela);

#endif