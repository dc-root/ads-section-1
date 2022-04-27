#include <stdio.h>

int main () {
    unsigned int var1, var2;

    printf("Digite dois numeros e saiba qual tem o maior endereço!!\n\n");
    
    printf("\t1º numero: ");
    scanf("%d", &var1);
    
    printf("\t2º numero: ");
    scanf("%d", &var2);

    if(&var1 > &var2)
        printf("\n\n%d: possui o maior endereco\nendereco numero: %d\nendereco numero2: %d", var1, &var1, &var2);
    else if(&var2 > var1)
        printf("\n\n%d: possui o maior endereco\nendereco numero: %d\nendereco numero2: %d", var2, &var1, &var2);

    return 0;
}