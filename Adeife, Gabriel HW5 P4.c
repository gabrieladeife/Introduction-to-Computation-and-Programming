#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	float a, b, c;
	puts("Please enter 3 values for A, B, and C");
	scanf_s("%f%f%f", &a, &b, &c);
	float discriminant = (b * b) - (4 * a * c);
	
	float root1 = ((-b) + sqrt(discriminant)) / (2.0 * a);
	float root2 = ((-b) - sqrt(discriminant)) / (2.0 * a);
	if (a == 0) puts("Cannot divide by 0");
	if (discriminant < 0) puts("There are no real roots");
		else if (discriminant == 0.0) { 
			printf("%f",root1); 
		}
		else if (discriminant > 0.0) {
		printf("\n%f, %f", root1, root2);
	}
}