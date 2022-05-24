#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct {
    int inscricao;
    char nome[30];
} tCandidato;

typedef struct no {
    tCandidato candidado;
    struct no *proximo;
} tNo, *pontLista;

void imprime(pontLista lista){
    while (lista){
        printf("%d - %s\n", lista->candidado.inscricao, lista->candidado.nome);
        lista = lista->proximo;
    }
}

// void insere(pontLista pLista, char *novaInscricao, char *novoNome, char *proximoNome) {
//     pontLista noProcurado=NULL, noNovo;
//     while(pLista && !noProcurado ){
//         if(!strcmp(pLista->candidado.nome, proximoNome)){
//             noProcurado=pLista;            
//         }
//         else    
//             pLista=pLista->proximo;
//     }
//     if(noProcurado)
//         noNovo = malloc(sizeof(tNo));
//     if(noNovo){
//         strcpy(noNovo->candidado.inscricao, novaInscricao);
//         strcpy(noNovo->candidado.nome, novoNome);
//         noNovo->proximo = noProcurado->proximo;
//         noProcurado->proximo = noNovo;
//     }
// }

void insereOrdenado(pontLista pLista, int inscricao, char *nome) { // Função para iserção ddos NOs de forma ordenada ✅
    pontLista aux, novoNo = malloc(sizeof(tNo));

    if(novoNo) {
        novoNo->candidado.inscricao = inscricao;
        strcpy(novoNo->candidado.nome, nome);

        if(!pLista) {
            novoNo->proximo = NULL;
            pLista = novoNo;
        } else if(novoNo->candidado.inscricao < pLista->candidado.inscricao) {
            novoNo->proximo = pLista;
            pLista = novoNo;
        } else {
            aux = pLista;
            while(aux->proximo && novoNo->candidado.inscricao > aux->proximo->candidado.inscricao)
                aux = aux->proximo;
            novoNo->proximo = aux->proximo;
            aux->proximo = novoNo;
        }
    }
}

pontLista removendoNO(pontLista pLista, int inscricao) { // Função para remoção ✅
    pontLista aux, remover = NULL;

    if(pLista) {
        if(pLista->candidado.inscricao == inscricao){
            remover = pLista;
            pLista = remover->proximo;
        } else {
           aux = pLista;
           printf("\naux->candidado.inscricao(%d) != inscricao(%d) ? %d\n", aux->candidado.inscricao, inscricao, (aux->candidado.inscricao != inscricao));
           while (aux->proximo && aux->candidado.inscricao != inscricao)
               aux = aux->proximo;
            if(aux->proximo){
                remover = aux->proximo;
                aux->proximo = remover->proximo;
            }
        }
    }

    return remover;
}

int main (int argc, char *argv[]){
    pontLista pLista, pRemoverNo;
    pLista = malloc(sizeof(tNo));

    char nome[30];
    int inscricao;

    enum option {inserir=1, remover, sair} optionN;

    do {
        printf("\n1. inserir\n2. remover\n3. sair\nEscolha uma opcao[1-3]: ");
        scanf("%d", &optionN);

        switch(optionN) {
            case inserir:
                printf("\n\nnumero da inscricao: ");
                scanf("%d", &inscricao);

                printf("Nome: ");
                scanf("%s", nome);

                insereOrdenado(pLista, inscricao, nome);
                break;
            case remover:
                printf("\n\nNumero da inscricao do cadastro a ser removido: ");
                scanf("%d", &inscricao);

                pRemoverNo = removendoNO(pLista, inscricao);
                if(pRemoverNo)
                    free(pRemoverNo);
                break;
            case sair:
                exit(1);
        }

        printf("\nlista atualizada: \n");
        imprime(pLista);

    } while(optionN != sair);

    // insere(pLista, inscricao, nome, depoisNome);
    
    return 0;
}