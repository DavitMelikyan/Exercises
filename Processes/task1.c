#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
	pid_t chpid = fork();
	int status;
	if (chpid < 0) {
		printf("Error");
	} else if (chpid) {
		printf("Child's pid in parent is %d\n", chpid);
      		pid_t pid = wait(&status);
		printf("Status is %d\n", WEXITSTATUS(status));
	} else if (chpid == 0) {
		printf("Child's pid in child is %d\n", getpid());
		printf("Parent's pid in child is %d\n", getppid());
	}
	return 0;
}
