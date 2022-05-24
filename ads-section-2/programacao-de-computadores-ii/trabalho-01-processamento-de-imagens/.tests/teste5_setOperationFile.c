#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define lin 50
#define col 10

typedef struct {
    char name[100];
    char cpf[100];

    short unsigned int age;
} tStructData;

int main() {
    FILE *inputFp;
    tStructData sD;

    char *Fphrase = malloc(sizeof(char) * 1000);
    short unsigned matriz[lin][col];

    char *type = malloc(sizeof(char) *3);
    char *operator = malloc(sizeof(char) *3);

    // if(!(inputFp = fopen("binario.bin", "w"))) {
    //     perror("\n> Erro a abrir o arquivo\n");
    //     exit(1);
    // }
    // printf("Nome: ");
    // fgets(sD.name, 100, stdin);
    // printf("CPF: ");
    // fgets(sD.cpf, 100, stdin);
    // printf("Idade: ");
    // fscanf(stdin, "%hd%*c", &sD.age);
    // printf("Phrase: ");
    // fgets(Fphrase, 1000, stdin);
    // for(int i=0; i<lin; i++) {
    //     for(int j=0; j<col; j++) {
    //         matriz[i][j] = 10 + rand() % 99;
    //     }
    // }
    // fwrite(&sD, sizeof(sD), 1, inputFp);
    // fwrite(Fphrase, sizeof(char), 1000, inputFp);
    // fwrite(&matriz, sizeof(matriz), 1, inputFp);
    // fclose(inputFp);


    if(!(inputFp = fopen("binario.bin", "rb"))) {
        perror("\n> Erro a abrir o arquivo\n");
        exit(1);
    }
    
    fscanf(inputFp, "%s", sD.name);

    if(strcmp(sD.name, "P5") == 0) {
        if(!(inputFp = fopen("binario.bin", "rb"))) {
            perror("\n> Erro a abrir o arquivo\n");
            exit(1);
        }

        fread(&sD, sizeof(sD), 1, inputFp);
        fread(Fphrase, sizeof(char), 1000, inputFp);
        fread(&matriz, sizeof(matriz), 1, inputFp);
     }

    printf("Nome: %s\n", sD.name);
    printf("CPF: %s\n", sD.cpf);
    printf("Idade: %hd\n", sD.age);
    printf("Phrase: %s\n", Fphrase);

    for(int i=0; i<lin; i++) {
        for(int j=0; j<col; j++) {
            printf("%d\t", matriz[i][j]); 
        } printf("\n");
    }

    fclose(inputFp);
    FILE *outputFp;

    if(strcmp(sD.name, "P5") == 0) {
        if(!(outputFp = fopen("binario.txt", "wb"))) {
            perror("\n> Erro a abrir o arquivo\n");
            exit(1);
        }

        fprintf(outputFp, "%s\n%s\n%hd\n%s",
            sD.name,
            sD.cpf,
            sD.age,
            Fphrase
        );

        fwrite(&matriz, sizeof(matriz), 1, outputFp);
    }

    free(type);
    free(operator);
    free(Fphrase);
    return 0;
}