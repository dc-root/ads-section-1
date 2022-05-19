#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

// DEFININDO TIPOS

// type pgm
typedef struct {
    char type[3];
    int line, column, colorVariance;
} tPGM, *tPPGM;

// PROTOTIPO DAS FUNÇÕES

// verificação do tipo do arquivo (P2 ou P5) para dar seguimento a aplicação do filtro
void verifyTypeFileAndAddSegmatation(FILE **filePGM, unsigned short int *matriz[], tPPGM pgm);

// verificação da mascara
void maskCheck(short int *mask, char flagString[]);
// função para mesagem de erro
void hError( char messageError[], _Bool man);

// formatar o nome o arquivo
char * formatName(char filePath[], int mask);

// Abertura e verificação de um arquivo
void openAndVerifyFile(FILE **filePGM, char filePath[], char operation[]);

void ImageProcessFunction(const int line, const int column, unsigned short int matriz[][column], short int mask);

// Função de comparação, passada a qsort() na ordenação
int toCompare(const void *p1, const void *p2);

#endif