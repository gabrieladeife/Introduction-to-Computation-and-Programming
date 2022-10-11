#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdio.h>

int main() {
	srand(time(0));
	int arr[3][3];
	int size = 3;
	puts("Matrix:");
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			arr[i][j] = rand() % 19 + 1;
			printf("%d\t", arr[i][j]);

		}
		puts("");
	}
    int colMax, rowMin;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            rowMin = colMax = arr[i][j];

            for (int k = 0; k < size; k++) {
                if (arr[i][k] < rowMin) {
                    rowMin = arr[i][k];
                }
            }

            for (int k = 0; k < size; k++) {
                if (arr[k][j] > colMax) {
                   colMax = arr[k][j];
                }
            }
                if (rowMin == arr[i][j] && colMax == arr[i][j]) {
                    printf("The lucky number is: %d \n", rowMin);
                }
            }
        }

}