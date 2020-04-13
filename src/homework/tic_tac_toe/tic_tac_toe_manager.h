//h
#include<iostream>
#include<vector>
#include "tic_tac_toe.h"
using std::vector;

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager {
public:
	void save_game(const TicTacToe b);
	friend std::ostream& operator<<(std::ostream & out, const TicTacToeManager &manager);
private:
	vector<TicTacToe> games;
	int x_win = 0;
	int o_win = 0;
	int ties = 0;
	void update_winner_count(string winner);
};
#endif // !TIC_TAC_TOE_MANAGER_H

