int string_length(const char *str) {
	int countl = 0;
	while (*str++) {
		++countl;
	}
	return countl;
}
