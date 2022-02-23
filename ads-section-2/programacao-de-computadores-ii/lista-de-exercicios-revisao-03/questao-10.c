#include <stdlib.h>
#include <time.h>

#define qnt_num 100

int main () {
  int vetor[qnt_num];

  for (int i=0;i<qnt_num;i++) {
    vetor[i] = rand() % 500;
    printf("%d\n", vetor[i]);
  }
}