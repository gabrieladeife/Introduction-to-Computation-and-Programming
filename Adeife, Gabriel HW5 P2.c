#include <stdio.h>

int main() {
	int i;
	for (i = 1; i <= 100; i++) {
		if (i % 2 == 0) {
			printf("%d\t", i);
		}
		if (i % 10 == 0) {
			printf("\n");
		}
		else printf("");
	}
}