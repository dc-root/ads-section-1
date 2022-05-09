#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// PILHA ESTÁTICA - VETORES

#define MAX 15

typedef struct {
	int elements[MAX];

	int top;
} typeStack, *PontTypeStack;


// CRIAR PILHA
typeStack * criar_pilha() {
	PontTypeStack pontPilha = calloc(1, sizeof(typeStack));
	if(pontPilha == NULL)
		exit(1);

	pontPilha->top = 0;
	return pontPilha;
}

// MENSURAR TAMANHO DA PILHA
int SizeStack(PontTypeStack pP){
	return pP->top;
}

// EMPILHAR ELEMENTO
void StackUP(PontTypeStack pP, int value) {
    if (pP->top != MAX) { // Implementado a função a verificação caso chegue ao limite da pilha ✅

        int i = pP->top;
        pP->elements[i] = value;
        pP->top = pP->top + 1;
        printf("\n\033[0;32mElemento %d, foi empilhado com sucesso!\033[0m\n", value);
    } else {
        perror("\n\033[0;31m > Error adding element, check queue size \033[0m\n\n"); // messagem de erro caso a pilha estiever cheia ✅
    }
}

// DESEMPILHAR ELEMENTO
int Unstack(PontTypeStack pP) { 
    if (pP->top == 0) { // Verificação para quando a pilha estiver vazia com a mesagem de alerta ✅
        perror("\n\033[1;32m > Warning, no, the stack doesn't have any more elements to be removed!\033[0m\n");
        return 0;
    }

    pP->top = pP->top - 1;
    short int i = pP->top;
    return pP->elements[i];
}

// MOSTRAR ELEMENTO EMPILHADOS
int ShowElements(PontTypeStack pP) { // função para mostrar os elementos da pilha ✅
    size_t tm = SizeStack(pP);

    printf("\n\033[0;35m⬇ inicio da pilha ⬇\033[0m\n\n");
    for(int i=0; i < tm; i++) {
        printf("\033[1;35m%d\033[0m\n", pP->elements[i]);
    }
    printf("\n\033[0;35m⬆ final da pilha ⬆\033[0m\n"); 

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

  PontTypeStack pointTypeStack = criar_pilha();


  do {
      printf("\n------- PILHA ESTÁTICA -------\n");

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
            StackUP(pointTypeStack, elementValue);
            break;
        case 2:
            elementValue = Unstack(pointTypeStack);
            if (elementValue)
                printf("\n\033[0;32mO elemento %d foi removido da pilha com sucesso!\033[0m\n", elementValue);
            break;
        case 3:
            elementValue = SizeStack(pointTypeStack);
            printf("\n\033[0;32mNo momento a pilha contem %d elementos!\033[0m\n", elementValue);
            break;
        case 4:
            ShowElements(pointTypeStack);
            break;
      }

  } while(option != 5);

  UndoStack(pointTypeStack);
  return 0;
}
