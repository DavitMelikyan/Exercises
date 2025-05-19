#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;
	printf("Enter a num: ");
	scanf("%d", &a);
	printf("Enter a num: ");
        scanf("%d", &b);
	a ^= b;
	b ^= a;
	a ^= b;
	printf("a - %d, b - %d\n", a, b);
	return 0;
}
