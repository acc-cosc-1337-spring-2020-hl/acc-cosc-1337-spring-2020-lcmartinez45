#include "tic_tac_toe.h"
//tic_tac_toe.cpp
#include "tic_tac_toe.h"

/*
 1) first_player function argument value must be X or O; otherwise, throw an Error exception when value is not X or O.  Error Message: Player must be X or O.
 2)In function set player(private variable) to first_player function argument.
 */
void TicTacToe::start_game(string first_player)
{
  if(!(first_player == "O" || first_player == "X"))
  {
	  throw Error("Player must be X or O.\n");
    
  }else{
	  clear_board();
	  player = first_player;
  }
}

/*
 1) Value of int must be in the range 1 to 9; otherwise, throw an Error exception if value not in this range. Error Message: Position must be 1 to 9.
 2) Private data player can't be empty "", throw an Error exception if player variable is "". Error Message: Must start game first.
 3) Call set_next_player private function
 */
void TicTacToe::mark_board(int position)
{
  if (position < 1 || position > 9)
  {
    throw Error("\nPosition must be in range 1 to 9.");
  }
  else if (player == " ")
  {
    throw Error("\nMust start game first.");
  }
  else
  {
	  pegs[position - 1] = player;
	  set_next_player();
  }
  
}

void TicTacToe::display_board() const
{
	for (size_t i = 0; i < 9; i += 3)
	{
		cout << pegs[i] <<"|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";
	}

}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else if (player == "O")
    {
        player = "X";
    }
	else
	{
		throw Error("Error");
	}
}

//game over function
bool TicTacToe::game_over()
{
	return check_board_full();
}

bool TicTacToe::check_board_full()
{
	for (auto peg : pegs)
	{
		if (peg == " ")
		{
			return false;
		}
	}
	return true;
}

void TicTacToe::clear_board()
{
	for (auto &peg : pegs)
	{
		peg = " ";
	}
}