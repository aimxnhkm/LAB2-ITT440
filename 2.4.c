#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

void childTask()
{
	char name[25];
	printf("Sila isi nama anda : ");
	scanf("%25s", name);
	printf("Nama anda ialah %s\n", name);
	exit(0);
}

void parentTask() {
	printf("Job is Done!\n");
}

int main(void) {
	int i;

	for(i = 0; i < 4; i++) {
	pid_t pid = fork();

	if(pid == 0) {
		childTask();
		exit(EXIT_SUCCESS);
	}

	else {
		wait(NULL);

	}
}
parentTask();

return 0;
}
