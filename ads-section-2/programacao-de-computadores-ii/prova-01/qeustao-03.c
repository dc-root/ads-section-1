#include <stdlib.h>
#include <stdio.h>
 
// Declarando funnção
int potencia(int base, int expoente);
 
int main () {
  printf("%d", potencia(7, 7));
  return 0;
}

// Criando a função
int potencia(int base, int expoente) {
 int resultado;
 if(expoente == 0) {
	return 0;
 }
 for(int i=0; i<expoente; i++) {
   resultado *= base;
 }
 return resultado;
}