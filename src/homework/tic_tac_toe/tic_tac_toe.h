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
   
  // Return the next_player value
  string get_player()const { return player; }
  void display_board()const;
  
private:
  //Set next_player. If private variable player X, player is O else player is X
  void set_next_player();
  bool check_board_full();
  void clear_board();
  std::vector<string> pegs{ 9, " " };
  //Class member variable
  string player;
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
