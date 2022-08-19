#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
int main()
{
        /Proceso PADRE - HIJO/
        pid_t id_proceso_padre;
	pid_t id_proceso_hijo;

        puts("\n .:ESTE PROGRAMA MUESTRA EL IDENTIFICADOR DE UN PROCESO PADRE e HIJO:.\n");

        id_proceso_padre = getppid();
	id_proceso_hijo = getpid();

        printf("Identificador del proceso padre: %d\n",id_proceso_padre);
	printf("Identificador del proceso hijo: %d\n",id_proceso_hijo);

        return 0;
}