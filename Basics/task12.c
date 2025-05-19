#include <stdio.h>

int main() {
	int age = 0;
	printf("Enter your age: ");
	scanf("%d", &age);
	printf("Your age in days is %d\n", age * 365);
	return 0;
}
