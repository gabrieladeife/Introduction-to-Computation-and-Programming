#include <stdio.h>


int main() {
	int x = 0;
	int sum = 0;
	puts("Please enter a positive integer: ");
	scanf_s("%d", &x);
	do {
		if (x % 5 == 0) {
			sum += x;
		}
		x--;
	} while (x > 0);
	//checks if number is divisible by 5 and reduces the value of the entered integer until it reaches 1 and exits.
	printf("%d", sum);
	//prints total value of numbers divisible by 5.
	return 0;
}