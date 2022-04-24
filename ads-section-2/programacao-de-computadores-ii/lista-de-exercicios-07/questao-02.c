#include <stdio.h>

int sortNumber(int *value1, int *value2, int *value3);

int main () {
    unsigned int val1=0, val2=0, val3=0;
   
    printf("Digite três numeros\n\n");
    
    printf("\t1º numero: ");
    scanf("%d", &val1);
    
    printf("\t2º numero: ");
    scanf("%d", &val2);

    printf("\t3º numero: ");
    scanf("%d", &val3);

    printf("\n\nnumeros: [%d] [%d] [%d]",  val1, val2, val3);

    sortNumber(&val1, &val2, &val3);
    return 0;
}


int sortNumber(int *value1, int *value2, int *value3) {
    int aux=0;

    // Ordenando os valores
    if (*value1 < *value3) {
        aux = *value3;
        *value3 = *value1;
        *value1 = aux;
    }

    if (*value1 < *value2) {
        aux = *value2;
        *value2 = *value1;
        *value1 = aux;
    }
    
    if (*value2 < *value3) {
        aux = *value3;
        *value3 = *value2;
        *value2 = aux;
    }

    // valores iguais
    if (*value1 == *value2 && *value2 == *value3)
        return 1;
    // valores diferentes
    else if (*value1 != *value2 || *value1 != *value3 || *value2 != *value3) {
        printf("\nnumeros ordenados: [%d] [%d] [%d]",  *value1, *value2, *value3);
        return 0;    
    }
}