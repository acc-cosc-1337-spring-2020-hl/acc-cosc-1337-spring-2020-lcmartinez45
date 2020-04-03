//tic_tac_toe.h
#include<string>
#include<iostream>
#include<vector>

using std::string; using std::cout;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
class TicTacToe
{
public:
	TicTacToe() = default;
    bool game_over();
	void start_game(string first_player);
	void mark_board(int position);
    string get_player()const { return player; }
    void display_board()const;
    string get_winner() { return winner; }
  
private:
    void set_next_player();
    bool check_board_full();
    void clear_board();
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner();
    
    //Class member variable
    std::vector<string> pegs{ 9, " " };
    string player;
    string winner;
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
