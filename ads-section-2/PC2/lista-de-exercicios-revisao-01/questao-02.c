#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main () {
    setlocale(LC_ALL, "portuguese");
    
    // 2 - Faça um algoritmo que receba dois números e ao final mostre a soma, subtração, multiplicação e a divisão dos números lidos.
    int num1, num2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d%d", &num1, &num2);

    printf("Soma: %d\n", num1+num2);
    printf("Subtração: %d\n", num1-num2);

    printf("Multiplicação: %d\n", num1*num2);
    printf("Divisão: %f\n", (float) num1/num2);

    return 0;
}