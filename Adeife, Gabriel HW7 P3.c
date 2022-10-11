#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdio.h>

int main() {
	srand(time(0));
	int arr[3][3];
	int size = 3;
	int sum = 0;
	puts("Array:");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			arr[i][j] = rand() % 101 - 50;
			printf("%d\t", arr[i][j]);
		}
		puts("");
	}
	
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == j) {
				sum += arr[i][j];
			}
			if ((i + j) == (size - 1)) { sum += arr[i][j]; }

			if (size % 3 == 0) {
				if (i == size % 2 && j == size % 2) sum -= arr[i][j];
			}
		}
	}
		printf("Sum = %d", sum);
}