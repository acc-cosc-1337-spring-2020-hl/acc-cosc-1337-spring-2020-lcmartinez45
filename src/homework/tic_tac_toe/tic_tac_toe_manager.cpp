//cpp
#include"tic_tac_toe_manager.h"

void TicTacToeManager::save_game(TicTacToe b)
{
    games.push_back(b);
    update_winner_count(b.get_winner());
}

void TicTacToeManager::update_winner_count(string winner)
{
    if (winner == "X")
        {
            x_win += 1;
        }
    else if (winner == "O")
        {
            o_win += 1;
        }
    else
    {
        ties += 1;
    }
}

void TicTacToeManager::get_winner_total()
{
    cout << "# of times X has won: " << x_win << "\n";
    cout << "# of times O has won: " << o_win << "\n";
    cout << "# of times tie game: " << ties << "\n";
}

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
    for (auto game : manager.games)
    {
        game.display_board();
        cout << "Winner: " << game.get_winner();
    }
    return out;
}
