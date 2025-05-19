#include <stdio.h>

int main() {
	int num1 = 0;
	int num2 = 0;
	printf("Enter the first number: ");
	scanf("%d", &num1);
	printf("Enter the second number: ");
	scanf("%d", &num2);
	printf("The remainder is %d\n", num1 % num2);
	return 0;
}
