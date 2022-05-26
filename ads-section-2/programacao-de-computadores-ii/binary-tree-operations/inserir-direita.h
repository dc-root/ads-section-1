#include <stdio.h>
#include <stdlib.h>

#include "main.h"

// procedimento para inserir um elemento na subárvore direita
void inserirDireita(No *no, int valor) {
    if(no->direita == NULL) {
        No *novo = (No*)malloc(sizeof(No));
        novo->conteudo = valor;
        novo->esquerda = NULL;
        novo->direita = NULL;
        no->direita = novo;
    } else {
        if(valor > no->direita->conteudo)
            inserirDireita(no->direita, valor);
        if(valor < no->direita->conteudo)
            inserirEsquerda(no->direita, valor);
    }
}
