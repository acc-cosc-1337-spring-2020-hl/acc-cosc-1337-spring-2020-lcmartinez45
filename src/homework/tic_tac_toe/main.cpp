//main.cpp
#include "tic_tac_toe.h"
#include<iostream>
#include<string>
using std::cout; using std::cin;
/*
The program will call the start_game function with argument O or X to indicate first player and will keep track of the next player while players take turns marking the board until user opts out.
 1) Prompt the user for first player
 2) Start the game
 3) In a user-controlled loop prompt the user for a position (int type) and call the mark_board tic tac toe class member function. Loop continues while user opts in.
 4) Use a try catch block to check for an Error return when user enters incorrect data.
 */
int main()
{
    int choice = 1;
    do
    {
        string first_player;
        cout << "Hello welcome to tictactoe game! Please enter first player, \"X\" or \"O\"." << "\n";
        cin >> first_player;
        
        while (!(first_player == "O" || first_player == "X"))
        {
            cout << "ERROR, sorry you must input X or O: ";
            cin >> first_player;
        }
        TicTacToe game;
        game.start_game(first_player);

        do
        {
            int position;
            cout << "Enter a number from 1-9 to place your spot on the board." << "\n";
            cin >> position;
        
            try
            {
                game.mark_board(position);
                game.display_board();
            }
            catch (Error e)
            {
                cout << e.get_message();
            }
        
        } while (!game.game_over());
        cout << "\nGAME OVER!!!" << "\n";
        cout << "\nContinue? 1 for Yes: " << "\n";
        cin >> choice;
        
    }while (choice == 1);
        
    cout << "\nThanks for playing!" << "\n";
    
    return 0;
}


