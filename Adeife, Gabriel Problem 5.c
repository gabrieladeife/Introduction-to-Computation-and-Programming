#include <stdio.h>

int main() {
	int x = 0;
	int y = 0;

	puts("Please enter two integer values for x and y:");
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	int z = (2 * x * x) + (3 * y); //sum of x and y
	printf("%d\n", z);
	return 0;
}