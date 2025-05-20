#include <stdio.h>
void arrinp(int *arr, const int size);
void compare(int *arr1, int *arr2, const int size);

int main() {
	const int size = 5;
        int arr1[size] = {};
        int arr2[size] = {};
        arrinp(arr1, size);
        arrinp(arr2, size);
	compare(arr1, arr2, size);
	return 0;
}

void arrinp(int *arr, const int size) {
        for (int i = 0; i < size; ++i) {
                printf("Enter a num: ");
                scanf("%d", &arr[i]);
        }
}

void compare(int *arr1, int *arr2, const int size) {
	int IsEqual = 1;
	for (int i = 0; i < size; ++i) {
		if (arr1[i] != arr2[i]) {
			IsEqual = 0;
			printf("Your arrays are not equal \n");
			return;
		}
	}
	printf("Your arrays are equal \n");
}
