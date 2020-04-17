//tic_tac_toe.cpp
#include "tic_tac_toe.h"
#include<iostream>

//Game over function
bool TicTacToe::game_over()
{
    if (check_column_win() || check_row_win() || check_diagonal_win())
    {
        set_winner();
        return true;
    }
    else if (check_board_full())
    {
        winner = "C";
        return true;
    }
    else
    {
        return false;
    }
}

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
      
      if(game_over() == false)
      {
          set_next_player();
      }
  }
  
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

//set the winner = to player
void TicTacToe::set_winner()
{
    if (player == "X")
    {
        winner = "O";
    }
    else { winner = "X"; }
}

//get winner overloaded function
std::ostream& operator<<(std::ostream& out,const TicTacToe &c)
{
    if (c.pegs.size() == 9)
    {
        cout << "\n";

        for (std::size_t i = 0; i < 9; i += 3)
        {
            out << c.pegs[i] << " | " << c.pegs[i + 1] << " | " << c.pegs[i + 2] << "\n";
        }
    }
        
    else
    {
        for (int i = 0; i < 16; i += 4)
        {
            out << c.pegs[i] << "|" << c.pegs[i + 1] << "|" << c.pegs[i + 2] << "|" << c.pegs[i + 3] << "\n";
        }
    }
    return out;
}

//set winner overloaded function
std::istream & operator>>(std::istream& in, TicTacToe &c)
{
    int position;
    cout << "Put your mark on the board using 1-9: \n";
    in >> position;
    c.mark_board(position);
        
    return in;
}
