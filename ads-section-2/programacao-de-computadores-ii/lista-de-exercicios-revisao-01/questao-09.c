#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "portuguese");

    // 9 - Faça um algoritmo que recebe um valor que foi depositado e exiba o valor com rendimento da poupança após um mês. Considere fixo o juro da poupança em 0,70% a.m.

    float valorDepositado, valorRendido;

    printf("Digite o valor do deposito(R$): ");
    scanf("%f", &valorDepositado);

    valorRendido = valorDepositado + valorDepositado * 100/70;

    printf("valor do rendimento: %.2f", valorRendido);
    
    return 0;
}