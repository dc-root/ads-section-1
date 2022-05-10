#include <stdio.h>


// Função que imlementa Bubble Sort
void BubbleSort(int lista[], unsigned int n)
{
   int i, j;
    int aux;
   for (i = 0; i < n-1; i++)     
 
       // O último elemento já está no lugar 
       for (j = 0; j < n-i-1; j++)
           if (lista[j] > lista[j+1]){ /* Compara elementos adjacentes */
               aux = lista[j]; // faz a troca
               lista[j] = lista[j+1];
               lista[j+1] = aux;
            }
}
// Função que imlementa Insertioin Sort
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
int BinarySearch (int lista[], int chave, unsigned int tamanhoDaLista)
{
     int inf = 0;     // limite inferior (o primeiro índice de vetor em C é zero          )
     int sup = tamanhoDaLista-1; // limite superior (termina em um número a menos. 0 a 9 são 10 números)
     int meio;
     while (inf <= sup)
     {
          meio = (inf + sup)/2;
          if (chave == lista[meio])
               return meio;
          if (chave < lista[meio])
               sup = meio-1;
          else
               inf = meio+1;
     }
     return -1;   // não encontrado
}

void SelectionSort(int lista[], unsigned int tamanhoDaLista) { 
  int i, j, min, aux;
  for (i = 0; i < (tamanhoDaLista-1); i++) 
  {
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


int main(void)
{
    int  arrayDeInts[] = {100,90,80,70,60,50,40,30,20,10,0};
    int  i, tamanhoAr;

    tamanhoAr = sizeof(arrayDeInts)/sizeof(arrayDeInts[0]);

    for (i=0; i < tamanhoAr; i++) {
    	 printf(" %d ", arrayDeInts[i]);
    }

  //  BubbleSort(arrayDeInts, tamanhoAr);
  //  SelectionSort(arrayDeInts, tamanhoAr);
  InsertionSort(arrayDeInts, tamanhoAr);

    printf("\n\n\n");
    for (i=0; i < tamanhoAr; i++) {
    	 printf(" %d ", arrayDeInts[i]);
    }

  //  printf("\nEncontrou? %d",BinarySearch(arrayDeInts, 30, tamanhoAr));

    return 0;
}