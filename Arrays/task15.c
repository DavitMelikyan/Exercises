#include <stdio.h> 
#include <stdlib.h>

int main() {
	int size = 0;
	printf("Enter the size of array: ");
        scanf("%d", &size);
        int *arr = (int *) malloc(sizeof(int) * size);
        int ceven = 0;
	for (int i = 0; i < size; ++i) {
                printf("Enter a num: ");
                scanf("%d", &arr[i]);
        }	
	for (int i = 0; i < size; ++i) {
		if (arr[i] % 2 == 0) {
			int tmp = arr[ceven];
			arr[ceven] = arr[i];
			arr[i] = tmp;
			++ceven;
		}
	}
	for (int i = 0; i < size; ++i) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}	
	
