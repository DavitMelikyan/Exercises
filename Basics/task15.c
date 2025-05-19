#include <stdio.h>

int main() {
	int num1 = 0;
	int num2 = 0;
	int oper = 0;
	printf("Enter the first num: ");
	scanf("%d", &num1);
	printf("Enter the second num: ");
	scanf("%d", &num2);
	printf("Enter the operation you want to perform\n1 - addition\n2 - subtraction\n3 - multiplication\n4 - division\nChoose: ");
	scanf("%d", &oper);
	switch (oper) {
		case 1: 
			printf("The result of addition is %d\n", num1 + num2);
			break;
		case 2: 
			printf("The result of subtraction is %d\n", num1 - num2);
			break;
		case 3: 
			printf("The result of multiplication is %d\n", num1 * num2);
			break;
		case 4: 
			printf("The result of division is %d\n", num1 / num2);
			break;
		default:
			printf("Invalid operator");
	}
	return 0;
}


