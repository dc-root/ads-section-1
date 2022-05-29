#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "main.h" // Header File
#include "cmdHandlingFunction.h"
#include "fileAccessFunction.h"
#include "imgProcessFunction.h"

// pgmmediana -m N -i input
/*
    pgmmediana --> nome do executavel.
    -m --> O tamanho da máscara é um inteiro positivo ímpar, caso não seja informado, o valor default é 3, para uma máscara de 3×3 pixels.
    -i -->  Imagem de imput(a imagem a ser modificada).
*/

int main(int argc, char *argv[]) {
    FILE *pgmInput;
    tPPGM pontTypeStructPGM = calloc(1, sizeof(tPGM));
    char *operation = malloc(sizeof(char) * 3);

    unsigned short int mask=0;
    maskCheck(&mask, (argv[2] ? argv[1] : "3")); // ARQUIVO A PARTE (cmdHandlingFunction.h)
    
    strcpy(operation, "r");
    openAndVerifyFile(&pgmInput, (argv[2] ? argv[2] : argv[1]), operation);
    fscanf(pgmInput, "%s %hd %hd %hd",
                pontTypeStructPGM->type,
                &pontTypeStructPGM->column,
                &pontTypeStructPGM->line,
                &pontTypeStructPGM->colorVariance
        );

    // Lendo o corpo do arquivo (matriz)
    unsigned short int matrizColorGrid[pontTypeStructPGM->line][pontTypeStructPGM->column]; // matriz do arquivo de input
    
    // IN TESTEs
    if (strcmp(pontTypeStructPGM->type, "P5") == 0) {
        setOperator(pontTypeStructPGM, operation, "rb");
        
        fclose(pgmInput);
        openAndVerifyFile(&pgmInput, (argv[2] ? argv[2] : argv[1]), operation);
        fseek(pgmInput, sizeof(pontTypeStructPGM) * 1, SEEK_CUR);

        // Lendo o corpo do arquivo (matriz)
        fread(&matrizColorGrid, sizeof(matrizColorGrid), 1, pgmInput);
    } else {
        // Lendo o corpo do arquivo (matriz) 
        for(int i=0; i<pontTypeStructPGM->line; i++) {
            for(int j=0; j<pontTypeStructPGM->column; j++) {
                fscanf(pgmInput, "%hd", &matrizColorGrid[i][j]);
            }
        }
    }
    fclose(pgmInput);

    // FINs TESTs
    printf("%s\n%hd %hd\n%hd\n",
            pontTypeStructPGM->type,
            pontTypeStructPGM->column,
            pontTypeStructPGM->line,
            pontTypeStructPGM->colorVariance
    );
    
    // validações e formatações necessárias para o nome do arquivo de saida(fileNameOutput) | ARQUIVO A PARTE (fileAccessFunction.c)
    char *outputFileName = formatName((argv[2] ? argv[2] : argv[1]), mask);

    // Novo arquivo de saida
    FILE *pgmOutput;
    strcpy(operation, "w");
    openAndVerifyFile(&pgmOutput, outputFileName, operation);

    // Escrevendo cada elemento do cabeçalho no arquivo
    fprintf(pgmOutput, "%s\n%hd %hd\n%hd\n",
            pontTypeStructPGM->type,
            pontTypeStructPGM->column,
            pontTypeStructPGM->line,
            pontTypeStructPGM->colorVariance
    );
    
    ImageProcessingFunction(pontTypeStructPGM->line,
                            pontTypeStructPGM->column,
                            matrizColorGrid,
                            mask); // aplicando o filtro na imagem | ARQUIVO A PARTE (imageProcessingFunction.c)

    // Escrevendo o corpo do arquivo (matriz)
    if (strcmp(pontTypeStructPGM->type, "P5") == 0) {

        fwrite(&matrizColorGrid, sizeof(matrizColorGrid), 1, pgmOutput);
        fprintf(pgmOutput, "\0");
    } else {
        for(int i=0; i<pontTypeStructPGM->line; i++) {
            for(int j=0; j<pontTypeStructPGM->column; j++) {
                fprintf(pgmOutput, "%hd ", matrizColorGrid[i][j]);

            } fprintf(pgmOutput, "\n");
        }
    }
    fclose(pgmOutput);

    free(operation);
    free(pontTypeStructPGM);
    free(outputFileName);
    return 0;
}