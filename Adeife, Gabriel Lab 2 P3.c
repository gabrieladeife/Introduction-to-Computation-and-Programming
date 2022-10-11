#include <stdio.h>

int main() {
	int celsius = -50;
	float fahrenheit;
	//initializes celsius and fahrenheit variables
	puts("||==================||");
	puts("||Celsius|Fahrenheit||");
	puts("||------------------||");
	//creates table header
	while (celsius <= 50) {
		fahrenheit = ((9.0 / 5.0) * celsius) + 32;
		printf("||%-7d|%+10.1f||\n", celsius, fahrenheit);
		celsius++;
	}
	//converts from celsius to fahrenheit at a maximum celsius value of 50
	puts("||==================||");
	//closes table
	return 0;
}