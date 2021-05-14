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

    private:
        bool check_board_full();
        void clear_board();
        void set_next_player();

        vector <string> pegs {9, " "};
        string player;
};