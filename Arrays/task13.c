#include <stdio.h>
#include <stdlib.h>

int main() {
	int size = 0;
	printf("Enter the size of array: ");
	scanf("%d", &size);
	int *arr = (int *) malloc(sizeof(int) * size);
	int codd = 0;	
	for (int i = 0; i < size; ++i) {
		printf("Enter a num: ");
		scanf("%d", &arr[i]);
		if (arr[i] % 2) {
			++codd;
		}
	}
	printf("There are %d odd numbers in your array\n", codd);
	return 0;
}
