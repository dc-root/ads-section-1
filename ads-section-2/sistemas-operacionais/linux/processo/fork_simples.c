#include <stdio.h>
#include <unistd.h>
#include <wait.h>

// pid_t fork(void);

int main () {
	int id;
	id = fork();
	
	if(id == 0) {
		printf("\tFilho: (pid=%d) e espero 10 segundos\n", getpid());
		sleep(10);
		printf("\tFilho: Ja esperei e vou embora...\n");
	} else {
		printf("Pai: (pid=%d) e espero pelo filho=%d\n", getpid(), id);
		wait(NULL);
		printf("Pai: Menu filho terminou. Vou terminar tambem!\n");
	};
	
	return 0;
}

