#include <stdio.h>
#include <string.h>

#include "main.h"

// FUNÇÃO PARA VERIFICAR A EXISTÊNCIA DA MASCARA 
void maskCheck(short int *mask, char flagString[]) {
    unsigned short flagMaskN = strtol(flagString, NULL, 10);

    if(flagMaskN && (flagMaskN % 2) > 0)
        *mask = flagMaskN;
    else {
        hError("> The mask value must be an odd number", 1);
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