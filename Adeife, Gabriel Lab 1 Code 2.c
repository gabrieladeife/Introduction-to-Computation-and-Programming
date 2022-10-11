#include <stdio.h>

int main() {
	int a;
	int b;
	printf("Please enter a number for the arrow head: ");
	scanf_s("%d", &a);
	printf("Please enter a number for the arrow body: ");
	scanf_s("%d", &b);

	printf("%5d\n%5d%d\n", a, a, a); //Prints the first part of the arrow head
	printf("%d%d%d%d%d%d%d\n", b, b, b, b, a, a, a); //Prints part of arrow body and arrow head
	printf("%d%d%d%d%d%d%d%d\n", b, b, b, b, a, a, a, a);
	printf("%d%d%d%d%d%d%d\n", b, b, b, b, a, a, a);
	//Prints rest of the arrow body
	printf("%5d%d\n%5d\n", a, a, a);
	//Finishes arrow head

	return 0;
}