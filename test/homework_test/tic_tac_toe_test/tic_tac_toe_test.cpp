#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include <vector>
#include <string>

using namespace std;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test first player set to X")
{
    TicTacToe game;
    game.start_game("X");

    REQUIRE(game.get_player() == "X");
}

TEST_CASE("Test first player set to O")
{
    TicTacToe game;
    game.start_game("O");

    REQUIRE(game.get_player() == "O");
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

	REQUIRE(game.get_winner() == "C");
}

TEST_CASE("Test column one win")
{
    TicTacToe game;
    game.start_game("X");

    game.mark_board(1);
    REQUIRE(game.game_over() == false);

    game.mark_board(2);
    REQUIRE(game.game_over() == false);

    game.mark_board(4);
    REQUIRE(game.game_over() == false);

    game.mark_board(3);
    REQUIRE(game.game_over() == false);

    game.mark_board(7);
    REQUIRE(game.game_over() == true);
}

TEST_CASE("Test column two win")
{
    TicTacToe game;
    game.start_game("X");

    game.mark_board(2);
    REQUIRE(game.game_over() == false);

    game.mark_board(1);
    REQUIRE(game.game_over() == false);

    game.mark_board(5);
    REQUIRE(game.game_over() == false);

    game.mark_board(3);
    REQUIRE(game.game_over() == false);

    game.mark_board(8);
    REQUIRE(game.game_over() == true);
}

TEST_CASE("Test column three win")
{
    TicTacToe game;
    game.start_game("X");

    game.mark_board(3);
    REQUIRE(game.game_over() == false);

    game.mark_board(1);
    REQUIRE(game.game_over() == false);

    game.mark_board(6);
    REQUIRE(game.game_over() == false);

    game.mark_board(4);
    REQUIRE(game.game_over() == false);

    game.mark_board(9);
    REQUIRE(game.game_over() == true);
}

TEST_CASE("Test row one win")
{
    TicTacToe game;
    game.start_game("X");

    game.mark_board(1);
    REQUIRE(game.game_over() == false);

    game.mark_board(4);
    REQUIRE(game.game_over() == false);

    game.mark_board(2);
    REQUIRE(game.game_over() == false);

    game.mark_board(5);
    REQUIRE(game.game_over() == false);

    game.mark_board(3);
    REQUIRE(game.game_over() == true);
}

TEST_CASE("Test row two win")
{
    TicTacToe game;
    game.start_game("X");

    game.mark_board(4);
    REQUIRE(game.game_over() == false);

    game.mark_board(1);
    REQUIRE(game.game_over() == false);

    game.mark_board(5);
    REQUIRE(game.game_over() == false);

    game.mark_board(2);
    REQUIRE(game.game_over() == false);

    game.mark_board(6);
    REQUIRE(game.game_over() == true);
}

TEST_CASE("Test row three win")
{
    TicTacToe game;
    game.start_game("X");

    game.mark_board(7);
    REQUIRE(game.game_over() == false);

    game.mark_board(1);
    REQUIRE(game.game_over() == false);

    game.mark_board(8);
    REQUIRE(game.game_over() == false);

    game.mark_board(2);
    REQUIRE(game.game_over() == false);

    game.mark_board(9);
    REQUIRE(game.game_over() == true);
}

TEST_CASE("Test top left diagonal win")
{
    TicTacToe game;
    game.start_game("X");

    game.mark_board(1);
    REQUIRE(game.game_over() == false);

    game.mark_board(2);
    REQUIRE(game.game_over() == false);

    game.mark_board(5);
    REQUIRE(game.game_over() == false);

    game.mark_board(3);
    REQUIRE(game.game_over() == false);

    game.mark_board(9);
    REQUIRE(game.game_over() == true);
}

TEST_CASE("Test bottom left diagonal win")
{
    TicTacToe game;
    game.start_game("X");

    game.mark_board(7);
    REQUIRE(game.game_over() == false);

    game.mark_board(1);
    REQUIRE(game.game_over() == false);

    game.mark_board(5);
    REQUIRE(game.game_over() == false);

    game.mark_board(2);
    REQUIRE(game.game_over() == false);

    game.mark_board(3);
    REQUIRE(game.game_over() == true);
}