#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

#include "main.h"

char * formatName(char filePath[], int mask) {
    char *outputFileName = (char*)malloc(strlen(filePath));
    sprintf(outputFileName, "output_%dx%d_", mask, mask); // output_3x3_

    filePath = strstr(filePath, "/") != NULL ?
                strrchr(filePath, '/')+1
                : filePath;
    strcat(outputFileName, filePath); // output_3x3_file 

    return outputFileName;
}

// DEFININDO FUNÇÃO PARA VERIFICAÇÃO E ABERTURA DO ARQUIVO
void openAndVerifyFile(FILE **filePGM, char filePath[], char *operation) {
    if(!(*filePGM = fopen(filePath, operation))) {

        hError("> Error opening file!",  1);
        exit(1);
    }
}
