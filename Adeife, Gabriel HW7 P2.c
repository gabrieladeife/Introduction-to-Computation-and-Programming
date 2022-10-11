#include <stdio.h>

void printArray(int arr[], int size) {
	if (size == -1) return;
	printf("%d\t", arr[size]);
	printArray(arr, size - 1);
}

int main() {
	int arr[10] = { 3, 10, 5, 11, 12, 17, 19 , 20, 30, 7 };
	size_t s = sizeof(arr) / sizeof(int);
	printArray(arr, s - 1);
}