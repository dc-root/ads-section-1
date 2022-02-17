#include <stdlib.h>

int main () {
  int numeroAnterior=0, numeroAtual=1, reserva=0;

  for (int i=0; i<10; i++) {
    printf("%d\n", numeroAtual);

    reserva = numeroAtual + numeroAnterior;
    numeroAnterior = numeroAtual;
    numeroAtual = reserva;
  }
  return 0;
} 