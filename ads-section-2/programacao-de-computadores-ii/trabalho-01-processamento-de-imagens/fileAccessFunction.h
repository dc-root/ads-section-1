#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

#include "main.h"

char * formatName(char filePath[], int mask) {
    char *outputFileName = malloc(sizeof(char) *100);
    strcpy(outputFileName, "output");

    char dimensao[100];
    sprintf(dimensao, "_%dx%d_", mask, mask); // 3x3_nomedo.pgm
    strcat(outputFileName, dimensao);

    char *fileName;
    fileName = strstr(filePath, "/") != NULL ?
                strrchr(filePath, '/')+1
                : filePath;
    strcat(outputFileName, fileName);

    return outputFileName;
}

// DEFININDO FUNÇÃO PARA VERIFICAÇÃO E ABERTURA DO ARQUIVO
void openAndVerifyFile(FILE **filePGM, char filePath[], char operation[]) {
    if(!(*filePGM = fopen(filePath, operation))) {

        hError("> Error opening file!",  1);
        exit(1);
    }
}