#include <stdio.h>
#include <string.h>

int main() {
	const int size = 5;
	char str[size] = "Hello";
	for (int i = 0; i < size / 2; ++i) {
		char tmp = str[i];
		str[i] = str[size - 1 - i];
		str[size - 1 - i] = tmp;
	}
	printf("%s\n", str);
	return 0;
}
