#include <stdio.h>
#include <stdlib.h>
void arrinp(int *arr, const int size); 

int main() {
	int size = 0;
	printf("Enter the size: ");
	scanf("%d", &size);
	int* arr = (int *) malloc((size - 1) * sizeof(int));
	arrinp(arr, size);
	int sum1 = 0, sum2 = 0;
	for (int i = 1; i <= size; ++i) {
		sum1 += i;
	}
	for (int i = 0; i < size; ++i) {
		sum1 -= arr[i];
	}
	printf("The missing num is %d!\n", sum1);	
	
	return 0;
}

void arrinp(int *arr, const int size) {
        for (int i = 0; i < size - 1; ++i) {
                printf("Enter a num: ");
                scanf("%d", &arr[i]);
        }
}
