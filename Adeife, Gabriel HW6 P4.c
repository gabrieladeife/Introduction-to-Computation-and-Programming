#include <stdio.h>

void g(int n, int min, int max) {
	if (n == 0) {
		return;
	}
	else {
		printf("Enter course grade %d:\n", n);
		int gr;
		scanf_s("%d", &gr);
		if (min > gr) min = gr;
		if (max < gr) max = gr;
		g(n - 1, min, max);
		printf("%d\n", gr);
		if (n == 1) {
			printf("Minimum = %d\n", min);
			printf("Maximum = %d\n", max);
			printf("%d\n", gr);
		}
	}
}

int main() {
	int n;
	int min = 10000;
	int max = -10000;
	puts("Enter the number of grades:");
	scanf_s("%d", &n);
	g(n, min, max);

	return 0;
}