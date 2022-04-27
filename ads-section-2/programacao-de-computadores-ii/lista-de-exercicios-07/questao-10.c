#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE* fp;
    char *phrase, character;
    int countWord=0;

    if ((fp = fopen("arquivo.txt", "r")) == NULL) {
        perror("Error opening file!");
        return 1;
    }

    do {
        character = fgetc(fp);
        if(character == ' ') {
            countWord++;
        }

    } while (character != EOF);

    printf("\nA frase contem %d palavras", countWord);

    return 0;
}