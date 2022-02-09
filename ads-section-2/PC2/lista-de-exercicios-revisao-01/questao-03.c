#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "portuguese");

    //  3 - Faça um algoritmo para determinar o consumo médio de um automóvel sendo fornecida a distância total percorrida pelo automóvel e o total de combustível gasto.
    
    float distanciaTotal, combustivelGastosTotal, consumoMedio;

    printf("Digite a distância total percorrida pele automovel: ");
    scanf("%f", &distanciaTotal);

    printf("Total de combustivel gastos: ");
    scanf("%f", &combustivelGastosTotal);

    consumoMedio = distanciaTotal/combustivelGastosTotal;

    printf("O consumo medio do automovel e de %.2f L", consumoMedio);

    return 0;
}