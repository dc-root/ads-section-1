#include <stdlib.h>
#include <stdio.h>

#define N_INT 5

int main() {  
    int vetInt[N_INT];
    int soma=0;
    int mult=0;

    for (int i=0; i<N_INT; i++) {
        // Coletando so valores
        printf("digite o %dº numero: ", i+1);
        scanf("%d", &vetInt[i]);

        // Multiplicando os valores do vetor
        if (i == 0)
            mult = vetInt[i];
        else
            mult *= vetInt[i];

        // Somando o vetor
        soma += vetInt[i];

        vetInt[i]++;
    }

    printf("\n");
    vetInt[N_INT] = 0;

    // Mostrando os valores
    for (int i=0; i<N_INT; i++) {
        printf("%d\n", vetInt[i]);
    }

    return 0;
}