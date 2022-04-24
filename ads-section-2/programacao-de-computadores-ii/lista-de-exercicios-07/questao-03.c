#include <stdio.h>
#include <stdlib.h>

int main () {
    size_t size_memory=0;
    printf("Insira o tamnho da memoria: ");
    scanf("%ld", &size_memory);

    const int *memory = malloc(sizeof(int) *size_memory);

    printf("\n\nmemory: %ld\nsize_memory: %ld", sizeof(memory), sizeof(size_memory));
    return 0;
}