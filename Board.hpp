#ifndef BOARD_HPP_INCLUDED
#define BOARD_HPP_INCLUDED

#include <iostream>
#include <map>

using namespace std;

class Board {

public:

    map <int, string> board;

    Board() {
        for(int i = 1; i < 10; i++) {
            board[i] = " ";
        }
    }

    void print_board() {
    cout << "\t\t" << " " << board[1] << " " << "|" << " " << board[2] << " " << "|" << " " << board[3] << " " << endl;
    cout << "\t\t" << "   |   |" << endl;
    cout << "\t\t" << "-----------"<< endl;
    cout << "\t\t" << "   |   |" << endl;
    cout << "\t\t" << " " << board[4] << " " << "|" << " " << board[5] << " " << "|" << " " << board[6] << " " << endl;
    cout << "\t\t" << "   |   |" << endl;
    cout << "\t\t" << "-----------"<< endl;
    cout << "\t\t" << "   |   |" << endl;
    cout << "\t\t" << " " << board[7] << " " << "|" << " " << board[8] << " " << "|" << " " << board[9] << " " << endl;
    cout << "\t\t" << "   |   |" << endl;

}

void clear_board() {
    for(int i = 1; i < 10; i++) {
        board[i] = " ";
    }
}

void number_board() {
    cout << "\t\t" << " " << "1" << " " << "|" << " " << "2" << " " << "|" << " " << "3" << " " << endl;
    cout << "\t\t" << "   |   |" << endl;
    cout << "\t\t" << "-----------"<< endl;
    cout << "\t\t" << "   |   |" << endl;
    cout << "\t\t" << " " << "4" << " " << "|" << " " << "5" << " " << "|" << " " << "6" << " " << endl;
    cout << "\t\t" << "   |   |" << endl;
    cout << "\t\t" << "-----------"<< endl;
    cout << "\t\t" << "   |   |" << endl;
    cout << "\t\t" << " " << "7" << " " << "|" << " " << "8" << " " << "|" << " " << "9" << " " << endl;
    cout << "\t\t" << "   |   |" << endl;
}




};





#endif // BOARD_HPP_INCLUDED
