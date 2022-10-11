#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void lottery(int userEntry) {
	int lottoNum = (rand() % 89) + 10; //initializes a lottery number ranging from 10 to 99
	if (userEntry == lottoNum) {
		printf("The lottery number is %d\nExact match:\n", lottoNum);
		puts("Youre awarded $10,000!");
		exit;
	}
	if ((userEntry % 10 && userEntry / 10) == (lottoNum % 10 && lottoNum / 10)) {
		printf("The lottery number is %d\nMatching numbers:\n", lottoNum);
		puts("Youre awarded $3,000!");
		exit; //avoids overlapping money awards.
	}
	if (lottoNum % 10 == userEntry % 10 || lottoNum % 10 == userEntry / 10 || lottoNum % 10 == userEntry % 10 || lottoNum / 10 == userEntry / 10) {
		printf("The lottery number is %d\nMatching digit:\n", lottoNum);
		puts("Youre awarded $1,000!");
	}
	//awards money based on whether or not the entry meets the criteria. 

	

}
int main() {
	int userEntry = 0;
	
	while (userEntry <= 10 || userEntry >= 99) { //if the entry is not within the range, asks the user to re-enter a number.
		puts("Enter your lottery pick(two digits):");
		scanf_s("%d", &userEntry);
	}
	lottery(userEntry);
	
}