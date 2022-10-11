#include <stdio.h> 

void printSal(double* salArr[]) {
	double *ptr = &salArr[0];

	for (int i = 0; i < 5; i++) {
		printf("%.0f\n", *ptr * 1.05);
		ptr++;
	}
}

int main() { 
	double sal[5] = {1500, 3000, 2500, 3300, 5000}; 
	printSal(sal);
} 