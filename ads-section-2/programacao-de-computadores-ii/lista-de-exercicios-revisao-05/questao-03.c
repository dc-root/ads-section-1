#include <stdio.h>
#include <stdlib.h>

void main(void) {
  int vet_int[5];
  int *p_vet_int=&vet_int[0];
  
  // Coletando os números e passando o seu valor ao vetor por meio do ponteiro com seus respectivos endereços na memoria!
  for (int i=0; i<5; i++, p_vet_int++) {
    printf("Digite o %dº numero: ", i+1);
    scanf("%d", p_vet_int);

    // Obtendo o dobro do valor de cada elemento do vetor, e os armazenando no mesmo vetor nos respectivos locais aos valores anteriores, isso com a utilização de ponteiros
    *p_vet_int = *p_vet_int * 2;
  }

  p_vet_int=vet_int;

  // Imprimindo o valor do vetor original pelo ponteiro vinculado, após as modificações.
  printf("\nValores do vetor: ");
  for (int i=0; i<5; i++) {
    printf("%d ",  *p_vet_int);
    p_vet_int++;
  }
  getchar();
}