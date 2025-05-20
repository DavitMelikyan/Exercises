#include <stdio.h>
#include <stdlib.h>

char* decimalToBinary(int n) {
        char *str = (char *) malloc(33);
        if (!str) {
                return NULL;
        }
        int index = 31;
        str[32] = '\0';
        int negative = 0;
        if (n < 0) {
                negative = 1;
                n = -n;
        }
        while (n) {
                str[index--] = (n % 2) + '0';
                n /= 2;
        }
        while (index >= 0) {
                str[index--] = '0';
        }
        if (negative == 1) {
                for (int i = 0; i < 32; ++i) {
                        if (str[i] == '1') {
                                str[i] = '0';
                        } else {
                                str[i] = '1';
                        }
                }
                int carry = 1;
                index = 31;
                while (carry && index >= 0) {
			if (str[index] == '1') {
                                str[index] = '0';
                        } else {
                                str[index] = '1';
                                carry = 0;
                        }
                        --index;
                }
        }
        return str;
}

int main() {
        int n = 1000100;
        char *str = decimalToBinary(n);
        printf("%s", str);
        return 0;
}

