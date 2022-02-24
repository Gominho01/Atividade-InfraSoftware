# Atividade-InfraSoftware

## O que acontece no código
```c
# Bibliotecas
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h> #Biblioteca pra poder usar

int main() {

	pid_t p; # Variavel do tipo pid_t pra recerber o PID
	p = fork(); # Criação do filho
	if (p==0) { # Caso for a "vez" do pai
		printf("PID do filho: %d\n",getpid()); # Recebe PID e printa
		printf("PID do pai: %d\n",getpid());
	}
	else { # Caso for a "vez" do filho
		sleep(10);
		printf("PID do pai: %d\n",getpid()); # Recebe PID e printa
		printf("PID do filho %d\n",p);
	}
  
  ```
