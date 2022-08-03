#include <stdio.h>
#include <stdlib.h>

#include "main.h"

int buscar(No *raiz, int chave) {
    if(!raiz) {
        return 0;
    } else {
        if(raiz->conteudo == chave)
            return 1;
        else {
            if(chave < raiz->conteudo)
                return buscar(raiz->esquerda, chave);
            else
                return buscar(raiz->direita, chave);
        }
    }
}