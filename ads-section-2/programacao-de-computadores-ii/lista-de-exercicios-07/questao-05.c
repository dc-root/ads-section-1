#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define meses 12
#define semana 4

int main() {
  int i, j,
      MAT[meses][semana],
      vetSumMoth[meses], vetSumWeek[semana],
      sumMoth=0, sumWeek=0, sumAllSales=0;

  srand(time(NULL));

  // Criado a matriz && somando cada vendas em cada mês && 
  for (i=0; i<meses; i++) {
    sumMoth=0;
    for (j=0; j<semana; j++) {
      MAT[i][j] = 100 + rand() % 500;

      // calculo da soma de cada mês && soma de todo o periodo
      sumMoth += MAT[i][j];
      sumAllSales += MAT[i][j];
    }
    vetSumMoth[i] = sumMoth;
  }

  // soma das vendas em cada semana durante todo o ano
  for (j=0; j<semana; j++) {
    sumWeek=0;
    for (i=0; i<meses; i++) {
      sumWeek += MAT[i][j];
    }
    vetSumWeek[j] = sumWeek;
  }

  for (i=0; i<meses; i++)
    printf("\nSUM OF MOTH %d: R$%.2f", i+1, (float) vetSumMoth[i]);

  printf("\n\nSUM OF WEEKS:");
  for (i=0; i<semana; i++)
    printf("\tR$%.2f\t", (float) vetSumWeek[i]);

  printf("\n\n");
  printf("SUM ALL: %.2f", (float) sumAllSales);

  printf("\n\n");
  for (i=0; i<meses; i++) {
    for (j=0; j<semana; j++) {
      printf("R$%.2f\t", (float) MAT[i][j]);
    }
    printf("\n");
  }

  return 0;
}