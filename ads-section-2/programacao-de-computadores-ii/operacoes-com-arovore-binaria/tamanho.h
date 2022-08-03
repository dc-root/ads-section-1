#include <stdio.h>
#include <stdlib.h>

#include "main.h"

// função que retorna o tamanho de uma árvore
int tamanho(No *raiz) {
    if(raiz == NULL)
        return 0;
    else
        return 1 + tamanho(raiz->esquerda) + tamanho(raiz->direita);
}