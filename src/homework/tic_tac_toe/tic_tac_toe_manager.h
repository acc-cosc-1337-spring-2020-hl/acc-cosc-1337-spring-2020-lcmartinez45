//h
#include "tic_tac_toe.h"
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include<vector>
#include<iostream>
#include<memory>

using std::string; using std::vector; using std::unique_ptr;

class TicTacToeManager
{
public:
    TicTacToeManager() = default;
    void save_game(unique_ptr<TicTacToe>& game);
    friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& m);
    int get_x_wins() { return x_wins; }
    int get_o_wins() { return o_wins; }
    int get_ties() { return ties; }
private:
    vector<unique_ptr<TicTacToe>> games;
    void update_winner_count(std::string winner);
    int o_wins{ 0 }, x_wins{ 0 }, ties{ 0 };
};

#endif // !TIC_TAC_TOE_MANAGER_H
