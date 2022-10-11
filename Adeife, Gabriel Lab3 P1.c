#include <stdio.h>


int main() {
	int x = 0;
	int sum = 0;
	puts("Please enter a positive integer: ");
	scanf_s("%d", &x);
	do {
		sum += x;
		x--;
	} while (x > 0 || x % 5);
	return 0;
}