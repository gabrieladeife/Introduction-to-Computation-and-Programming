#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void printYouWin() {
	puts("You win!");
}

void printYouLose() {
	puts("You lose.");
}

int monsterAttacks() {
	int n = rand() % 6 + 1;
	return n;
}

int heroAttacks(int atkBonus) {
	int ttlAtk = (rand() % 5 + 1) + atkBonus;

	return ttlAtk;
	//returns sum of heros attack and the bonus.
}
int main() {
	srand(time(NULL));
	int heroHP = 20;
	int monsterHP = 20;
	//initializes HP.
	int hHP = heroHP;
	int mHP = monsterHP;
	int round = 1;
	// stores HP for iteration purposes.
	while (heroHP > 0 && monsterHP > 0) {
		hHP = heroHP;
		mHP = monsterHP;
		heroHP -= monsterAttacks();
		monsterHP -= heroAttacks(rand() % 2);
		printf("\nROUND %d\n", round);
		puts("==============================");
		printf("The monster has been hit for %d\t Monster HP = %d\n", mHP - monsterHP, monsterHP);
		printf("The hero has been hit for %d\t Hero HP = %d\n", hHP - heroHP, heroHP);
		round++;
	}
	//iterates through the rounds of combat and ends when either HP falls below 0.
	if (heroHP > monsterHP) {
		printYouWin();
	}
	else printYouLose();
	//uses appropriate function based on if heros health is greater than monster health by the time loop is done iterating.

}