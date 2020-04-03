#include "tic_tac_toe.h"
//tic_tac_toe.cpp
#include "tic_tac_toe.h"

//Game over function
bool TicTacToe::game_over()
{
    if (check_column_win() == true)
    {
        return true;
    }
    else if (check_row_win() == true)
    {
        return true;
    }
    else if (check_diagonal_win() == true)
    {
        return true;
    }
    else if (check_board_full() == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

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
	  player = first_player;
      clear_board();
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
    throw Error("\nError: must be in range.");
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

//Display board function
void TicTacToe::display_board() const
{
	for (size_t i = 0; i < 9; i += 3)
	{
		cout << pegs[i] <<" | " << pegs[i + 1] << " | " << pegs[i + 2] << "\n";
	}
	cout << "\n";
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

void TicTacToe::clear_board()
{
	for (auto &peg : pegs)
	{
		peg = " ";
	}
}

void TicTacToe::set_winner()
{
    if (player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
}

bool TicTacToe::check_column_win()
{
    if (pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X")
    {
        return true;
    }
    else if (pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X")
    {
        return true;
    }
    else if (pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X")
    {
        return true;
    }
    else if (pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")
    {
        return true;
    }
    else if (pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O")
    {
        return true;
    }
    else if (pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool TicTacToe::check_row_win()
{
    if (pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X")
    {
        return true;
    }
    else if (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")
    {
        return true;
    }
    else if (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")
    {
        return true;
    }
    else if (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O")
    {
        return true;
    }
    else if (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")
    {
        return true;
    }
    else if (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool TicTacToe::check_diagonal_win()
{
    if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")
    {
        return true;
    }
    else if (pegs[6] == "X" && pegs[4] == "X" && pegs[2] == "X")
    {
        return true;
    }
    else if (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")
    {
        return true;
    }
    else if (pegs[6] == "O" && pegs[4] == "O" && pegs[2] == "O")
    {
        return true;
    }
    else
    {
        return false;
    }
}

