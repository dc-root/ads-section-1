#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int line, column, size;
} tPGM;

int main(int argc, char *argv[]) {
    char tipo[2];

    FILE *pgmInput, *pgmOutput;
    
    if(!(pgmInput = fopen(argv[1], "r"))) {
        perror("\033[1;31m> Erro ao abrir o arquivo!\033[0m");
        exit(1);
    }

    // Lendo cada elemento do arquiva da imagem
    fscanf(pgmInput, "%s", tipo);
    printf("%s\n", tipo);

    fscanf(pgmInput, "%d", &line);
    fscanf(pgmInput, "%d", &column);
    fscanf(pgmInput, "%d", &size);

    printf("%d ", line);
    printf("%d\n", column);
    printf("%d\n", size);



    return 0;
} 