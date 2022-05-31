#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

void funcao_thread(char *str) {
	printf("\tRecebi o argumento (%s) do processo pesado\n", str);
	sleep(2);
	printf("\tTerminando a thread que recebeu o argumento (%s).\n", str);
}

int main() {
	void *retval;
	pthread_t thread_a, thread_b;
	printf("PAI: Criando duas threads..\n");

	pthread_create(&thread_a, NULL, (void*)funcao_thread, "AAA");
	pthread_create(&thread_b, NULL, (void*)funcao_thread, "BBB");

	printf("PA: aguardando as duas threads...\n");

	pthread_join(thread_a, &retval);
	pthread_join(thread_b, &retval);

	printf("PAI: Aguardando as duas threads...");

	return 0;
}
