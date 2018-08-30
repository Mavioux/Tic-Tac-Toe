#ifndef GAMES_HPP_INCLUDED
#define GAMES_HPP_INCLUDED

#include "Board.hpp"
#include "AI.hpp"
#include "unfair_AI.hpp"
#include <iostream>

using namespace std;

string player, ai;
int flag = 1;
int victory_flag = 1;

int game(Board &boarding_map) {

    int choice, char_choice, input;
    player = "X";
    ai = "O";

    cout << "\t\t  _________________________ " << endl;
    cout << "\t\t | Welcome to Tic-Tac-Toe! | \t\t" << endl;
    cout << "\t\t | Powered by Mavioux.     | \t\t" << endl;
    cout << "\t\t | Can you beat the beast? | \t\t" << endl;
    cout << "\t\t |_________________________|" << endl;


    while(1)
    {
        cout << endl << endl << "\tX_______________________________________________O" << endl;
        cout << "\tThis is the main menu! What would you like to do?\t" << endl;
        cout << "\t1) Play a game against the AI.\t" << endl;
        cout << "\t2) Change difficulty.\t" << endl;
        cout << "\t3) Choose 'X' or 'O'.\t" << endl;
        cout << "\t4) Quit game.\t" << endl;
        cin >> choice;

        switch(choice)
        {
        case 1:
            boarding_map.clear_board();
            boarding_map.number_board();
            cout << endl << endl;
            boarding_map.print_board();


            input = 0;

            cout << "Choose block." << endl;
            cin >> input;

            while(boarding_map.board[input] == "X" || boarding_map.board[input] == "O")
            {
                cout << "Block is occupied." << endl << endl;
                cout << "Choose block." << endl;
                cin >> input;
            }

            boarding_map.board[input] = player;

            for(int i = 0; i < 4; i++)
            {
                if(!flag)
                    artificial_intelligence(boarding_map, i, player, ai, input);
                else
                    unfair_artificial_intelligence(boarding_map, i, player, ai, input);


                boarding_map.print_board();

                cout << endl << endl;

                //Conditions for player win
                if (boarding_map.board[1] == player && boarding_map.board[2] == player && boarding_map.board[3] == player)
                {
                    victory_flag = 0;
                    cout << "\t\tPlayer wins! Congrats!" << endl;
                    goto Menu;
                }
                if (boarding_map.board[4] == player && boarding_map.board[5] == player && boarding_map.board[6] == player)
                {
                    victory_flag = 0;
                    cout << "\t\tPlayer wins! Congrats!" << endl;
                    goto Menu;
                }
                if (boarding_map.board[7] == player && boarding_map.board[8] == player && boarding_map.board[9] == player)
                {
                    victory_flag = 0;
                    cout << "\t\tPlayer wins! Congrats!" << endl;
                    goto Menu;
                }
                if (boarding_map.board[1] == player && boarding_map.board[4] == player && boarding_map.board[7] == player)
                {
                    victory_flag = 0;
                    cout << "\t\tPlayer wins! Congrats!" << endl;
                    goto Menu;
                }
                if (boarding_map.board[2] == player && boarding_map.board[5] == player && boarding_map.board[8] == player)
                {
                    victory_flag = 0;
                    cout << "\t\tPlayer wins! Congrats!" << endl;
                    goto Menu;
                }
                if (boarding_map.board[3] == player && boarding_map.board[6] == player && boarding_map.board[9] == player)
                {
                    victory_flag = 0;
                    cout << "\t\tPlayer wins! Congrats!" << endl;
                    goto Menu;
                }
                if (boarding_map.board[4] == player && boarding_map.board[5] == player && boarding_map.board[6] == player)
                {
                    victory_flag = 0;
                    cout << "\t\tPlayer wins! Congrats!" << endl;
                    goto Menu;
                }
                if (boarding_map.board[1] == player && boarding_map.board[5] == player && boarding_map.board[9] == player)
                {
                    victory_flag = 0;
                    cout << "\t\tPlayer wins! Congrats!" << endl;
                    goto Menu;
                }
                if (boarding_map.board[3] == player && boarding_map.board[5] == player && boarding_map.board[7] == player)
                {
                    victory_flag = 0;
                    cout << "\t\tPlayer wins! Congrats!" << endl;
                    goto Menu;
                }


                //Conditions for ai win
                if (boarding_map.board[1] == ai && boarding_map.board[2] == ai && boarding_map.board[3] == ai)
                {
                    victory_flag = 0;
                    cout << "\t\tComputer wins! You lost!" << endl;
                    goto Menu;
                }
                if (boarding_map.board[4] == ai && boarding_map.board[5] == ai && boarding_map.board[6] == ai)
                {
                    victory_flag = 0;
                    cout << "\t\tComputer wins! You lost!" << endl;
                    goto Menu;
                }
                if (boarding_map.board[7] == ai && boarding_map.board[8] == ai && boarding_map.board[9] == ai)
                {
                    victory_flag = 0;
                    cout << "\t\tComputer wins! You lost!" << endl;
                    goto Menu;
                }
                if (boarding_map.board[1] == ai && boarding_map.board[4] == ai && boarding_map.board[7] == ai)
                {
                    victory_flag = 0;
                    cout << "\t\tComputer wins! You lost!" << endl;
                    goto Menu;
                }
                if (boarding_map.board[2] == ai && boarding_map.board[5] == ai && boarding_map.board[8] == ai)
                {
                    victory_flag = 0;
                    cout << "\t\tComputer wins! You lost!" << endl;
                    goto Menu;
                }
                if (boarding_map.board[3] == ai && boarding_map.board[6] == ai && boarding_map.board[9] == ai)
                {
                    victory_flag = 0;
                    cout << "\t\tComputer wins! You lost!" << endl;
                    goto Menu;
                }
                if (boarding_map.board[4] == ai && boarding_map.board[5] == ai && boarding_map.board[6] == ai)
                {
                    victory_flag = 0;
                    cout << "\t\tComputer wins! You lost!" << endl;
                    goto Menu;
                }
                if (boarding_map.board[1] == ai && boarding_map.board[5] == ai && boarding_map.board[9] == ai)
                {
                    victory_flag = 0;
                    cout << "\t\tComputer wins! You lost!" << endl;
                    goto Menu;
                }
                if (boarding_map.board[3] == ai && boarding_map.board[5] == ai && boarding_map.board[7] == ai)
                {
                    victory_flag = 0;
                    cout << "\t\tComputer wins! You lost!" << endl;
                    goto Menu;
                }

                cout << "Choose block." << endl;
                cin >> input;

                while(boarding_map.board[input] == "X" || boarding_map.board[input] == "O")
                {
                    cout << "Block is occupied." << endl << endl;
                    cout << "Choose block." << endl;
                    cin >> input;
                }

                boarding_map.board[input] = player;





            }


                cout << endl << endl;

                //Conditions for player win
                if (boarding_map.board[1] == player && boarding_map.board[2] == player && boarding_map.board[3] == player)
                {
                    victory_flag = 0;
                    cout << "\t\tPlayer wins! Congrats!" << endl;
                    goto Menu;
                }
                if (boarding_map.board[4] == player && boarding_map.board[5] == player && boarding_map.board[6] == player)
                {
                    victory_flag = 0;
                    cout << "\t\tPlayer wins! Congrats!" << endl;
                    goto Menu;
                }
                if (boarding_map.board[7] == player && boarding_map.board[8] == player && boarding_map.board[9] == player)
                {
                    victory_flag = 0;
                    cout << "\t\tPlayer wins! Congrats!" << endl;
                    goto Menu;
                }
                if (boarding_map.board[1] == player && boarding_map.board[4] == player && boarding_map.board[7] == player)
                {
                    victory_flag = 0;
                    cout << "\t\tPlayer wins! Congrats!" << endl;
                    goto Menu;
                }
                if (boarding_map.board[2] == player && boarding_map.board[5] == player && boarding_map.board[8] == player)
                {
                    victory_flag = 0;
                    cout << "\t\tPlayer wins! Congrats!" << endl;
                    goto Menu;
                }
                if (boarding_map.board[3] == player && boarding_map.board[6] == player && boarding_map.board[9] == player)
                {
                    victory_flag = 0;
                    cout << "\t\tPlayer wins! Congrats!" << endl;
                    goto Menu;
                }
                if (boarding_map.board[4] == player && boarding_map.board[5] == player && boarding_map.board[6] == player)
                {
                    victory_flag = 0;
                    cout << "\t\tPlayer wins! Congrats!" << endl;
                    goto Menu;
                }
                if (boarding_map.board[1] == player && boarding_map.board[5] == player && boarding_map.board[9] == player)
                {
                    victory_flag = 0;
                    cout << "\t\tPlayer wins! Congrats!" << endl;
                    goto Menu;
                }
                if (boarding_map.board[3] == player && boarding_map.board[5] == player && boarding_map.board[7] == player)
                {
                    victory_flag = 0;
                    cout << "\t\tPlayer wins! Congrats!" << endl;
                    goto Menu;
                }


                //Conditions for ai win
                if (boarding_map.board[1] == ai && boarding_map.board[2] == ai && boarding_map.board[3] == ai)
                {
                    victory_flag = 0;
                    cout << "\t\tComputer wins! You lost!" << endl;
                    goto Menu;
                }
                if (boarding_map.board[4] == ai && boarding_map.board[5] == ai && boarding_map.board[6] == ai)
                {
                    victory_flag = 0;
                    cout << "\t\tComputer wins! You lost!" << endl;
                    goto Menu;
                }
                if (boarding_map.board[7] == ai && boarding_map.board[8] == ai && boarding_map.board[9] == ai)
                {
                    victory_flag = 0;
                    cout << "\t\tComputer wins! You lost!" << endl;
                    goto Menu;
                }
                if (boarding_map.board[1] == ai && boarding_map.board[4] == ai && boarding_map.board[7] == ai)
                {
                    victory_flag = 0;
                    cout << "\t\tComputer wins! You lost!" << endl;
                    goto Menu;
                }
                if (boarding_map.board[2] == ai && boarding_map.board[5] == ai && boarding_map.board[8] == ai)
                {
                    victory_flag = 0;
                    cout << "\t\tComputer wins! You lost!" << endl;
                    goto Menu;
                }
                if (boarding_map.board[3] == ai && boarding_map.board[6] == ai && boarding_map.board[9] == ai)
                {
                    victory_flag = 0;
                    cout << "\t\tComputer wins! You lost!" << endl;
                    goto Menu;
                }
                if (boarding_map.board[4] == ai && boarding_map.board[5] == ai && boarding_map.board[6] == ai)
                {
                    victory_flag = 0;
                    cout << "\t\tComputer wins! You lost!" << endl;
                    goto Menu;
                }
                if (boarding_map.board[1] == ai && boarding_map.board[5] == ai && boarding_map.board[9] == ai)
                {
                    victory_flag = 0;
                    cout << "\t\tComputer wins! You lost!" << endl;
                    goto Menu;
                }
                if (boarding_map.board[3] == ai && boarding_map.board[5] == ai && boarding_map.board[7] == ai)
                {
                    victory_flag = 0;
                    cout << "\t\tComputer wins! You lost!" << endl;
                    goto Menu;
                }

                if(victory_flag) {
                    victory_flag = 1;
                    cout << "\t\tIt's a tie!" << endl;
                }




Menu:
            cout << endl << endl;
            boarding_map.print_board();

            break;


        case 2:
            cout << "Press 0 for normal or 1 for unfair" << endl;
            cin >> flag;
            break;

        case 3:
            cout << "\t\tPress 1 for X or 2 for O." << endl;
            cin >> char_choice;

            switch(char_choice)
            {
            case 1:
                player = "X";
                ai = "O";
                break;
            case 2:
                player = "O";
                ai = "X";
                break;
            default:
                player = "X";
                ai = "O";
                break;
            }
            break;

        case 4:
            cout << "Quitting..." << endl << "pussy..." << endl;
            return 0;
            break;

        }

    }
}

#endif // GAMES_HPP_INCLUDED
