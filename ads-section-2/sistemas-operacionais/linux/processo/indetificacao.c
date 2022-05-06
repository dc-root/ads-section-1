#include <stdio.h>
#include <unistd.h>

int main() {
	printf("Eu sou o processo de PID %d\n", getpid());
	printf("Meu pai tem PID %d\n", getpid());
	printf("Pertenço ao grupo de ID %d", getpgrp());
	return 0;
}
