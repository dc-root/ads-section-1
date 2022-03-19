#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define NUM_ELETRON 5

// Função par limpar o buffer
void clearBuffer(void) {
  char c;
  do {
    c = getchar();
  } while ((c!='\n') && (c!=EOF));
}

// Estrutura de informações a ser vinculada a cada eletrodomestico, na estrutura foi criado dois tipos onde um deles é o ponteiro
typedef struct {
  char name[15];
  float potencia;
  float tempoAtivo;
  float consumoRelativo;
} tEletron, *p_tEletron;

void main() {
  float consumoTotal=0, tempoEmDias=0;

  tEletron eletron[NUM_ELETRON];
  p_tEletron p_eletron = &eletron[0];

  // Lendo as informações do usuário
  for (int i=0; i<NUM_ELETRON; i++, p_eletron++) {
    printf("\nQual e o nome do %dº eletrodomestico: ", i+1);
    fgets(p_eletron->name, 15, stdin);

    printf("Qual o valor da potência do eletrodoméstico(kW): ");
    scanf("%f", &p_eletron->potencia); // kW

    printf("Quantas horas o eletrodomestivo vai ficar ligado por dia (horas): ");
    scanf("%f", &p_eletron->tempoAtivo); // hrs

    if (i==0) {
      printf("\nQual a estimativa de tempo de uso em dias (quantidade de dias): ");
      scanf("%f", &tempoEmDias); // dias
    }

    // Calculando o consumo relativo a cada eletrodomestico
    p_eletron->consumoRelativo = p_eletron->potencia * (p_eletron->tempoAtivo * tempoEmDias); // kWh
    // Obtendo o valor do consumo total
    consumoTotal += p_eletron->consumoRelativo; // kWh

    clearBuffer();
  }

  printf("\nCONSUMO TOTAL: %.0fkWh\n", consumoTotal / 1000);

  // colocando o nome dos eletrodomestico em letras maiúsculas, para uma melhor visualização
  for (int i=0; i<NUM_ELETRON; i++) {
    for (int j = 0; eletron[i].name[j]; j++) {
      if (eletron[i].name[j] >= 'a' && eletron[i].name[j] <= 'z') {
        eletron[i].name[j] = toupper(eletron[i].name[j]);
      }
    }

    // Obtendo a porcentagem do valor gasto entre cada eletrodomestico em relação ao total gasto
    float percentage = (eletron[i].consumoRelativo / consumoTotal) * 100;

    printf("\n%s \t\t%.3f%%\n", eletron[i].name, percentage);
  }

  getchar();
}