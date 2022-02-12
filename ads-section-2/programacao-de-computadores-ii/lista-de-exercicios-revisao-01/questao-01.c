#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "portuguese");

    // 1 - Faça um algoritmo que receba dois números e exiba o resultado da sua soma.
    int num1, num2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d%d", &num1, &num2);

    printf("Soma: %d\n", num1+num2);
    return 0;
}