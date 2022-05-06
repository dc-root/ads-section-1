#include <stdio.h>
#include <unistd.h>

int main() {
	int id;
	printf("PAI: meu pid=%d. Vou criar um processo filho.\n", getpid());
	id = fork();
	if(id == 0) {
		printf("\t FILHO: criado com pid=%d.\n", getpid());
		printf("\tFILHO: Vou ficar em loop infinito...\n");
		for(;;);
	} else {
		sleep(5);
		printf("PAI: (id=%d) vou deixar o meu filho orfao.\n");
	}
	return 0;
}
