#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int dia;
  int mes;
  int ano;
} tData;

typedef struct {
  char nome[50];
  int idade;
  char sexo; // M / F
  char CPF[12];
  tData dataNascimento;
  int codigoSetorTrabalho;
  char cargo[30];
  float salario;
} tRegistro, *pRegistro;

tRegistro rg_colaborador;
pRegistro prg_colaborador = &rg_colaborador;

void main() {
  // Lendo os dados do funcionário
  printf("Qual o nome do colaborador: ");
  fgets(prg_colaborador->nome, 50, stdin);

  printf("Qual a idade do colaborador: ");
  scanf("%d%*c", &prg_colaborador->idade);

  printf("Qual o seu genêro(M/F): ");
  scanf("%c%*c", &prg_colaborador->sexo);

  printf("Qual o seu CPF (somente numeros): ");
  fgets(prg_colaborador->CPF, 12, stdin);

  printf("Data de nascimento(dd/mm/ano): ");
  scanf("%d/%d/%d%*c", &prg_colaborador->dataNascimento.dia, &prg_colaborador->dataNascimento.mes, &prg_colaborador->dataNascimento.ano);

  printf("Codigo do setor onde trabalha(0-99): ");
  scanf("%d%*c", &prg_colaborador->codigoSetorTrabalho);

  printf("Função do colaborador: ");
  fgets(prg_colaborador->cargo, 30, stdin);

  printf("Salario: ");
  scanf("R$%.2f%*c", &prg_colaborador->salario);

  // Imprimindo os dados do funcionário cadastrado
  printf("\nAPRESENTANDO OS DADOS CADASTRADO\n\n");
  printf("NOME      \t%s", rg_colaborador.nome);
  printf("CPF       \t%s\n", rg_colaborador.CPF);
  printf("IDADE     \t%d\n", rg_colaborador.idade);
  printf("NASCIMENTO\t%d/%d/%d\n", rg_colaborador.dataNascimento.dia, rg_colaborador.dataNascimento.mes, rg_colaborador.dataNascimento.ano);
  printf("CODIGO    \t%d\n", rg_colaborador.codigoSetorTrabalho);
  printf("CARGO     \t%s", rg_colaborador.cargo);
  printf("SALARIO   \t%f\n", rg_colaborador.salario);
}