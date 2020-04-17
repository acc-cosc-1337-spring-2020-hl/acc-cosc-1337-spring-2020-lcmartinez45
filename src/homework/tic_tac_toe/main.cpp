//main.cpp
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <vector>
#include<functional>
#include<iostream>
#include<string>
using std::cout; using std::cin; using std::string;

int main()
{
    int choice = 1;
    int position;
    TicTacToeManager manager;
    std::vector < std::reference_wrapper<TicTacToe>> games;
    do
    {
        int gameType = 0;
        cout << "Hello welcome to my TicTacToe Game!" << "\n";
        cout << "Do you want to play TicTacToe 3 or 4? " << "\n";
        cin >> gameType;
        string first_player;
        
        if (gameType == 3)
        {
            TicTacToe3 game;
            cout << "Please enter first player, \"X\" or \"O\"." << "\n";
            cin >> first_player;
        
            while (!(first_player == "O" || first_player == "X"))
            {
                try {
                    cout << "ERROR, sorry you must input X or O: ";
                    cin >> first_player;
                    game.start_game(first_player);
                }
                catch (Error e) {

                    cout << e.get_message();
                }
            }

        while (!game.game_over());
        }
        else{
            TicTacToe4 game;
                cout << "Please enter first player, \"X\" or \"O\"." << "\n";
                cin >> first_player;
            
                while (!(first_player == "O" || first_player == "X"))
                {
                    try {
                        cout << "ERROR, sorry you must input X or O: ";
                        cin >> first_player;
                        game.start_game(first_player);
                    }
                    catch (Error e) {

                        cout << e.get_message();
                    }
                }

            while (!game.game_over());
            
        manager.save_game(game);
        cout << "Game over! \n";
        cout << "The winner is: " << game.get_winner()<< "\n" ;
        cout << manager;
        cout << "\nContinue? 1 for Yes: " << "\n";
        cin >> choice;
        }
    }
    while (choice == 1);
        cout << manager<<"\n\n";
        cout << "\nThank you for playing!" << "\n";
    
    return 0;
}


