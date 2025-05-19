#include <stdio.h>

int main() {
	int num = 0;
	int n = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("Enter the index you want to turn 1: ");
	scanf("%d", &n);
	num |= 1 << n;
	printf("%d\n", num);
	return 0;
}
