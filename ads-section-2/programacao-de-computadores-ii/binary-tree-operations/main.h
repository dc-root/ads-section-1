#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

// estrututa nó
typedef struct no {
    int conteudo;
    struct no *esquerda, *direita;
} No;

// estrutura árvore com um ponteiro para um nó
typedef struct {
    No *raiz;
    int tam;
} ArvB;

void inserirDireita(No *no, int valor);
void inserirEsquerda(No *no, int valor);

void inserir(ArvB *arv, int valor);

/*  nova versão para a inserção, mais resumida
    perceba que agora é uma função
*/
No* inserirNovaVersao(No *raiz, int valor);
// função que retorna o tamanho de uma árvore
int tamanho(No *raiz);
// função para buscar um elemento na árvore
int buscar(No *raiz, int chave);
/*  faz a impressão da árvore em ordem crescente
    esquerda - raiz - direita
*/
void imprimir(No *raiz);
// função para a remoção de um nó
No* remover(No *raiz, int chave);

int buscar(No *raiz, int chave);

int tamanho(No *raiz);

#endif