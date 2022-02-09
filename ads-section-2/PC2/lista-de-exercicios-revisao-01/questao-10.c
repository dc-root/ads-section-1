#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "portuguese");

    // 10 - A Loja Mamão com Açúcar está vendendo seus produtos em 5 (cinco) prestações sem juros. Faça um algoritmo que recebe um valor de uma compra e mostre o valor das prestações.

    float valorCompra, valorPrestacao;

    printf("Digite o valor da compra do produto: ");
    scanf("%f", &valorCompra);

    valorPrestacao = valorCompra / 5;

    printf("o valor da prestação e de R$%.2f", valorPrestacao);

    
    return 0;
}