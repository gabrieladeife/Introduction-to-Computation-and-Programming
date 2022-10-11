#include <stdio.h>

size_t StringLengthIndex(const char* sPtr) {
	int i = 0;
	size_t count = 0;
	while (sPtr[i] != '\n') {
		count++;
		i++;
	}
	return count;
}


size_t StringLengthPointer(const char* sPtr) {
	int i = 0;
	size_t count = 0;
	while (*(sPtr + i) != '\n') {
		count++;
		i++;
	}
	return count;
}

int main() {
	const char arr[100];
	printf("Enter a string: ");
	fgets(arr, sizeof arr, stdin);
	size_t InNum = StringLengthIndex(arr);
	printf("According to StringLengthIndex the string length is: %u\n", InNum);
	size_t pNum = StringLengthPointer(arr);
	printf("According to StringLengthPointer the string length is: %d\n", pNum);
}