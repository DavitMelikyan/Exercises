char *str_cpy(char *str1, const char *str2) {
        while (*str2) {
                *str1 = *str2;
                ++str1;
                ++str2;
        }
        *str1 = *str2;
        return str1;
}
