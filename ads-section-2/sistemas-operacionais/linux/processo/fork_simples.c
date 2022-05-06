#include <stdio.h>
#include <unistd.h>
#include <wait.h>

int main()
{
	int id;
	id = for();
	if(id == 0)
	{
		printf("\tFilho: (pif=%d) e espero 10 segundo.\n", getpid());
		sleep(10);
		printf("\tFilho: Ja esperei o vou embora...\n");
	} else {
		printf("Pai: (pid=%d) e espero pelo seu filho=%d\n", getpid(), id());
		wait(NULL);
		printf("Pai: Meu filho terminou. Vou terminar tamem\n");
	};
	return 0;
};
