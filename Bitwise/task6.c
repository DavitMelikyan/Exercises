#include <stdio.h>

int main() {
	char c = "\0";
	printf("Enter a char: ");
	scanf("%c", &c);
	c ^= 32;
	printf("%c\n", c);
	return 0;
}

