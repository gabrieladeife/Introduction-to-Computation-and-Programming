#include <stdio.h>

int main() {
	int val;
	puts("Please enter an integer greater than 1:");
	scanf_s("%d", &val);
	//User enters a value greater than 1
	while (val >= 1) {
		printf("%d\n", val);
		val--;
	} 
	//Prints the value entered and decreases every iteration until the value = 1
	return 0;
}