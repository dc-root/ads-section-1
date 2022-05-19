#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

#include "main.h"
#include "cmdHandlingFunction.h"
#include "fileAccessFunction.h"
#include "imgProcessFunction.h"

/*
 *   pgmmediana     -m N -i input
 *   pgmmediana     --> nome do executavel.
 *   -m             --> O tamanho da máscara é um inteiro positivo ímpar, caso não seja informado, o valor default é 3, para uma máscara de 3×3 pixels.
 *   -i             --> Imagem de imput(a imagem a ser modificada).
*/

int main(int argc, char *argv[]) {
    FILE *pgmInput;
    tPPGM pontTypeStructPGM = calloc(1, sizeof(tPGM));

    // Leitura do arquivo
    openAndVerifyFile(&pgmInput, (argv[2] ? argv[2] : argv[1]), "r");
    
    unsigned short int mask=0;
    maskCheck(&mask, (argv[2] ? argv[1] : "3"));

    // Lendo cada elemento do cabeçalho do arquivo
    fscanf(pgmInput, "%s %hd %hd %hd",
           pontTypeStructPGM->type,
           &pontTypeStructPGM->column,
           &pontTypeStructPGM->line,
           &pontTypeStructPGM->colorVariance
    );

    // Lendo o corpo do arquivo (matriz)
    unsigned short int matrizColorGrid[pontTypeStructPGM->line][pontTypeStructPGM->column]; // matriz do arquivo de input

    for(int i=0; i<pontTypeStructPGM->line; i++) {
        for(int j=0; j<pontTypeStructPGM->column; j++) {
            fscanf(pgmInput, "%hd", &matrizColorGrid[i][j]);
        }
    }

    fclose(pgmInput);

    // validações e formatações necessárias para o nome do arquivo de saida(output_3x3_filename.pgm) | ARQUIVO A PARTE (fileAccessFunction.h)
    char *outputFileName = formatName((argv[2] ? argv[2] : argv[1]), mask);

    // Novo arquivo de saida
    FILE *pgmOutput;
    openAndVerifyFile(&pgmOutput, outputFileName, "w");

    // Escrevendo cada elemento do cabeçalho no arquivo
    fprintf(pgmInput, "%s\n%hd %hd\n%hd\n",
            pontTypeStructPGM->type,
            pontTypeStructPGM->column,
            pontTypeStructPGM->line,
            pontTypeStructPGM->colorVariance
    );
    

    // Aplicando o filtro | ARQUIVO A PARTE (imgProcessFunction.h)
    ImageProcessFunction(pontTypeStructPGM->line,
                         pontTypeStructPGM->column,
                         matrizColorGrid,
                         mask
    );

    // Escrevendo o corpo do arquivo (matriz) output
    for(int i=0; i<pontTypeStructPGM->line; i++) {
        for(int j=0; j<pontTypeStructPGM->column; j++) {
            fprintf(pgmOutput, "%hd ", matrizColorGrid[i][j]);

        } fprintf(pgmOutput, "\n");
    }

    free(outputFileName);
    free(pontTypeStructPGM);
    
    fclose(pgmOutput);
    return 0;
}