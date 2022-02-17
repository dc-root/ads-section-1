#include <stdlib.h>

int main () {
  float notaAluno, sumNotas=0, media=0;

  for (int i=0; i<4; i++) {
    printf("Digite a %dª nota: ", i+1);
    scanf("%f", &notaAluno);

    sumNotas = sumNotas + notaAluno;
  }

  media = sumNotas/4;

  if (media > 6)
    printf("\nALUNO APROVADO");
  else
    printf("\nALUNO REPROVADO");

  return 0;
} 