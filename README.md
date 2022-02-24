# Atividade-InfraSoftware

## O que acontece no código
```c
# Bibliotecas
#include <stdio.h>
#include <unistd.h> 
#include <sys/types.h> 
//Biblioteca pra poder usar o fork(), sleep()

int main() {

	pid_t p; // Variavel do tipo pid_t pra recerber o PID
	p = fork();  // Criação do filho
	if (p==0) {  // Caso seja priorizado o processo do pai
		printf("PID do filho: %d\n",getpid()); // Recebe PID e printa
		printf("PID do pai: %d\n",getpid());
	}
	else { // Caso seja priorizado o processo do filho
		sleep(10);
		printf("PID do pai: %d\n",getpid()); // Recebe PID e printa
		printf("PID do filho %d\n",p);
	}
  
  ```
