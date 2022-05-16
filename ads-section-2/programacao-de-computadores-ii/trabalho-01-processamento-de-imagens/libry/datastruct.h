#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char type[3];
    short int line, column, colorVariance;
} tPGM, *tPPGM;

tPPGM pontTypeStructPGM = calloc(1, sizeof(tPGM));