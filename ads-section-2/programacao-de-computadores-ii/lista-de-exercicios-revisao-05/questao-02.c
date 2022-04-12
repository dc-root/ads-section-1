#include <stdio.h>
#include <stdlib.h>

void main () {
  // declarando as variaveis e associando as aos seus respectivos ponteiros
  int numero_int = 100, *p_numero_int=&numero_int;
  float numero_real = 99.9, *p_numero_real=&numero_real;
  char string[100] = "Diego", *p_string=&string;

  // Imprimindo as variaveis antes dos valores serem modificados com os ponteiro
  printf("variavel inteira tem o valor  %d\n", *p_numero_int);
  printf("variavel real tem o valor  %.2f\n", *p_numero_real);
  printf("variavel char tem o valor  %s\n",  p_string);

  printf("\n\nDigite o valor para o numero inteiro: ");
  scanf("%d", p_numero_int);
  
  printf("Digite o valor para o numero real: ");
  scanf("%f%*c", p_numero_real);

  printf("Digite o valor para o char: ");
  fgets(p_string, 100, stdin);


  // Imprimindo as variaveis após os valores serem modificados utilizando os seus ponteiros
  printf("\n\nvariavel inteira tem o valor  %d\n", *p_numero_int);
  printf("variavel real recebeu o valor  %.2f\n", *p_numero_real);
  printf("variavel char recebeu o valor  %s\n", p_string);

  getchar();
}