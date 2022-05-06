#include <stdio.h>
#include <unistd.h>
#include <wait.h>

int main() {
	int id;
	printf("PAI: (pid=%d) vou criar um processo filho.. \n", getpid());
	id = fork();
	if(id == 0){
		printf("\tFilho: (pid=%d) vou aguardar 5 segundos.\n", getpid());
		sleep(5);
		printf("\tFilho: vou terminar..\n");
	} else {
		printf("PAI: não executar wait	\n");
		for(;;)
		{
		}
		wait(0);
	}
	return 0;
}
