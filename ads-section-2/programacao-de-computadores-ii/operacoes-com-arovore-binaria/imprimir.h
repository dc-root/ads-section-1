#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/*  faz a impressão da árvore em ordem crescente
    esquerda - raiz - direita
*/
void imprimir(No *raiz) {
    if(raiz != NULL) {
        imprimir(raiz->esquerda);
        printf("%d ", raiz->conteudo);
        imprimir(raiz->direita);
    }
}
