#include <stdio.h>

void bin(int number) {
        if (number > 0) {
                bin(number / 2);
        }
        if ((number % 2) == 1) {
                printf("1");
        } else {
                printf("0");
        }
}
