#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE_STRING_NAME 100

int main (int argc, char *argv[]) {
    FILE* fileNames = fopen("./ListNames.txt", "r");

    unsigned short count=0;
    char stringName[SIZE_STRING_NAME];
    char prefixName[SIZE_STRING_NAME];

    if (fileNames == NULL) {
        perror("Falha ao abrir o arquivo!");
        exit(1);
    }

    // Lendo o prefixo do nome a ser pesquisado
    printf("Pesquise por um nome: ");
    fgets(prefixName, SIZE_STRING_NAME, stdin);
    printf("\n");

    // Verifica o  tamanho do prefixo a ser comparado
    size_t size_prefix = strlen(prefixName) -1;

    // Lendo sequência de nomes do arquivo
    while(fgets(stringName, SIZE_STRING_NAME, fileNames) != NULL) {
        // Com a utilização da função strncmp() comparo a string nome com o string do prefixo
        // Delimitando pelo tamanho do prefixo

        

        if (strncmp(prefixName, stringName, size_prefix) == 0) {
            printf("%s", stringName);
            count++;
        } else;
    }

    // Verifcação caso nenhum prefixo seja encontrado
    if(!count) printf("\n\nNenhum nome encontrado! :(\n\n");

    fclose(fileNames);

    return 0;
}