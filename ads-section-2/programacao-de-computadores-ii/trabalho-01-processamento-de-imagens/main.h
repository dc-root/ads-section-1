#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

// DEFININDO TIPOS

// type pgm
typedef struct {
    char type[3];
    short int line, column, colorVariance;
} tPGM, *tPPGM;


// DECLARAÇÃO DAS FUNÇÕES
void openEndVerifyFile(FILE **filePGM, char filePath[], char operation[]);
void hError( char messageError[], _Bool man);

void ImageProcessingFunction(int **matriz, const short line, const short column, unsigned short mask);

#endif