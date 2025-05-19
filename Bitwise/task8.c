#include <stdio.h>

int main() {
	int num = 0;
	printf("Enter a num: ");
	scanf("%d", &num);
	if ((num & num - 1) == 0) {
		printf("true\n");
	} else {
		printf("false\n");
	}	
	return 0;
}
