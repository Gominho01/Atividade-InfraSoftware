#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {

	pid_t p;
	p = fork();
	if (p==0) {
		printf("PID do filho: %d\n",getpid());
		printf("PID do pai: %d\n",getpid());
	}
	else {
		sleep(10);
		printf("PID do pai: %d\n",getpid());
		printf("PID do filho %d\n",p);
	}
