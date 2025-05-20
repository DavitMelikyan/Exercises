#include <stdio.h>
int fact(int n);

int main() {
	int n = 10;
	printf("%d\n", fact(n));
	return 0;
}

int fact(int n) {
	if (n >= 1) {
		return n * fact(n - 1);
	} else {
		return 1;
	}
}
