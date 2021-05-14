#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include <vector>
#include <string>

using namespace std;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test if game over")
{
	TicTacToe game;
	vector<int> positions{1, 2, 3, 4, 5 , 6, 7, 8, 9};

	game.start_game("X");

	for (auto i: positions)
	{
		game.mark_board(i);

		if (i == 8)
		{
			REQUIRE(game.game_over() == true);
		}
		else
		{
			REQUIRE(game.game_over() == false);
		}
	}
}