#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// pgmmediana -m N -i input
/*
    pgmmediana --> nome do executavel.
    -m --> O tamanho da máscara é um inteiro positivo ímpar, caso não seja informado, o valor default é 3, para uma máscara de 3×3 pixels.
    -i -->  Imagem de imput(a imagem a ser modificada).
*/

// STRUCT PGM
typedef struct {
    char type[3];
    short int line, column, colorVariance;
} tPGM, *tPPGM;

// DECLARANDO AS FUNÇÕES
void openEndVerifyFile(FILE **filePGM, char filePath[], char operation[]);
void hError( char messageError[], _Bool man);

int main(int argc, char *argv[]) {
    FILE *pgmInput;
    tPPGM pontTypeStructPGM = calloc(1, sizeof(tPGM));

    unsigned short int mask=3; // mascara padrão
    unsigned short int matrizColorGrid[pontTypeStructPGM->line][pontTypeStructPGM->column]; // matriz

    // Leitura do arquivo
    openEndVerifyFile(&pgmInput, (argv[2] ? argv[2] : argv[1]), "r");

    // Verificação da mascara
    unsigned short flagMaskN = strtol(argv[1], NULL, 10);
    if(argv[2] && (flagMaskN > 0) && (flagMaskN % 2) > 0)
        mask = flagMaskN;
    else if (!argv[2]);
    else {
        hError("> The mask value must be an odd number", 1);
        exit(1);
    }

    unsigned short int matrizScanColorGrid[mask][mask];

    // Lendo cada elemento do cabeçalho do arquivo
    fscanf(pgmInput, "%s %hd %hd %hd",
            pontTypeStructPGM->type,
            &pontTypeStructPGM->column,
            &pontTypeStructPGM->line,
            &pontTypeStructPGM->colorVariance
    );

    // Lendo o corpo do arquivo (matriz)
    for(int i=0; i<pontTypeStructPGM->line; i++) {
        for(int j=0; j<pontTypeStructPGM->column; j++) {
            fscanf(pgmInput, "%hd", &matrizColorGrid[i][j]);
            printf("%hd  ", matrizColorGrid[i][j]);

        } fscanf(pgmInput, "\n");
        printf("\n");
    }

    fclose(pgmInput);
    
    // validações e formatações necessárias para o nome do arquivo de saida(fileNameOutput)
    char outputFileName[] = "output_img.pgm";
    // char prefix[] = "output-";
    // char *fileName;
    // fileName = strstr((argv[2] ? argv[2] : argv[1]), "/") != NULL ?
    //                     strrchr((argv[2] ? argv[2] : argv[1]), '/')+1
    //                     :
    //                     (argv[2] ? argv[2] : argv[1]);
    // strcat(prefix, fileName);
    // size_t tm = strlen(prefix);
    // printf("\nsize prefix: %d\n", tm);
    // char outputFileName[tm];
    // strcpy(outputFileName, prefix);

    // Novo arquivo de saida
    FILE *pgmOutput;
    openEndVerifyFile(&pgmOutput, outputFileName, "w");

    // Escrevendo cada elemento do cabeçalho no arquivo
    fprintf(pgmInput, "%s\n%hd %hd\n%hd\n",
            pontTypeStructPGM->type,
            pontTypeStructPGM->column,
            pontTypeStructPGM->line,
            pontTypeStructPGM->colorVariance);

    // Escrevendo o corpo do arquivo (matriz)
    for(int i=0; i<pontTypeStructPGM->line; i++) {
        for(int j=0; j<pontTypeStructPGM->column; j++) {
            fprintf(pgmOutput, "%hd ", matrizColorGrid[i][j]);

        } fprintf(pgmOutput, "\n");
    }

    // logica do calculo da mediana deve ser armazenado em aruivo de biblioteca a parte
    // [...]

    free(pontTypeStructPGM);
    return 0;
}

// DEFININDO FUNÇÃO PARA VERIFICAÇÃO E ABERTURA DO ARQUIVO
void openEndVerifyFile(FILE **filePGM, char filePath[], char operation[]) {
    if(!(*filePGM = fopen(filePath, operation))) {

        hError("> Error opening file!",  1);
        exit(1);
    }
}

// DEFININDO FUNÇÃO PARA APRESENTAÇÃO DE ERROS + MANUAL DE UTILIZAÇÃO
void hError(char messageError[], _Bool man) {
    // Mensagem de erro
    printf("\033[0;31m%s\033[0m\n", messageError);

    if(man) {
        // Manual
        printf("\n\033[0;33mUsage:  pgmmedian  -m N -i input\n\n\033[0m");
        printf("\033[0;33mwithout mask:\tpgmmedian  [FILE-INPUT]\n\033[0m");
        printf("\033[0;33mwith mask:\tpgmmedian  [ODD-NUMBER-MASK] [FILE-INPUT]\n\033[0m");
    } else;
};