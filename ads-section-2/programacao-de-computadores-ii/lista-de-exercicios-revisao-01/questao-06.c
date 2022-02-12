#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "portuguese");

    //  6 - Leia dois valores para as variáveis A e B e efetue as trocas dos valores de forma que a variável A passe a possuir o valor da variável B e a variável B passe a possuir o valor da variável A. Apresentar os valores trocados.
    
    int A, B, reserva;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    reserva = A;
    A = B;
    B = reserva;

    printf("Valor de A: %d\n", A);
    printf("Valor de B: %d", B);

    return 0;
}