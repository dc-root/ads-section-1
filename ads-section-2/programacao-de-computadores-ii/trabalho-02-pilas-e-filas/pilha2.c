#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// PILHA ESTÁTICA - VETORES

#define MAX 15

typedef struct {
    int elements[MAX],
	*pontVetor,
	countPointVetor;
} typeStack, *PontTypeStack;


// CRIAR PILHA
PontTypeStack CreateStack() {
	PontTypeStack pontStack = calloc(1, sizeof(typeStack));
	if(pontStack == NULL)
		exit(1);

    pontStack->pontVetor = &pontStack->elements[0];
    pontStack->countPointVetor = 0;
	return pontStack;
}

// MENSURAR TAMANHO DA PILHA
int SizeStack(PontTypeStack pP){
	return pP->countPointVetor;
}

// EMPILHAR ELEMENTO
void ToPush(PontTypeStack pP, int value) {
    if (pP->countPointVetor < MAX) { // Implementado a função a verificação caso chegue ao limite da pilha ✅

        pP->pontVetor = &pP->elements[pP->countPointVetor];
        *pP->pontVetor = value;
        pP->pontVetor = pP->pontVetor++;
        pP->countPointVetor++;

        printf("\n\033[0;32mElemento %d, foi empilhado com sucesso!\033[0m\n", value);
    } else {
        perror("\n\033[1;31m > Error adding element, check queue size \033[0m\n\n"); // messagem de erro caso a pilha estiever cheia ✅
    }
}

// DESEMPILHAR ELEMENTO
int ToPop(PontTypeStack pP) {
    if (pP->countPointVetor == 0) { // Verificação para quando a pilha estiver vazia com a mesagem de alerta ✅
        perror("\n\033[1;32m > Warning, no, the stack doesn't have any more elements to be removed!\033[0m\n");
        return 0;
    }

    pP->countPointVetor = pP->countPointVetor - 1;
    short int i = pP->countPointVetor;
    return pP->elements[i];
}

// MOSTRAR ELEMENTO EMPILHADOS
int ShowElements(PontTypeStack pP) { // função para mostrar os elementos da pilha ✅
    size_t tm = SizeStack(pP);

    if(pP->countPointVetor == 0) {
        printf("\n\n\033[0;31mNenhum elemento encontrado!\033[0m\n");
    } else {
        printf("\n\033[0;35m⬇ inicio da pilha ⬇\033[0m\n\n");
        pP->pontVetor = pP;

        for(int i=0; i < tm; i++) {
            printf("\033[0;36m%d\033[0m\n", *pP->pontVetor);
            pP->pontVetor++;
        }
        printf("\n\033[0;35m⬆ final da pilha ⬆\033[0m\n"); 
    }
    
    return 0;
}

//DESTRUIR PILHA
void UndoStack(PontTypeStack pP) {
	free(pP);
}

int main(void) {
  setlocale(LC_ALL, "");

  short option;
  unsigned int elementValue;

  PontTypeStack pointTypeStack = CreateStack();

  do {
      printf("\n----------- PILHAS ------------\n");

      printf("\n 1 - Empilhar elemento");
      printf("\n 2 - Desempilhar elemento");
      printf("\n 3 - Tamanho da pilha");
      printf("\n 4 - Mostrar todos os elementos"); // Implementado opção de mostrar todos os elementos ✅
      printf("\n 5 - Sair");
      printf("\n\nDigite a opção: ");
      scanf("%hd", &option);

      switch(option){
        case 1:
            printf("\n Digite o valor: ");
            scanf("%d", &elementValue);
            ToPush(pointTypeStack, elementValue);
            break;
        case 2:
            elementValue = ToPop(pointTypeStack);
            if (elementValue)
                printf("\n\033[0;32mO elemento %d foi removido da pilha com sucesso!\033[0m\n", elementValue);
            break;
        case 3:
            elementValue = SizeStack(pointTypeStack);
            if(elementValue > 0)
                printf("\n\033[0;32mNo momento a pilha contem %d elementos!\033[0m\n", elementValue);
            else
                printf("\n\n\033[0;31mNenhum elemento encontrado!\033[0m\n");
            break;
        case 4:
            ShowElements(pointTypeStack);
            break;
      }

  } while(option != 5);

  UndoStack(pointTypeStack);
  return 0;
}
