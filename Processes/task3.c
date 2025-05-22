#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
	pid_t pid = fork();
	if (pid < 0) {
		printf("Fork failed\n");
		return 1;
	} else if (pid == 0) {
		execlp("ls", "ls", "-l", NULL);
	} else {
		wait(NULL);
		printf("ls -l was completed\n");
	}
	return 0;
}
