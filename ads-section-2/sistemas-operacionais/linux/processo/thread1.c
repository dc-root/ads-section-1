#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

void*  funcao_thread(void* ar) {
	printf("\tFILHA: sou nova thread e aguardo 10s.\n");
	sleep(10);
	printf("\tFILHA: terminarei agora");
	return NULL;
}

int main() {
	pthread_t thread;
	printf("PA: criando uma nova thread...\n");
	pthread_create(&thread, NULL, &funcao_thread, NULL);

	printf("PAI: aguardando a conclusao da thread...\n");
	pthread_join(thread, NULL);
	printf("\nPAI: a thread terminou. Vou terminar tambem.\n");
	return 0;
}

