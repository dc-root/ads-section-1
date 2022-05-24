#include <stdio.h>
#include <time.h>

#if defined(_WIN32) || defined(_WIN64)
    void limparBash() { return system("cls"); }
#else defined(__linux__) || defined(__unix__)
    void limparBash() { return system("clear"); }
#endif

// Funcao que imlementa Bubble Sort
void BubbleSort(int lista[], unsigned int n) {
  int i, j, x;
  int aux;
  for (i = 0; i < n-1; i++)
    for (j = 0; j < n-i-1; j++) {
        if (lista[j] > lista[j+1]){ /* Compara elementos adjacentes */
            aux = lista[j]; // faz a troca
            lista[j] = lista[j+1];
            lista[j+1] = aux;
        }

        // Laço for para impreção dos elementos sendo alterados ✅        
        printf("BubbleSort\t\t\t(%dvs)\n\n", i);
        for (x=0; x < n; x++) {
            printf("%d ", lista[x]);
        } printf("\n");

        sleep(1);
        limparBash();
    }
}

// Função para classificar o array em ordem decrescente ✅
void BubbleSortDecrement(int lista[], unsigned int n) {
  int i, j, x;
  int aux;
  for (i = 0; i < n-1; i++)
    for (j = 0; j < n-i-1; j++) {
        if (lista[j] < lista[j+1]){ /* Compara elementos adjacentes */
            aux = lista[j]; // faz a troca
            lista[j] = lista[j+1];
            lista[j+1] = aux;
        }

        printf("BubbleSort decrescente\t\t(%dvs)\n\n", i);
        for (x=0; x < n; x++) {
            printf("%d ", lista[x]);
        } printf("\n");

        sleep(1);
        limparBash();
    }
}

// Funcao que imlementa Insertioin Sort
void InsertionSort(int lista[], int tamanhoDaLista){
    int i, j, chave;
    for (i = 1; i < tamanhoDaLista; i++) {
        chave = lista[i];
        j = i - 1;
        while (j >= 0 && lista[j] > chave) {
            lista[j + 1] = lista[j];
            j = j - 1;
        }
        lista[j + 1] = chave;
    }
}

// Função que imlementa Binary Search
int BinarySearch (int lista[], int chave, unsigned int tamanhoDaLista){
    int inf = 0;                // limite inferior (o primeiro índice de vetor em C é zero)
    int sup = tamanhoDaLista-1; // limite superior (termina em um número a menos. 0 a 9 são 10 números)
    int meio, count=0;
    while (inf <= sup) {
        meio = (inf + sup)/2;
        if (chave == lista[meio]) {
          printf("\nQuantidade de comparações realizadas(BinarySearch): %d", count); // ✅
          return meio;
        } else if (chave < lista[meio])
          sup = meio-1;
        else
            inf = meio+1;
        count++;
    }
    printf("\nQuantidade de comparações realizadas(BinarySearch): %d", count);

    return -1;   // não encontrado
}

void SelectionSort(int lista[], unsigned int tamanhoDaLista) {
  int i, j, min, aux;
  for (i = 0; i < (tamanhoDaLista-1); i++) {
     min = i;
     for (j = (i+1); j < tamanhoDaLista; j++) {
       if(lista[j] < lista[min]) 
         min = j;
     }
     if (i != min) {
       aux = lista[i];
       lista[i] = lista[min];
       lista[min] = aux;
     }
  }
}

// Implementaçã da dunção SequentialSearch()  ✅
int SequentialSearch(int lista[], unsigned int tamanhoDaLista,  int chave) {
  int i, j, count=0;
  for (i = 0; i < tamanhoDaLista; i++) {
    if(chave == lista[i]) {
      printf("\nQuantidade de comparações realizadas(SequentialSearch): %d", count);
      return lista[i];
    }
    count++;
  }

  printf("\nQuantidade de comparações realizadas(SequentialSearch): %d", count);

  return -1;
}

int main(void) {
  int  arrayDeInts[] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10, 0}; //  | 0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100
  int  i, tamanhoAr;

  tamanhoAr = sizeof(arrayDeInts)/sizeof(int);

  for (i=0; i < tamanhoAr; i++) {
    printf("%d ", arrayDeInts[i]);
  }
  printf("\n\n");
  
  // sleep(3);

  BubbleSort(arrayDeInts, tamanhoAr);
  BubbleSortDecrement(arrayDeInts, tamanhoAr);
  
  SelectionSort(arrayDeInts, tamanhoAr);
  InsertionSort(arrayDeInts, tamanhoAr);

  SequentialSearch(arrayDeInts, tamanhoAr, 11); // 11
  BinarySearch(arrayDeInts, 11, tamanhoAr);     // 3

  // Questão 03;
  /* O SequentialSearch faz a busca em todo o vetor de elementos, por isso a quantidade de comparações e maior,
   * porém ele não depende que os elementos estejam ordenados. Em contrapartida o modelo SequentialSearch e muito mais rapido
   * em suas comparação, porém depende que os elementos estejam ordenados.
   */
  return 0;
}