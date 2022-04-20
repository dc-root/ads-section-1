#include <stdlib.h>
#include <stdio.h>

#define N_ALUNOS 2 // 10
#define N_NOTAS 4 // 4

typedef struct {
    float nota[N_NOTAS];
} tAlunos;

tAlunos Alunos[N_ALUNOS];

void Media(float* nota);

int main() {
    float vetorMedia[N_ALUNOS];
    float soma=0;
    
    for (int i=0; i<N_ALUNOS; i++) {
        for (int j=0; j<N_NOTAS; j++) {
            printf("Digite a %dº nota do %dº aluno: ", j+1, i+1);
            scanf("%f", &Alunos[i].nota[j]);

            if (j != (N_NOTAS -1)) {
                soma += Alunos[i].nota[j];
            }
        }
        printf("\n");
    }


    for (int i=0; i<N_NOTAS; i++) {
        vetorMedia[i] = soma / N_NOTAS;
    }        

    return 0;
}

// void Media(float* nota) {

// }
