#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/*
    Procedimento para inserir um elemento na árvore
    faz uso dos dois procedimentos anteriores,
    inserindo à esquerda ou à direita
*/
void inserir(ArvB *arv, int valor) {
    if(arv->raiz == NULL) {
        No *novo = (No*)malloc(sizeof(No));
        novo->conteudo = valor;
        novo->esquerda = NULL;
        novo->direita = NULL;
        arv->raiz = novo;
    } else {
        if(valor < arv->raiz->conteudo)
            inserirEsquerda(arv->raiz, valor);
        if(valor > arv->raiz->conteudo)
            inserirDireita(arv->raiz, valor);
    }
}