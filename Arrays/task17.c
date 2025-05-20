#include <stdio.h>
void arrinp(int *arr, const int size); 
int srch(int *arr, const int size, int target);

int main() {
	const int size = 10;
	int arr[size] = {};
	int target = 0;
	printf("Enter your target: ");
	scanf("%d", &target);
	arrinp(arr, size);
	printf("%d!\n", srch(arr, size, target));
	return 0;
}

void arrinp(int *arr, const int size) {
        for (int i = 0; i < size; ++i) {
                printf("Enter a num: ");
                scanf("%d", &arr[i]);
        }
}

int srch(int *arr, const int size, int target) {
	for (int i = 0; i < size; ++i) {
		if (arr[i] == target) {
			return i;
		}
	}
	return -1;
}
