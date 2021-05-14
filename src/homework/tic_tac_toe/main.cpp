#include "tic_tac_toe.h"
#include "tic_tac_toe.cpp"
#include <iostream>

using namespace std;

int main() 
{
	string choice;
	int position;
	TicTacToe game;

	do
	{
		cout << "Enter X or O to choose the first-player: ";
		cin >> choice;

		if (choice== "x")
		{
			choice == "X";
		}
		else if (choice == "o")
		{
			choice = "O";
		}
	}
	while (!(choice == "X" || choice == "O"));

	game.start_game(choice);

	do
{
	cout << "It's your turn player " << game.get_player() << ". Choose position on the board between 1 and 9: ";
	cin >> position;

	while (position > 10 || position < 0)
	{
		cout << "Invalid selection, choose between 1 and 9: ";
		cin >> position;
	}

	game.mark_board(position);
	game.display_board();

}
while (!(game.game_over()));

cout << "GAME OVER!!" << '\n';

	return 0;
}