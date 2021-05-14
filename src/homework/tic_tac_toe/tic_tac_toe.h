//h
#include <string>
#include <vector>

using namespace std;

class TicTacToe
{
    public:
        bool game_over();
        void mark_board(int position);
        void start_game(string first_player);

        void display_board() const;
        string get_player() const;
        string get_winner() const;

    private:
        bool check_board_full();
        void clear_board();
        void set_next_player();
        void set_winner();

        bool check_column_win() const;
        bool check_row_win() const;
        bool check_diagonal_win() const;

        vector <string> pegs {9, " "};
        string player;
        string winner;
};