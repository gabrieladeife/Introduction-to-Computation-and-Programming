#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define SIZE 3

void print_board(char arr[SIZE][SIZE]) { //prints the board state
	printf("P1 (X) : P2 (O)\n\n");
	printf("The game is: \n\n");

	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", arr[0][0], arr[0][1], arr[0][2]);

	printf("_____|_____|_____\n");
	printf("     |     |     \n");

	printf("  %c  |  %c  |  %c  \n", arr[1][0], arr[1][1], arr[1][2]);

	printf("_____|_____|_____\n");
	printf("     |     |     \n");

	printf("  %c  |  %c  |  %c  \n", arr[2][0], arr[2][1], arr[2][2]);

	printf("     |     |     \n");
}


int main() {
	char board[3][3] = { { ' ', ' ', ' ' }, { ' ', ' ', ' ' }, {' ',' ',' ' } }; //initializes board with blank spaces.
	int player = 1;
	int choice;
	int choice2;
	int i = 1;
	char xo;

	do {
		print_board(board);

		player = (player % 2) ? 1 : 2;
		printf("\nPlayer %d, enter desired cell: ", player);
		scanf_s("%d%d", &choice, &choice2);

		xo = (player == 1) ? 'X' : 'O';
		//switches the mark between player 1 and 2

		if ((choice == 1 && choice2 == 1) && board[0][0] == ' ') { board[0][0] = xo; i++; }
		else if ((choice == 1 && choice2 == 2) && board[0][1] == ' ') { board[0][1] = xo; i++; }
		else if ((choice == 1 && choice2 == 3) && board[0][2] == ' ') { board[0][2] = xo; i++; }
		else if ((choice == 2 && choice2 == 1) && board[1][0] == ' ') { board[1][0] = xo; i++; }
		else if ((choice == 2 && choice2 == 2) && board[1][1] == ' ') { board[1][1] = xo; i++; }
		else if ((choice == 2 && choice2 == 3) && board[1][2] == ' ') { board[1][2] = xo; i++; }
		else if ((choice == 3 && choice2 == 1) && board[2][0] == ' ') { board[2][0] = xo; i++; }
		else if ((choice == 3 && choice2 == 2) && board[2][1] == ' ') { board[2][1] = xo; i++; }
		else if ((choice == 3 && choice2 == 3) && board[2][2] == ' ') { board[2][2] = xo; i++; }
		//checks if chosen location is valid, replaces the value of location if it is, and increments i.
		else {
			printf("\nInvalid, try again\n");
			player--; //keeps it to current player to retry
		}
		player++; //switches player

	} while (i < 10); //end condition, as board is 3 x 3 there should be no more than 9 valid moves.

	print_board(board);

	printf("\n Thank you for playing!");

}