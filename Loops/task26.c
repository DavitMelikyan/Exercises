#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;
	int res = 1;
	printf("Enter the number: ");									
	scanf("%d", &a);
	printf("Enter the power: ");
	scanf("%d", &b);
	while (b) {
		res *= a;
		--b;
	}
	printf("%d\n", res);
	return 0;
}
