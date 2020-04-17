//tic_tac_toe.h
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
#include<string>
#include<iostream>
#include<vector>

using std::string; using std::cout;

class TicTacToe
{
public:
    TicTacToe() = default;
    TicTacToe(int size) : pegs{ size * size, " " } {}
    bool game_over();
	void start_game(string first_player);
	void mark_board(int position);
    string get_player()const { return player; }
    string get_winner() { return winner; }
    friend std::ostream& operator<<(std::ostream& out, const TicTacToe& c); //get winner
    friend std::istream& operator>>(std::istream& in, TicTacToe& c); //set winner
        
protected:
    std::vector<std::string> pegs;
    virtual bool check_column_win() { return false; }
    virtual bool check_row_win() { return false; }
    virtual bool check_diagonal_win() { return false; }
    string player;
    string winner; //X, O, C
    
private:
    void set_winner();
    void set_next_player();
    bool check_board_full();
    void clear_board();
};


class Error
{
public:
  //Constructor: initialized private variable message with function parameter msg
    Error(string msg) : message{ msg } {}
   
  //Returns the message private variable
    string get_message() { return message; }

private:
  //Class member variable
    string message;
};

#endif // !TIC_TAC_TOE_H
