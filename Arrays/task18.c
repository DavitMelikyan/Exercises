#include <stdio.h>
void arrinp(int *arr, const int size); 

int main() {
	const int size = 10;
	int arr[size] = {};
	int isTrue = 1;
	arrinp(arr,size);
	for (int i = 1; i < size; ++i) {
		if (arr[i] > arr[i - 1]) {
			isTrue = 0;
			break;
		}
	}
	if (isTrue) {
		printf("Yes");
	} else {
		printf("No");
	}
	return 0;
}

void arrinp(int *arr, const int size) {
        for (int i = 0; i < size; ++i) {
                printf("Enter a num: ");
                scanf("%d", &arr[i]);
        }
}
