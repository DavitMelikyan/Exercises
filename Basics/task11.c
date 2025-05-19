#include <stdio.h>

int main() {
	float hours = 0;
	int mins = 0;	

	printf("Enter hours: ");
	scanf("%f", &hours);
	
	mins = hours * 60;
	printf("%f hours = %d minutes\n", hours, mins);

	return 0;
}

