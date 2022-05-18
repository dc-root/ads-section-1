#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

// DEFININDO TIPOS

// type pgm
typedef struct {
    char type[3];
    short int line, column, colorVariance;
} tPGM, *tPPGM;

// PROTOTIPO DAS FUNÇÕES
void verifyTypeFileAndAddSegmatation(FILE **filePGM, unsigned short int *matriz[], tPPGM pgm);

void maskCheck(short int *mask, char flagString[]);
void hError( char messageError[], _Bool man);

char * formatName(char filePath[], int mask);
void openAndVerifyFile(FILE **filePGM, char filePath[], char operation[]);

int toCompare(const void *p1, const void *p2);


#endif