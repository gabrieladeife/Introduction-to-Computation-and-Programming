#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int main() {
	srand(time(0));
	int arr[100];
	for (int i = 0; i < 100; i++) {
		arr[i] = rand() % 999 + 1;
	}
	puts("Element\tValue");
	for (int i = 1; i < 100; i++) {
		if (i % 5 == 0) {
			printf("%d\t%d\n", i, arr[i]);
		}
		if (i == 99)printf("%d\t%d\n", i+1, arr[i]);
	}
}