### QUESTÃO 01

- Se o registro for o primeiro: 1 comparação 
- Se o registro procurado for o último: N comparações 
- Se for igualmente provável que o argumento apareça em qualquer posição da tabela, em média: (n+1)/2 comparações 
- Se a busca for mal sucedida: N comparações 
- Logo, a busca seqüencial, no pior caso, é O(n)

### QUESTÃO 02

O segundo algoritimo seria a melhor implementação. Em sua complexidade ele se sobressai no melhor e no pior caso comparado ao primeiro que mantém constante o número de comparação em todos os casos, já o maxmin3 e a pior implementação pois tem complexidade alta em todos os casso e elevado numero de comparação.

```c
void maxmin2(int vetor[], int n, int *max, int *min){
    int i;
    *max = vetor[0];
    *min = vetor[0];

    for(i = 1; i < n; i++){
        if(vetor[i] > *max) *max = vetor[i]; // n-1
        else if(vetor[i] < *min) *min = vetor[i]; // 2(n-1)
    } 
}
```

### QUESTÃO 03

São necessários **n/2** operações, uma bom exemplo se da em uma cadeia de caracters:

```c
#include <stdio.h>
#include <string.h>

int main(void) {
    char buffer[] = "Programmer";  // buffer.lenght 10
    size_t size = strlen(buffer);
    
    int count=0;
    
    for(int i = 0; i < size / 2; i++) {
       char tmp = buffer[i];
       buffer[i] = buffer[size-i-1];
       buffer[size-i-1] = tmp;
       
       count++;
    }
    printf("%s", buffer);             // remmargorP
    printf("\noperações: %d", count); // 5
}
```
