//h
#include "tic_tac_toe.h"
#ifndef TIC_TAC_TOE_3
#define TIC_TAC_TOE_3

#include<string>
#include<vector>

class TicTacToe3 : public TicTacToe
{
public:
    TicTacToe3() : TicTacToe(3) {}
    friend std::ostream& operator<<(std::ostream & out, TicTacToe3 &g);
    friend std::istream& operator>>(std::istream & in, TicTacToe3 &g);
private:
    bool check_column_win() override;
    bool check_row_win() override;
    bool check_diagonal_win() override;

};

#endif // !TIC_TAC_TOE_3
