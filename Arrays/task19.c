#include <stdio.h>
void arrinp(int *arr, const int size); 

int main() {
	const int size = 10;
	int arr[size] = {};
	arrinp(arr, size);
	int a = 0;
    	for (int i = 0; i < size; ++i) {
        	a ^= arr[i];
    	}
	printf("%d\n", a);
	return 0;
}

void arrinp(int *arr, const int size) {
        for (int i = 0; i < size; ++i) {
                printf("Enter a num: ");
                scanf("%d", &arr[i]);
        }
}
