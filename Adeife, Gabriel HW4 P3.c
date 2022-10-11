#include <stdio.h>

int main() {
	int n1;
	int n2;
	puts("Please enter two positive integers");
	scanf_s("%d%d", &n1, &n2);
	int i = (n1 > n2) ? n1 : n2;

	while (i > 1) {
		if ((n1 % i == 0) && (n2 % i == 0)) {
			printf("GCD = %d", i);
			break;
		}
		else i--;
	}
}