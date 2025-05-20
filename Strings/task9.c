#include <string.h>
#include <stdio.h>
char* str_cat(char *str1, const char *str2) {
        if (strlen(str1) + strlen(str2) < sizeof(str1)) {
                printf("Error");
        }
        int size1 = strlen(str1) - 1;
        str1 = str1 + size1;
        while(*str2) {
                *str1 = *str2;
                str1++;
                str2++;
        }
        *str1 = '\0';
        return str1;
}

