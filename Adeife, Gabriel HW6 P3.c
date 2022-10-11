#include <stdio.h>
#include <stdlib.h>

int sumOfRange(int start, int end) {
	if (start < 0) {
		return abs(start) + end + 1;
	}
	else return start + end;
}

int main() {
	int s;
	int e;
	puts("Enter the start of the range:");
	scanf_s("%d", &s);
	puts("Enter the end of the range:");
	scanf_s("%d", &e);

	printf("The sum of the numbers in the range is %d", sumOfRange(s, e));
}