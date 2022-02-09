#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "portuguese");
    //  4 - Faça um algoritmo que leia o nome do vendedor, o seu salário fixo e o total (valor) de vendas efetuadas por ele no mês. Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informe seu nome, o salário fixo e o saláriol no final do mês.
    
    char nomeVendedor[30];
    float salarioFixo, salarioTotal, totalVendasPorMes;

    printf("Nome do vendedor: ");
    scanf("%s", nomeVendedor);

    printf("Salario Fixo(R$): ");
    scanf("%f", &salarioFixo);

    printf("Total de vendas no mês(R$): ");
    scanf("%f", &totalVendasPorMes);

    salarioTotal = salarioFixo + totalVendasPorMes * 15/100;

    printf("Nome: %s\n", nomeVendedor);
    printf("Salario fixo: %.2f\n", salarioFixo);
    printf("Salario total: %.2f", salarioTotal);

    return 0;
}