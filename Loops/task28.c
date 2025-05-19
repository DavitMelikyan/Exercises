#include <stdio.h>

int isprog (int num) {
	int n1 = num;
        int IsTrue = 1;
        int digits = 0;
        int tens = 1;
        while (n1) {
                n1 /= 10;
                digits++;
        }
        --digits;
        while (digits) {
                tens = 10 * tens;
                --digits;
        }
        int d = (num / (tens / 10) % 10) - (num / tens % 10);
        while (tens >= 10) {
                if (((num / (tens / 10) % 10)) - (num / tens % 10) != d) {
                        IsTrue = 0;
                        break;
                }
                tens /= 10;
        }
        if (IsTrue) {
		return 1;
	}
        return 0;
}


int main() {
	int num = 0;
	printf("Enter a num: ");
	scanf("%d", &num);
	printf("%d\n", isprog(num));
	return 0;
}
