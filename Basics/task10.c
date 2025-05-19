#include <stdio.h>

int main() {
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	printf("Enter 3 integers: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("The result is %d\n", (num1 + num2 + num3) / 3);
	
	return 0;
}	
