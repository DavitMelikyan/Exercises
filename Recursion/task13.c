#include <stdio.h>

char upper(char *str, const int size, int i) {
	if (str[i] >= 65 && str[i] <= 90) {
               	return str[i];
        }
        if (i < size) {
                upper(str, size, i + 1);
        }
	return '\0';
}
