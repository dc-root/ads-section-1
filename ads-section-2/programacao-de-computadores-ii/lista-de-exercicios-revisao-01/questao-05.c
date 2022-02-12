#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "portuguese");

    //  5 - Escreva um algoritmo que leia o nome de um aluno e as notas das três provas que ele obteve no bimestre. No final, informar o nome do aluno e a sua média (aritmética).
    
    char nomeDoAluno[30];
    float prova1, prova2, prova3, media;

    printf("Digite o nome do aluno: ");
    scanf("%s", &nomeDoAluno);

    printf("Digite as três notas obtidas: ");
    scanf("%f%f%f", &prova1, &prova2, &prova3);

    media = prova1 + prova2 + prova3 / 3;

    printf("\nNome: %s\n", nomeDoAluno);
    printf("Media do aluno e de %.2fpts", media);

    return 0;
}