#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

void funcao1(char *str) {
	printf("\tFilho1: vou aguardar 5 segundos...\n");
	sleep(5);
	printf("\tFilho1: ja aguardei agora vou finalizar...\n");
}

void funcao2(char *str) {
	printf("\tFilho2: vou aguardar 10 segundos...\n");
	sleep(10);
	printf("\tFilho2: ja aguardei agora vou finalizar...\n");
}

int main() {
	void *retval;
	pthread_t thread_a, thread_b;
	printf("PAI: Criando duas threads..\n");

	pthread_create(&thread_a, NULL, (void*)funcao1, NULL);
	pthread_create(&thread_b, NULL, (void*)funcao2, NULL);

	printf("PA: aguardando as duas threads...\n");

	pthread_join(thread_a, &retval);
	pthread_join(thread_b, &retval);

	printf("PAI: Ambas as threads terminamos...");

	return 0;
}
