//tic_tac_toe.cpp
#include "tic_tac_toe.h"

/*
 1) first_player function argument value must be X or O; otherwise, throw an Error exception when value is not X or O.  Error Message: Player must be X or O.
 2)In function set player(private variable) to first_player function argument.
 */
void TicTacToe::start_game(string first_player)
{
  if(first_player == "O" || first_player == "X")
  {
    player = first_player;
    
  }else{
      throw Error("Player must be X or O.\n");
  }
}

/*
 1) Value of int must be in the range 1 to 9; otherwise, throw an Error exception if value not in this range. Error Message: Position must be 1 to 9.
 2) Private data player can't be empty "", throw an Error exception if player variable is "". Error Message: Must start game first.
 3) Call set_next_player private function
 */
void TicTacToe::mark_board(int position)
{
  if (position < 1 && position > 9)
  
    throw Error("\nPosition must be 1 to 9.");

  if (player == "")
  
    throw Error("\nMust start game first.");
  
  set_next_player();
}

void TicTacToe::set_next_player()
{
  if(player == "X")
  {
    next_player = "O";
  }
  else
  {
    next_player = "X";
  }
}
