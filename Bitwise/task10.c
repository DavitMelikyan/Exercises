#include <stdio.h>

int main() {
	int num = 0;
        int n = 0;
        printf("Enter a num: ");
        scanf("%d", &num);
        printf("Enter the index of num you want to turn into 0: ");
        scanf("%d", &n);
	num ^= 1 << n;
	printf("%d\n", num);
	return 0;
}
