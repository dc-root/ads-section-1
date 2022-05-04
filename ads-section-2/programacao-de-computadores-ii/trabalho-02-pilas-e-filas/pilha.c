#include <stdio.h>
#include <stdlib.h>

// PILHA ESTÁTICA - VETORES

#define MAX 5

typedef struct{
	int elements[MAX]; // PILHA ESTÁTICA
	int top;
} TPilha;

// CRIAR PILHA
TPilha * criar_pilha() {
	TPilha *pontPilha;

	pontPilha = calloc(1, sizeof(TPilha)); //ALOCAÇÃO DA MEMÓRIA
	if(pontPilha == NULL)
		exit(1);

	pontPilha->top = 0;
	return pontPilha;
}

// EMPILHAR ELEMENTO
void empilhar(TPilha *pontPilha, int value) {
    int i = pontPilha->top;

    pontPilha->elements[i] = value;
    pontPilha->top = pontPilha->top + 1;
}

// DESEMPILHAR ELEMENTO
int desempilhar(TPilha *pontPilha){
    int i;
    pontPilha->top = pontPilha->top - 1;

    i = pontPilha->top;

    return pontPilha->elements[i];
}

int mostrarElementos(TPilha *pontPilha) { // função para mostrar os elementos da pilha ✅
    size_t tm = tamanho(pontPilha);

    printf("\n");
    for(int i=0; i < tm; i++) {
        printf("%d\t", pontPilha->elements[i]);
    }
    printf("\n"); 

    return 0;
}

// MENSURAR TAMANHO DA PILHA
int tamanho(TPilha *pontPilha){
	return pontPilha->top;
}

//DESTRUIR PILHA
void destruir_pilha(TPilha *pontPilha) {
	free(pontPilha);
}

int main(void) {
  int option, elementValue;
  TPilha *pontPilha;

  pontPilha = criar_pilha();

  printf("\n------ PILHA ESTÁTICA -------");

  do {
      printf("\n 1 - Empilhar elemento");
      printf("\n 2 - Desempilhar elemento");
      printf("\n 3 - Tamanho da pilha");
      printf("\n 4 - Mostrar todos os elementos");
      printf("\n 5 - Sair");
      printf("\n Digite a opção: ");
      scanf("%d", &option);

      switch(option){
            case 1:
                if (pontPilha->top != MAX) { // Implementado a verificação caso chegue ao limite da pilha ✅
                    printf("\n Digite o valor: ");
                    scanf("%d", &elementValue);
                    empilhar(pontPilha, elementValue);
                    break;
                } else {
                    perror("\n> Error adding element, check queue size\n"); // messagem de erro caso a pilha estiever cheia ✅
                    exit(1);
                }
            case 2:
                // if (pontPilha->elements == pontPilha->top) {

                // }
                elementValue = desempilhar(pontPilha);
                printf("\n Valor: %d \n", elementValue);
                break;
            case 3:
                elementValue = tamanho(pontPilha);
                printf("\n Tamanho: %d\n", elementValue);
                break;
            case 4:
                mostrarElementos(pontPilha);
                break;
      }

  } while(option != 5);


  destruir_pilha(pontPilha);

  return 0;
}

