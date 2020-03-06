//tic_tac_toe.h
#include<string>
#include<iostream>

using std::string;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
class TicTacToe
{
public:
    TicTacToe() = default;
  void start_game(string first_player);
  void mark_board(int position);
   
  // Return the next_player value
  string get_player()const { return next_player; }
  
private:
    string next_player{};
    
  //Class member variable
    string player{};
   
  //Set next_player. If private variable player X, player is O else player is X
  void set_next_player();
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
