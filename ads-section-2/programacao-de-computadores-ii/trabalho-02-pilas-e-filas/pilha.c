#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// PILHA ESTÁTICA - VETORES

#define MAX 15

typedef struct{
	int elements[15];
	int top;
} TPilha;


// CRIAR PILHA
TPilha * criar_pilha() {
	TPilha *pontPilha;

	pontPilha = calloc(1, sizeof(TPilha));
	if(pontPilha == NULL)
		exit(1);

	pontPilha->top = 0;
	return pontPilha;
}

// MENSURAR TAMANHO DA PILHA
int tamanho(TPilha *pontPilha){
	return pontPilha->top;
}

// EMPILHAR ELEMENTO
void empilhar(TPilha *pontPilha, int value) {
    if (pontPilha->top != MAX) { // Implementado a função a verificação caso chegue ao limite da pilha ✅
        int i = pontPilha->top;
        pontPilha->elements[i] = value;
        pontPilha->top = pontPilha->top + 1;
        printf("\n\033[5;32mElemento %d, foi empilhado com sucesso!\033[0m\n", value);
    } else {
        perror("\n\033[5;31m > Error adding element, check queue size \033[0m\n\n"); // messagem de erro caso a pilha estiever cheia ✅
    }
}

// DESEMPILHAR ELEMENTO
int desempilhar(TPilha *pontPilha) { 
    if (pontPilha->top == 0) { // Verificação para quando a pilha estiver vazia com a mesagem de alerta ✅
        perror("\n\033[1;32m > Warning, no, the stack doesn't have any more elements to be removed!\033[0m\n");
        return 0;
    }

    pontPilha->top = pontPilha->top - 1;
    short int i = pontPilha->top;
    return pontPilha->elements[i];
}

// MOSTRAR ELEMENTO EMPILHADOS
int mostrarElementos(TPilha *pontPilha) { // função para mostrar os elementos da pilha ✅
    size_t tm = tamanho(pontPilha);

    printf("\n\033[0;35m⬇ inicio da pilha ⬇\033[0m\n\n");
    for(int i=0; i < tm; i++) {
        printf("\033[1;35m%d\033[0m\n", pontPilha->elements[i]);
    }
    printf("\n\033[0;35m⬆ final da pilha ⬆\033[0m\n"); 

    return 0;
}

//DESTRUIR PILHA
void destruir_pilha(TPilha *pontPilha) {
	free(pontPilha);
}

int main(void) {
  short option;
  unsigned int elementValue;
  TPilha *pontPilha;

  setlocale(LC_ALL, "");

  pontPilha = criar_pilha();

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
            empilhar(pontPilha, elementValue);
            break;
        case 2:
            elementValue = desempilhar(pontPilha);
            if (elementValue)
                printf("\n\033[0;32mO elemento %d foi removido da pilha com sucesso!\033[0m\n", elementValue);
            break;
        case 3:
            elementValue = tamanho(pontPilha);
            printf("\n\033[0;32mNo momento a pilha contem %d elementos!\033[0m\n", elementValue);
            break;
        case 4:
            mostrarElementos(pontPilha);
            break;
      }

  } while(option != 5);

  destruir_pilha(pontPilha);
  return 0;
}
