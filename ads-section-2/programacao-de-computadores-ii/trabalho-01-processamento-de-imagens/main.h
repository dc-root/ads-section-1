#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

// DEFININDO TIPOS

// type pgm
typedef struct {
    char type[3];
    short int line, column, colorVariance;
} tPGM, *tPPGM;

// DECLARAÇÃO DAS FUNÇÕES
void verifyTypeFile(FILE **filePGM, unsigned short int *matriz[], tPPGM pgm);

void openEndVerifyFile(FILE **filePGM, char filePath[], char operation[]);
void hError( char messageError[], _Bool man);
int toCompare(const void *p1, const void *p2);

#endif