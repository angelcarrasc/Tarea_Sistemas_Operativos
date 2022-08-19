#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
	/PROCESO PADRE HIJO (FORK)/

        puts("\n .:ESTE PROGRAMA MUESTRA EL PROCESO PADRE E HIJO:.\n");
	pid_t pid;
	
	if((pid == fork()) == 0){
	/HIJO/
		printf("Soy el hijo (%d, hijo de %d)\n", getpid(), getppid());
	}else{
	/PADRE/
		printf("soy el padre (%d, padre de %d)\n", getpid(), getppid());
	}

        return 0;
}