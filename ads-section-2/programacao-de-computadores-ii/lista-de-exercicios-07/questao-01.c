#include <stdio.h>

int main () {
    int var1, var2;

    printf("Digite dois numeros\n\n");
    
    printf("\t1º numero: ");
    scanf("%d", &var1);
    
    printf("\t2º numero: ");
    scanf("%d", &var2);

    if(&var1 > &var2)
        printf("\n\n%d: possui o maior endereco\nendereco var1: %d\nendereco var2: %d", var1, &var1, &var2);
    else if(&var2 > var1)
        printf("\n\n%d: possui o maior endereco\nendereco var1: %d\nendereco var2: %d", var2, &var1, &var2);

    return 0;
}