#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

#include "main.h"

// #include "ImageProcessingFunction.h"

/*
    pgmmediana -m N -i input

    pgmmediana  --> nome do executavel.
    -m          --> O tamanho da máscara é um inteiro positivo ímpar, caso não seja informado, o valor default é 3, para uma máscara de 3×3 pixels.
    -i          --> Imagem de imput(a imagem a ser modificada).
*/

int main(int argc, char *argv[]) {
    FILE *pgmInput;
    tPPGM pontTypeStructPGM = calloc(1, sizeof(tPGM));

    // Leitura do arquivo
    openEndVerifyFile(&pgmInput, (argv[2] ? argv[2] : argv[1]), "r");

    unsigned short int mask=3; // mascara padrão para calculo da mediana 
 
    // Verificação da mascara | ARQUIVO A PARTE (cmdHandlingFunction.c)
    unsigned short flagMaskN = strtol(argv[1], NULL, 10);
    if(argv[2] && (flagMaskN > 0) && (flagMaskN % 2) > 0)
        mask = flagMaskN;
    else if (!argv[2]);
    else {
        hError("> The mask value must be an odd number", 1);
        exit(1);
    }

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
    
    // validações e formatações necessárias para o nome do arquivo de saida(fileNameOutput) | ARQUIVO A PARTE (fileAccessFunction.c)
    char outputFileName[100] = "output";

    char dimensao[100];
    sprintf(dimensao, "_%dx%d_", mask, mask);
    strcat(outputFileName, dimensao);

    char *fileName;
    fileName = strstr((argv[2] ? argv[2] : argv[1]), "/") != NULL ?
                        strrchr((argv[2] ? argv[2] : argv[1]), '/')+1
                        :
                        (argv[2] ? argv[2] : argv[1]);
    strcat(outputFileName, fileName);

    // Novo arquivo de saida
    FILE *pgmOutput;
    openEndVerifyFile(&pgmOutput, outputFileName, "w");

    // Escrevendo cada elemento do cabeçalho no arquivo
    fprintf(pgmInput, "%s\n%hd %hd\n%hd\n",
            pontTypeStructPGM->type,
            pontTypeStructPGM->column,
            pontTypeStructPGM->line,
            pontTypeStructPGM->colorVariance
    );
    

    int matrizScanning[mask][mask];
	
	int maskCalc = (int) (mask/2);

	// percorrendo a matriz 
	for (int a=0; a < (pontTypeStructPGM->line - (2 * maskCalc)); a++) {
		for (int b=0; b < (pontTypeStructPGM->column - (2 * maskCalc)); b++) {
			
			//  bloco com o valor a ser alterado
			for (int i=a; i<mask+a; i++) {
				for(int j=b; j<mask+b; j++) {
					matrizScanning[i-a][j-b] = matrizColorGrid[i][j];
				}
			}

			// função para ordenar os valores da matriz de escaneamento
			qsort(matrizScanning, (mask * mask), sizeof(int), toCompare);
			
			// setando o valor da matriz para a mediana dos valores ordenados
			matrizColorGrid[a + (mask/2)][b + (mask/2)] = matrizScanning[(mask/2)][(mask/2)];
		}
	}

    // Escrevendo o corpo do arquivo (matriz) output
    for(int i=0; i<pontTypeStructPGM->line; i++) {
        for(int j=0; j<pontTypeStructPGM->column; j++) {
            fprintf(pgmOutput, "%hd ", matrizColorGrid[i][j]);

        } fprintf(pgmOutput, "\n");
    }

    fclose(pgmOutput);

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

int toCompare(const void *p1, const void *p2) {
    if (*(int*)p1 > *(int*)p2)
	    return 1;
    else if (*(int*)p1 < *(int*)p2)
        return -1;
    return 0;
}