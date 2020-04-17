//h
#include "tic_tac_toe.h"
#include <vector>
#include<iostream>
#include<vector>
#include <functional>
#include <memory>

using std::vector;
using std::reference_wrapper;

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager
{
public:
	void save_game(const TicTacToe b);
	friend std::ostream& operator<<(std::ostream & out, const TicTacToeManager &manager);
    void get_winner_total(int& x, int& o, int& t);
    
private:
    vector<std::reference_wrapper<TicTacToe>> games;
	int x_win = { 0 };
	int o_win = { 0 };
	int ties = { 0 };
    void update_winner_count(string winner);
};

#endif // !TIC_TAC_TOE_MANAGER_H
