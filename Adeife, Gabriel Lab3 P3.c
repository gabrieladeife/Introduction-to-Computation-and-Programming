#include <stdio.h>

int main() {
	int pos = 0;
	int neg = 0;
	int num;
	puts("Please enter any number of integer values, the program exits if the input entered is 0: ");
	do {
		scanf_s("%d", &num);
		if (num > 0) {
			pos++;
		}
		else if (num < 0) {
			neg++;
		}
	} while (num != 0);
	//checks for the positive and negative numbers and increments them by 1 respectively until exit condition is met.
	printf("The number of positives is %d \n The number of negatives is %d", pos, neg);
	return 0;
}