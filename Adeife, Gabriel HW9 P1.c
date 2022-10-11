#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define SIZE 100

int main() {
	char str[SIZE];
	int alp, num, i;
	alp = 0;
	num = 0;
	i = 0;

	puts("Count total number of alphabets and digits");
	puts("------------------------------------------");
	printf("Input the string: ");
	fgets(str, sizeof str, stdin);

	while (str[i] != '\0') {
		if (isalpha(str[i]))alp++;
		if (isdigit(str[i]))num++;
		i++;
	}

	printf("Number of alphabetical characters in the string is: %d\n", alp);
	printf("Number of digits in the string is: %d\n", num);
}