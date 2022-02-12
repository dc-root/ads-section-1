#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "portuguese");

    // 8 - Elaborar um algoritmo que efetue a apresentação do valor da conversão em real (R$) de um valor lido em dólar (US$). O algoritmo deverá solicitar o valor da cotação do dólar e também a quantidade de dólares disponíveis com o usuário.

    float valorReal, valorDolar, valorCotacao;

    printf("Digite o valor em dolar($): ");
    scanf("%f", &valorDolar);

    printf("Digite o valor da cotação: ");
    scanf("%f", &valorCotacao);

    valorReal = valorDolar * valorCotacao;

    printf("O valor em rela é igual a R$%.2f", valorReal);
    
    
    return 0;
}