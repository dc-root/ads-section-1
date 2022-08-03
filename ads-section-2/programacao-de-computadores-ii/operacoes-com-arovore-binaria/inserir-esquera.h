#include <stdio.h>
#include <stdlib.h>

#include "main.h"

// procedimento para inserir um elemento na subárvore esquerda
void inserirEsquerda(No *no, int valor) {
    if(no->esquerda == NULL) {
        No *novo = (No*)malloc(sizeof(No));
        novo->conteudo = valor;
        novo->esquerda = NULL;
        novo->direita = NULL;
        no->esquerda = novo;
    } else {
        if(valor < no->esquerda->conteudo)
            inserirEsquerda(no->esquerda, valor);
        if(valor > no->esquerda->conteudo)
            inserirDireita(no->esquerda, valor);
    }
}