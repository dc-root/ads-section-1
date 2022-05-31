#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

void funcao1(char *str) {
	int i;
	for(i=0; i<100000; i++)
		printf("\t111111111111\n");
	printf("\tTerminando a thread 1\n");
}

void funcao2(char *str) {
	int i;
	for(i=0; i<100000; i++)
		printf("\t\t2222222222222\n");
	printf("\tTerminado a thread 2\n");
}

int main() {
	pthread_t thread_a, thread_b;
	printf("PAI: Criando duas threads..\n");

	pthread_create(&thread_a, NULL, (void*)funcao1, NULL);
	pthread_create(&thread_b, NULL, (void*)funcao2, NULL);

	printf("PA: aguardando as duas threads...\n");
	pthread_join(thread_a, NULL);
	pthread_join(thread_b, NULL);

	printf("PAI: Ambas as thread terminaram...");

	return 0;
}
