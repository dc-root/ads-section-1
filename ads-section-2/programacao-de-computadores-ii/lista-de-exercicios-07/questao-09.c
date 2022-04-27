#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#if defined(_WIN32) || defined(_WIN64)
    void limpar() { return system("cls"); }
#else defined(__linux__) || defined(__unix__)
    void limpar() { return system("clear"); }
#endif

#define SIZE_STRING 50

char string[SIZE_STRING], stringView[SIZE_STRING]; // variaveis globais

int main() {
     int count=0;
     _Bool verify(char *character, char string[]);

     printf("reserver uma palavra: ");
     fgets(string, SIZE_STRING, stdin);
     
     size_t tm = strlen(string) -1; // tamanho da palavra digitada

     for(int i=0; i < tm; i++) stringView[i] = '*'; // inicializando a variavel stringView com os caracteres '*'

     // verificações / coleta das letras para comparações
     for (;count<5;) {
         limpar();
         printf("\n\t%s\n", stringView);

         char letter;
         printf("\n> você tem %d tentativas\n\nDigite uma letra: ", 5-count);
         scanf("%c%*c", &letter);

        // condicional ternario verificando se a verificação do caracter com a palavra retorna verdadeiro ou falso
         verify(&letter, string) ? NULL : count++;

         // Verificando se a palavra esta completa
         if(strncmp(string, stringView, tm) == 0) {
            limpar();
            printf("\n\n> PARABÉNS, VOCÊ ACERTOU! :)\n\n");
            break;
         } else if (count == 5 && strncmp(string, stringView, tm) != 0) {
             limpar();
             printf("\n\n> OPS! NÃO FOI DESTA VEZ! :(\n\n");
             break;
         }
     }

     return 0;
}

// Função para verificar se a letra digitada está cntida na palavra, retornando true(1) ou false(0)
_Bool verify(char *character, char string[]) {
    size_t tm_string = strlen(string) -1;

    int returnN=0;

    for(int i=0; i<tm_string; i++) {
        if (toupper(*character) == toupper(string[i])) {
            stringView[i] = *character;
            returnN = 1;
        }
    }

    return returnN;
}
