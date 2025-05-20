#include <stdio.h>
void hex(int num, char* arr, const int size) {
	int a = num;
	int tmp = 0;
	for (int i = 0; num > 0 && i < size; ++i, num /= 16) {
		if ((num % 16) < 10) {
			arr[i] = '0' + (num % 16);
		} else {
			switch (num % 16) {
				case 10:
					arr[i] = 'A';
					break;
				case 11:
					arr[i] = 'B';
					break;
				case 12:
					arr[i] = 'C';
					break;
				case 13:
				 	arr[i] = 'D';
                                        break;
				case 14:
					arr[i] = 'E';
                                        break;
				case 15:
					arr[i] = 'F';
                                        break;
				default:
					break;
			}
		}
	}
	for (int i = 0; i <= size / 2; ++i) {
		tmp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = tmp;
	}
	for (int i = 0; i < size; ++i) {
                printf("%c", arr[i]);
        }
	printf("\n");               
}

int main() {
	int num = 16;
	int hexnum = 111234;
	const int size = 5;
	char arr[size] = {};
	hex(hexnum, arr, size);
	return 0;
}
