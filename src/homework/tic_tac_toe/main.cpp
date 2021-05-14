#include "tic_tac_toe.h"
#include "tic_tac_toe.cpp"
#include <iostream>

using namespace std;

int main() 
{
	string choice;
	string play_again;
	int position;
	TicTacToe game;

do
{
	do
	{
		cout << "Enter O or X to be the first player: ";
		cin >> choice;

		if (choice == "x")
		{
			choice = "X";
		}
		else if (choice == "o")
		{
			choice = "O";
		}
	} while (!(choice == "X" || choice == "O"));

	game.start_game(choice);

	do
	{
		cout << "It's your turn player " << game.get_player() << ". Choose a position on the board between 1 and 9, please.";
		cin >> position;

		while (position > 10 || position < 0)
	{
		cout << "Invalid position, please enter a number between 1 and 9: ";
		cin >> position;
	}

	game.mark_board(position);
	game.display_board();

} while (!(game.game_over()));

cout << "GAME OVER!!" << '\n';
cout << "Congratulations player " << game.get_winner() << '\n';

cout << "Press 'Y' to play again: ";
cin >> play_again;
} while (play_again == "Y" || play_again == "y");

	return 0;
}