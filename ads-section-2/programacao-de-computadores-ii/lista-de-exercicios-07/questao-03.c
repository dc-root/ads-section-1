#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declarado funnções
void insertValue(int *point);
void consultValue(int *size, int *point);

int main() {
  setlocale(LC_ALL, "");
  unsigned int size_m = 0, option = 0;

  printf("Digite o tamanho da memoria(byte): ");
  scanf("%d", &size_m);

  // Alocando espaço de memoria com o tamanho especificado
  int *pointer = (int *)malloc(sizeof(int) * size_m);
  printf("\nmemory size: %ld\n", sizeof(int) * size_m);

  // Inicializando a memoria com valor 0
  for (int i = 0; i < size_m; i++)
  {
    *pointer = 0;
    *pointer++;
  }

  // Menu de opções
  do {
    printf("\n\n1. Inserir valor em uma posição da memoria.\n2. Consultar valor em uma posição memoria.\n3. sair\n\n\topção: ");
    scanf("%d", &option);

    switch (option) {
      case 1:
        insertValue(pointer);
        break;
      case 2:
        consultValue(&size_m, pointer);
        break;
      case 3:
        free(pointer);
        exit(1);
      default:
        free(pointer);
        exit(1);
    }
  } while (option != 3);

  free(pointer);
  return 0;
}

// Função para inserir valor na memoria
void insertValue(int *point) {
  unsigned int position = 0;

  printf("\nposição: ");
  scanf("%d", &position);

  for (int i = 1; i <= position; i++) {
    if (i == position) {
      printf("valor: ");
      scanf("%d", point);
    }
    *point++;
  }
}

// Função para consultar valor na memoria
void consultValue(int *size, int *point) {
  unsigned short valueSearch = 0, count = 0;

  printf("\nvalor a ser pesquisado: ");
  scanf("%hd", &valueSearch);

  for (int i = 0; i < *size; i++) {
    if (*point == valueSearch) {
      printf("> Valor encontrado na posição %d\n", i);
      count++;
    }
    *point++;
  }

  if (!count)
    printf("\n> valor não encontrado :(\n");
}