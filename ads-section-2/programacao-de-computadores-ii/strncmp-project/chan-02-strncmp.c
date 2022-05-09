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

    // Coletando o tamanho do prefixo a ser comparado
    size_t size_prefix = strlen(prefixName) -1;

    // Lendo sequência de nomes do arquivo
    while(fgets(stringName, SIZE_STRING_NAME, fileNames) != NULL) {
	size_t size_string = strlen(stringName) -1;

        // Com a utilização da função strncmp() comparo a string nome com o string do prefixo delimitando pelo tamanho do prefixo
        if (strncmp(prefixName, stringName, size_prefix) == 0) {
	    int i=0, j=0;

	    while(j<size_string) {
	    	while(i<size_prefix) {
			printf("\033[1;35m%c\033[0m", prefixName[i]);
			i++;
			j=i;
	    	}
		printf("%c", stringName[j]);
		j++;
	    }
	    printf("\n");
            count++;
        } else;
    }

    // Verifcação caso nenhum prefixo seja encontrado
    if(!count) printf("\n\nNenhum nome encontrado! :(\n\n");

    fclose(fileNames);

    return 0;
}
