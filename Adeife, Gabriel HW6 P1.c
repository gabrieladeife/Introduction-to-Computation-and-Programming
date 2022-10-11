#include <stdio.h>
#include <math.h>

double f(double x) {
	double sum = 0;
	for (int i = 1; i <= 20; i++) {
		sum += pow(-1, i+1) * (pow(x, i) / (i));
	}
	return sum;
}

int main() {
	printf("f(0.3) = %f\n", f(0.3));
	printf("f(0.5) = %f\n", f(0.5));
	printf("f(0.8) = %f\n", f(0.8));
	return 0;
}