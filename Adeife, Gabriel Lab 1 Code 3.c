#include <stdio.h>

int main() {
	int a;
	printf("Please enter an integer: ");
	scanf_s("%d", &a); // Allows user to enter an integer
	if (a % 2 == 0) {
		printf("The square is: %d", a * a); //When if statement is true, that means the number is even and will be squared
	}
	else printf("The cube is: %d", a * a * a); //When if statement is false, that means the number is odd and will be cubed
	return 0;
}