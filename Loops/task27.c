#include <stdio.h>

int main() {
	int num = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	int num1 = num;
	int count = 0;
	while (num1) {
		num1 /= 10;
		++count;
	}
	if (count == 3) {
		printf("Yes\n");	
	}
	if (count != 5) {
		printf("Yes\n");
        }

	num1 = num;
	int IsTrue = 1;
	int resa = 0;
	int resm = 1;
	while (num1) {
		int last = num1 % 10;
		num1 /= 10;
		resa += last;
		resm *= last;
		if (last > num1 % 10) {
			IsTrue = 0;
			break;
		}
	}
	if (IsTrue) {
		printf("Yes\n");
	}
	if (resa > 20) {
		printf("Yes\n");
        }
	if (resm < 30) {
                printf("Yes\n");
        }

	return 0;
}
