#include <stdio.h>

int main() {
	int val;
	puts("Please enter an integer greater than 1");
	scanf_s("%d", &val);

	while (val > 1) {
		puts("%d", val);
		val--;
	}
	return 0;
}