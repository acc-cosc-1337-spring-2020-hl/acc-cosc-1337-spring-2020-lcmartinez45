//main.cpp
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include<iostream>
#include<string>
using std::cout; using std::cin;

int main()
{
    int choice = 1;
    TicTacToeManager game_manager;
    do
    {
        string first_player;
        cout << "Hello welcome to my TicTacToe Game!" << "\n";
        cout << "Please enter first player, \"X\" or \"O\"." << "\n";
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
            cin >> game;
        
            try
            {
                cout << game;
            }
            catch (Error e)
            {
                cout << e.get_message();
            }
        
        } while (!game.game_over());
            
            if (game.game_over()) {
            cout << "Game over! \n";
            game_manager.save_game(game);
            cout << game_manager;
            game_manager.get_winner_total();
            cout << "\nContinue? 1 for Yes: " << "\n";
            cin >> choice;
            }
        
    }while (choice == 1);
        cout << "\nThank you for playing!" << "\n";
    
    return 0;
}


