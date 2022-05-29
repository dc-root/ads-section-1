#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define lin 50
#define col 10

typedef struct {
    char type[3];
    int line, column, colorVariance;
} tStructData;

int main() {
    FILE *inputFp;
    tStructData sD;

    // if(!(inputFp = fopen("binario.bin", "w"))) {
    //     perror("\n> Erro a abrir o arquivo\n");
    //     exit(1);
    // }
    // printf("Type: ");
    // fgets(sD.type, 100, stdin);
    sD.line = lin;
    sD.column = col;
    // printf("Color variance: ");
    // fscanf(stdin, "%d%*c", &sD.colorVariance);
    short unsigned matriz[sD.line][sD.column];
    // for(int i=0; i<lin; i++) {
    //     for(int j=0; j<col; j++) {
    //         matriz[i][j] = rand() % sD.colorVariance;
    //     }
    // }
    // fprintf(inputFp, "%s%d% d\n%d\n",
    //         sD.type,
    //         sD.line,
    //         sD.column,
    //         sD.colorVariance
    //     );
    // fwrite(&matriz, sizeof(matriz), 1, inputFp);
    // fclose(inputFp);

    //#################################################################################

    if(!(inputFp = fopen("binario.bin", "r"))) {
        perror("\n> Erro a abrir o arquivo\n");
        exit(1);
    }
    
    fscanf(inputFp, "%s", sD.type);

    if(strcmp(sD.type, "P5") == 0) {
        fscanf(inputFp, "%d%d%d",
            &sD.line,
            &sD.column,
            &sD.colorVariance
        );

        fclose(inputFp);

        if(!(inputFp = fopen("binario.bin", "rb"))) {
            perror("\n> Erro a abrir o arquivo\n");
            exit(1);
        }
        fseek(inputFp, sizeof(sD), SEEK_CUR);
        fread(&matriz, sizeof(matriz), 1, inputFp);
     }

    printf("TYPE: %s\n", sD.type);
    printf("LIN x COL: %dx%d\n", sD.line, sD.column);
    printf("COLOR VARIANTE: %d\n", sD.colorVariance);

    for(int i=0; i<sD.line; i++) {
        for(int j=0; j<sD.column; j++) {
            printf("%d\t", matriz[i][j]);
        } printf("\n");
    }
    fclose(inputFp);

    FILE *outputFp;
    if(!(outputFp = fopen("binario.txt", "w"))) {
        perror("\n> Erro a abrir o arquivo\n");
        exit(1);
    }

    if(strcmp(sD.type, "P5") == 0) {
        fprintf(outputFp, "%s\n%d %d\n%d",
            sD.type,
            sD.line,
            sD.column,
            sD.colorVariance
        );

        fwrite(&matriz, sizeof(matriz), 1, outputFp);
    }
    return 0;
}