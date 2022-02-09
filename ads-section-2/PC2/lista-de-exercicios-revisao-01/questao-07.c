#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "portuguese");

    //  7 - Faça um algoritmo que leia a temperatura em graus Celsius e apresente a temperatura convertida em graus Fahrenheit. A fórmula de conversão é: F=(9*C+160)/5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

    int gCelsius,  gFahrenheit;

    printf("Digite a temperatura em graus celsius: ");
    scanf("%d", &gCelsius);

    gFahrenheit = (9*gCelsius+160) / 5;

    printf("A temperatura em faherenheit e: %d", gFahrenheit);
    
    return 0;
}