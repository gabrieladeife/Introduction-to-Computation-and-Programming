#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define SIZE 100

int main() {
	char str[SIZE];
	char searchStr[SIZE];

	int aCnt = 0;

	printf("Input the string:");
	fgets(str, sizeof str, stdin);
	printf("\n\nEnter search string:");
	gets(searchStr);
	char* sPtr = strstr(str, searchStr);

	while (sPtr) {
		aCnt++;
		sPtr = strstr(sPtr + 1, searchStr);
	}
	printf("%d", aCnt);
}