#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

// DEFININDO TIPOS

// type pgm
typedef struct {
    char type[3];
    short int line, column, colorVariance;
} tPGM, *tPPGM;

// DECLARAÇÃO DAS FUNÇÕES

// Abertura e verificação de um arquivo
void openEndVerifyFile(FILE **filePGM, char filePath[], char operation[]);

// verificação do tipo do arquivo (P2 ou P5) para aplicar o filtro correspondente
void setOperator(tPPGM pgm, char *operation, char setOperation[]);

// função para mesagens de erro
void hError( char messageError[], _Bool man);

// verificação da mascara
void maskCheck(short int *mask, char flagString[]);

// Função para aplicar o filtro
void ImageProcessingFunction(const short int line, const short int column, unsigned short int matriz[][column], unsigned short mask);

// Função de comparação, passada a qsort() na ordenação
int toCompare(const void *p1, const void *p2);

// formatar o nome o arquivo
char * formatName(char filePath[], int mask);

#endif