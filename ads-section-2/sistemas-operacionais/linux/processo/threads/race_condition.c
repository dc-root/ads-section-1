#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

int conta = 0;

void *funcao1() {
    int i;
    for(i=0; i<100000000; i++)
        conta = conta + 3;
    printf("Encerrei a thread 1\n");
    return 0;
}

void *funcao2() {
    int i;
    for(i=0; i<100000000; i++)
        conta = conta + 3;
    printf("Encerrei a thread 2\n");
    return 0;
}

int main() {
    pthread_t thread1, thread2;
    pthread_create(&thread1, NULL, funcao1, NULL);
    pthread_create(&thread2, NULL, funcao2, NULL);
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    printf("O valor da conta eh: %d\n", conta);
    return 0;
}
