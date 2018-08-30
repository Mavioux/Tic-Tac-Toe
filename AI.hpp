#ifndef AI_HPP_INCLUDED
#define AI_HPP_INCLUDED

#include "Board.hpp"
#include <iostream>

using namespace std;

int ai_input;

int random_gen(Board &boarding_map) {
    int random_generated_strategy = rand() % 9 + 1;
    while(boarding_map.board[random_generated_strategy] == "X" || boarding_map.board[random_generated_strategy] == "O")
    {
        random_generated_strategy = rand() % 9 + 1;
        ai_input = random_generated_strategy;
    }
    return random_generated_strategy;

}

int artificial_intelligence(Board &boarding_map, int i, string player, string ai, int input) {
    int randomness;
    switch(i) {
        case 0:
            if(boarding_map.board[5] == player){
                randomness = rand() % 4 + 1;
                switch(randomness) {
                    case 1:
                        boarding_map.board[1] = ai;
                        ai_input = 1;
                        return 0;
                        break;
                    case 2:
                        boarding_map.board[3] = ai;
                        ai_input = 3;
                        return 0;
                        break;
                    case 3:
                        boarding_map.board[7] = ai;
                        ai_input = 7;
                        return 0;
                        break;
                    case 4:
                        boarding_map.board[9] = ai;
                        ai_input = 9;
                        return 0;
                        break;
                    default:
                        cout << "check your round 1 code you idiot" << endl;
                        return 0;
                        break;
                }
            }

            else if (boarding_map.board[1] == player || boarding_map.board[3] == player || boarding_map.board[7] == player || boarding_map.board[9] == player) {

                randomness = rand() % 4 + 1;
                switch(randomness) {
                    case 1:
                        if(boarding_map.board[1] == " "){
                            boarding_map.board[1] = ai;
                            ai_input = 1;
                            return 0;
                        }
                        else{
                            boarding_map.board[2] = ai;
                            ai_input = 2;
                            return 0;
                        }
                        break;
                    case 2:
                        if(boarding_map.board[2] == " ") {
                            boarding_map.board[2] = ai;
                            ai_input = 2;
                            return 0;
                        }
                        else {
                            boarding_map.board[3] = ai;
                            ai_input = 3;
                            return 0;
                        }
                        break;
                    case 3:
                        if(boarding_map.board[3] == " ") {
                            boarding_map.board[3] = ai;
                            ai_input = 3;
                            return 0;
                        }
                        else {
                            boarding_map.board[4] = ai;
                            ai_input = 4;
                            return 0;
                        }
                        break;
                    case 4:
                        if(boarding_map.board[4] == " ") {
                            boarding_map.board[4] = ai;
                            ai_input = 4;
                            return 0;
                        }
                        else {
                            boarding_map.board[1] = ai;
                            ai_input = 1;
                            return 0;
                        }
                        break;


                }

            }

            else {
                if(boarding_map.board[2] == player) {
                    boarding_map.board[3] = ai;
                    ai_input = 3;
                    return 0;
                }
                else if(boarding_map.board[6] == player) {
                    boarding_map.board[9] == ai;
                    ai_input = 9;
                    return 0;
                }
                else if(boarding_map.board[8] == player) {
                    boarding_map.board[7] = ai;
                    ai_input = 7;
                    return 0;
                }
                else {
                    boarding_map.board[1] = ai;
                    ai_input = 1;
                    return 0;
                }
            }

            break;

        case 1:
            switch(input){
                case 1:
                    if(boarding_map.board[2] == player) {
                        if(boarding_map.board[3] == " ") {
                            boarding_map.board[3] = ai;
                            ai_input = 3;
                        }
                        else{
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[3] == player) {
                        if(boarding_map.board[2] == " "){
                            boarding_map.board[2] = ai;
                            ai_input = 2;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }

                    }
                    else if (boarding_map.board[4] == player) {
                        if (boarding_map.board[7] == " ") {
                            boarding_map.board[7] = ai;
                            ai_input = 7;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[7] == player) {
                        if (boarding_map.board[4] == " ") {
                            boarding_map.board[4] = ai;
                            ai_input = 4;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[5] == player) {
                        if (boarding_map.board[9] == " ") {
                            boarding_map.board[9] = ai;
                            ai_input = 9;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[9] == player) {
                        if (boarding_map.board[5] == " ") {
                            boarding_map.board[5] = ai;
                            ai_input = 5;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else {
                        int random_generated_strategy = rand() % 9 + 1;
                        while(boarding_map.board[random_generated_strategy] == "X" || boarding_map.board[random_generated_strategy] == "O")
                        {
                            random_generated_strategy = rand() % 9 + 1;
                            ai_input = random_generated_strategy;
                        }

                        boarding_map.board[random_generated_strategy] = ai;
                    }
                    break;

                case 2:
                    if(boarding_map.board[1] == player) {
                        if (boarding_map.board[3] == " ") {
                            boarding_map.board[3] = ai;
                            ai_input = 3;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[3] == player) {
                        if (boarding_map.board[1] == " ") {
                            boarding_map.board[1] = ai;
                            ai_input = 1;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[5] == player) {
                        if (boarding_map.board[8] == " ") {
                            boarding_map.board[8] = ai;
                            ai_input = 8;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[8] == player) {
                        if (boarding_map.board[5] == " ") {
                            boarding_map.board[5] = ai;
                            ai_input = 5;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else {
                        int random_generated_strategy = rand() % 9 + 1;
                        while(boarding_map.board[random_generated_strategy] == "X" || boarding_map.board[random_generated_strategy] == "O")
                        {
                            random_generated_strategy = rand() % 9 + 1;
                            ai_input = random_generated_strategy;
                        }

                        boarding_map.board[random_generated_strategy] = ai;
                    }
                    break;

                case 3:
                    if(boarding_map.board[2] == player) {
                        if (boarding_map.board[1] == " ") {
                            boarding_map.board[1] = ai;
                            ai_input = 1;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[1] == player) {
                        if (boarding_map.board[2] == " ") {
                            boarding_map.board[2] = ai;
                            ai_input = 2;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[6] == player) {
                        if (boarding_map.board[9] == " ") {
                            boarding_map.board[9] = ai;
                            ai_input = 9;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[9] == player) {
                        if (boarding_map.board[6] == " ") {
                            boarding_map.board[6] = ai;
                            ai_input = 6;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[5] == player) {
                        if (boarding_map.board[7] == " ") {
                            boarding_map.board[7] = ai;
                            ai_input = 7;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[7] == player) {
                        if (boarding_map.board[5] == " ") {
                            boarding_map.board[5] = ai;
                            ai_input = 5;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else {
                        int random_generated_strategy = rand() % 9 + 1;
                        while(boarding_map.board[random_generated_strategy] == "X" || boarding_map.board[random_generated_strategy] == "O")
                        {
                            random_generated_strategy = rand() % 9 + 1;
                            ai_input = random_generated_strategy;
                        }

                        boarding_map.board[random_generated_strategy] = ai;
                    }
                    break;

                case 4:
                    if(boarding_map.board[1] == player) {
                        if (boarding_map.board[7] == " ") {
                            boarding_map.board[7] = ai;
                            ai_input = 7;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[7] == player) {
                        if (boarding_map.board[1] == " ") {
                            boarding_map.board[1] = ai;
                            ai_input = 1;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[5] == player) {
                        if (boarding_map.board[6] == " ") {
                            boarding_map.board[6] = ai;
                            ai_input = 6;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[6] == player) {
                        if (boarding_map.board[5] == " ") {
                            boarding_map.board[5] = ai;
                            ai_input = 5;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else {
                        int random_generated_strategy = rand() % 9 + 1;
                        while(boarding_map.board[random_generated_strategy] == "X" || boarding_map.board[random_generated_strategy] == "O")
                        {
                            random_generated_strategy = rand() % 9 + 1;
                            ai_input = random_generated_strategy;
                        }

                        boarding_map.board[random_generated_strategy] = ai;
                    }
                    break;

                case 5:
                    if(boarding_map.board[2] == player) {
                        if (boarding_map.board[8] == " ") {
                            boarding_map.board[8] = ai;
                            ai_input = 8;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[8] == player) {
                        if (boarding_map.board[2] == " ") {
                            boarding_map.board[2] = ai;
                            ai_input = 2;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[4] == player) {
                        if (boarding_map.board[6] == " ") {
                            boarding_map.board[6] = ai;
                            ai_input = 6;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[6] == player) {
                        if (boarding_map.board[4] == " ") {
                            boarding_map.board[4] = ai;
                            ai_input = 4;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[1] == player) {
                        if (boarding_map.board[9] == " ") {
                            boarding_map.board[9] = ai;
                            ai_input = 9;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[9] == player) {
                        if (boarding_map.board[1] == " ") {
                            boarding_map.board[1] = ai;
                            ai_input = 1;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[3] == player) {
                        if (boarding_map.board[7] == " ") {
                            boarding_map.board[7] = ai;
                            ai_input = 7;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[7] == player) {
                       if (boarding_map.board[3] == " ") {
                            boarding_map.board[3] = ai;
                            ai_input = 3;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else {
                        int random_generated_strategy = rand() % 9 + 1;
                        while(boarding_map.board[random_generated_strategy] == "X" || boarding_map.board[random_generated_strategy] == "O")
                        {
                            random_generated_strategy = rand() % 9 + 1;
                            ai_input = random_generated_strategy;
                        }

                        boarding_map.board[random_generated_strategy] = ai;
                    }
                    break;

                case 6:
                    if(boarding_map.board[9] == player) {
                        if (boarding_map.board[3] == " ") {
                            boarding_map.board[3] = ai;
                            ai_input = 3;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[3] == player) {
                        if (boarding_map.board[9] == " ") {
                            boarding_map.board[9] = ai;
                            ai_input = 9;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[5] == player) {
                        if (boarding_map.board[4] == " ") {
                            boarding_map.board[4] = ai;
                            ai_input = 4;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[4] == player) {
                        if (boarding_map.board[5] == " ") {
                            boarding_map.board[5] = ai;
                            ai_input = 5;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else {
                        int random_generated_strategy = rand() % 9 + 1;
                        while(boarding_map.board[random_generated_strategy] == "X" || boarding_map.board[random_generated_strategy] == "O")
                        {
                            random_generated_strategy = rand() % 9 + 1;
                            ai_input = random_generated_strategy;
                        }

                        boarding_map.board[random_generated_strategy] = ai;
                    }
                    break;

                case 7:
                    if(boarding_map.board[1] == player) {
                        if (boarding_map.board[4] == " ") {
                            boarding_map.board[4] = ai;
                            ai_input = 4;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[4] == player) {
                        if (boarding_map.board[1] == " ") {
                            boarding_map.board[1] = ai;
                            ai_input = 1;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[8] == player) {
                        if (boarding_map.board[9] == " ") {
                            boarding_map.board[9] = ai;
                            ai_input = 9;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[9] == player) {
                        if (boarding_map.board[8] == " ") {
                            boarding_map.board[8] = ai;
                            ai_input = 8;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[5] == player) {
                        if (boarding_map.board[3] == " ") {
                            boarding_map.board[3] = ai;
                            ai_input = 3;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[3] == player) {
                        if (boarding_map.board[5] == " ") {
                            boarding_map.board[5] = ai;
                            ai_input = 5;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else {
                        int random_generated_strategy = rand() % 9 + 1;
                        while(boarding_map.board[random_generated_strategy] == "X" || boarding_map.board[random_generated_strategy] == "O")
                        {
                            random_generated_strategy = rand() % 9 + 1;
                            ai_input = random_generated_strategy;
                        }

                        boarding_map.board[random_generated_strategy] = ai;
                    }
                    break;

                case 8:
                    if(boarding_map.board[2] == player) {
                        if (boarding_map.board[5] == " ") {
                            boarding_map.board[5] = ai;
                            ai_input = 5;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[5] == player) {
                        if (boarding_map.board[2] == " ") {
                            boarding_map.board[2] = ai;
                            ai_input = 2;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[7] == player) {
                        if (boarding_map.board[9] == " ") {
                            boarding_map.board[9] = ai;
                            ai_input = 9;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[9] == player) {
                        if (boarding_map.board[7] == " ") {
                            boarding_map.board[7] = ai;
                            ai_input = 7;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else {
                        int random_generated_strategy = rand() % 9 + 1;
                        while(boarding_map.board[random_generated_strategy] == "X" || boarding_map.board[random_generated_strategy] == "O")
                        {
                            random_generated_strategy = rand() % 9 + 1;
                            ai_input = random_generated_strategy;
                        }

                        boarding_map.board[random_generated_strategy] = ai;
                    }
                    break;

                case 9:
                    if(boarding_map.board[3] == player){
                        if (boarding_map.board[6] == " ") {
                            boarding_map.board[6] = ai;
                            ai_input = 6;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[6] == player) {
                        if (boarding_map.board[3] == " ") {
                            boarding_map.board[3] = ai;
                            ai_input = 3;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[7] == player) {
                        if (boarding_map.board[8] == " ") {
                            boarding_map.board[8] = ai;
                            ai_input = 8;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[8] == player) {
                        if (boarding_map.board[7] == " ") {
                            boarding_map.board[7] = ai;
                            ai_input = 7;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[5] == player) {
                        if (boarding_map.board[1] == " ") {
                            boarding_map.board[1] = ai;
                            ai_input = 1;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[1] == player) {
                        if (boarding_map.board[5] == " ") {
                            boarding_map.board[5] = ai;
                            ai_input = 5;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else {
                        int random_generated_strategy = rand() % 9 + 1;
                        while(boarding_map.board[random_generated_strategy] == "X" || boarding_map.board[random_generated_strategy] == "O")
                        {
                            random_generated_strategy = rand() % 9 + 1;
                            ai_input = random_generated_strategy;
                        }

                        boarding_map.board[random_generated_strategy] = ai;
                    }
                break;

            }
            break;

            default:
                switch(ai_input){
                case 1:
                    if(boarding_map.board[2] == ai) {
                        if (boarding_map.board[3] == " ") {
                            boarding_map.board[3] = ai;
                            ai_input = 3;
                        }
                    }
                    else if (boarding_map.board[3] == ai) {
                       if (boarding_map.board[2] == " ") {
                            boarding_map.board[2] = ai;
                            ai_input = 2;
                       }
                    }
                    else if (boarding_map.board[4] == ai) {
                        if (boarding_map.board[7] == " ") {
                            boarding_map.board[7] = ai;
                            ai_input = 7;
                        }
                    }
                    else if (boarding_map.board[7] == ai) {
                        if (boarding_map.board[4] == " ") {
                            boarding_map.board[4] = ai;
                            ai_input = 4;
                        }
                    }
                    else if (boarding_map.board[5] == ai) {
                        if (boarding_map.board[9] == " ") {
                            boarding_map.board[9] = ai;
                            ai_input = 9;
                        }
                    }
                    else if (boarding_map.board[9] == ai) {
                        if (boarding_map.board[5] == " ") {
                            boarding_map.board[5] = ai;
                            ai_input = 5;
                        }
                    }
                    break;

                case 2:
                    if(boarding_map.board[1] == ai) {
                        if (boarding_map.board[3] == " ") {
                            boarding_map.board[3] = ai;
                            ai_input = 3;
                        }
                    }
                    else if (boarding_map.board[3] == ai) {
                        if (boarding_map.board[1] == " ") {
                            boarding_map.board[1] = ai;
                            ai_input = 1;
                        }
                    }
                    else if (boarding_map.board[5] == ai) {
                        if (boarding_map.board[8] == " ") {
                            boarding_map.board[8] = ai;
                            ai_input = 8;
                        }
                    }
                    else if (boarding_map.board[8] == ai) {
                        if (boarding_map.board[5] == " ") {
                            boarding_map.board[5] = ai;
                            ai_input = 5;
                        }
                    }
                    break;

                case 3:
                    if(boarding_map.board[2] == ai) {
                        if (boarding_map.board[1] == " ") {
                            boarding_map.board[1] = ai;
                            ai_input = 1;
                        }
                    }
                    else if (boarding_map.board[1] == ai) {
                        if (boarding_map.board[2] == " ") {
                            boarding_map.board[2] = ai;
                            ai_input = 2;
                        }
                    }
                    else if (boarding_map.board[6] == ai) {
                        if (boarding_map.board[9] == " ") {
                            boarding_map.board[9] = ai;
                            ai_input = 9;
                        }
                    }
                    else if (boarding_map.board[9] == ai) {
                        if (boarding_map.board[6] == " ") {
                            boarding_map.board[6] = ai;
                            ai_input = 6;
                        }
                    }
                    else if (boarding_map.board[5] == ai) {
                        if (boarding_map.board[7] == " ") {
                            boarding_map.board[7] = ai;
                            ai_input = 7;
                        }
                    }
                    else if (boarding_map.board[7] == ai) {
                        if (boarding_map.board[5] == " ") {
                            boarding_map.board[5] = ai;
                            ai_input = 5;
                        }
                    }
                    break;

                case 4:
                    if(boarding_map.board[1] == ai) {
                        if (boarding_map.board[7] == " ") {
                            boarding_map.board[7] = ai;
                            ai_input = 7;
                        }
                    }
                    else if (boarding_map.board[7] == ai) {
                        if (boarding_map.board[1] == " ") {
                            boarding_map.board[1] = ai;
                            ai_input = 1;
                        }
                    }
                    else if (boarding_map.board[5] == ai) {
                        if (boarding_map.board[6] == " ") {
                            boarding_map.board[6] = ai;
                            ai_input = 6;
                        }
                    }
                    else if (boarding_map.board[6] == ai) {
                        if (boarding_map.board[5] == " ") {
                            boarding_map.board[5] = ai;
                            ai_input = 5;
                        }
                    }
                    break;

                case 5:
                    if(boarding_map.board[2] == ai) {
                        if (boarding_map.board[8] == " ") {
                            boarding_map.board[8] = ai;
                            ai_input = 8;
                        }
                    }
                    else if (boarding_map.board[8] == ai) {
                        if (boarding_map.board[2] == " ") {
                            boarding_map.board[2] = ai;
                            ai_input = 2;
                        }
                    }
                    else if (boarding_map.board[4] == ai) {
                        if (boarding_map.board[6] == " ") {
                            boarding_map.board[6] = ai;
                            ai_input = 6;
                        }
                    }
                    else if (boarding_map.board[6] == ai) {
                        if (boarding_map.board[4] == " ") {
                            boarding_map.board[4] = ai;
                            ai_input = 4;
                        }
                    }
                    else if (boarding_map.board[1] == ai) {
                        if (boarding_map.board[9] == " ") {
                            boarding_map.board[9] = ai;
                            ai_input = 9;
                        }
                    }
                    else if (boarding_map.board[9] == ai) {
                        if (boarding_map.board[1] == " ") {
                            boarding_map.board[1] = ai;
                            ai_input = 1;
                        }
                    }
                    else if (boarding_map.board[3] == ai) {
                        if (boarding_map.board[7] == " ") {
                            boarding_map.board[7] = ai;
                            ai_input = 7;
                        }
                    }
                    else if (boarding_map.board[7] == ai) {
                        if (boarding_map.board[3] == " ") {
                            boarding_map.board[3] = ai;
                            ai_input = 3;
                        }
                    }
                    break;

                case 6:
                    if(boarding_map.board[9] == ai) {
                        if (boarding_map.board[3] == " ") {
                            boarding_map.board[3] = ai;
                            ai_input = 3;
                        }
                    }
                    else if (boarding_map.board[3] == ai) {
                        if (boarding_map.board[9] == " ") {
                            boarding_map.board[9] = ai;
                            ai_input = 9;
                        }
                    }
                    else if (boarding_map.board[5] == ai) {
                        if (boarding_map.board[4] == " ") {
                            boarding_map.board[4] = ai;
                            ai_input = 4;
                        }
                    }
                    else if (boarding_map.board[4] == ai) {
                        if (boarding_map.board[5] == " ") {
                            boarding_map.board[5] = ai;
                            ai_input = 5;
                        }
                    }
                    break;

                case 7:
                    if(boarding_map.board[1] == ai) {
                        if (boarding_map.board[4] == " ") {
                            boarding_map.board[4] = ai;
                            ai_input = 4;
                        }
                    }
                    else if (boarding_map.board[4] == ai) {
                        if (boarding_map.board[1] == " ") {
                            boarding_map.board[1] = ai;
                            ai_input = 1;
                        }
                    }
                    else if (boarding_map.board[8] == ai) {
                        if (boarding_map.board[9] == " ") {
                            boarding_map.board[9] = ai;
                            ai_input = 9;
                        }
                    }
                    else if (boarding_map.board[9] == ai) {
                        if (boarding_map.board[8] == " ") {
                            boarding_map.board[8] = ai;
                            ai_input = 8;
                        }
                    }
                    else if (boarding_map.board[5] == ai) {
                        if (boarding_map.board[3] == " ") {
                            boarding_map.board[3] = ai;
                            ai_input = 3;
                        }
                    }
                    else if (boarding_map.board[3] == ai) {
                        if (boarding_map.board[5] == " ") {
                            boarding_map.board[5] = ai;
                            ai_input = 5;
                        }
                    }
                    break;

                case 8:
                    if(boarding_map.board[2] == ai) {
                        if (boarding_map.board[5] == " ") {
                            boarding_map.board[5] = ai;
                            ai_input = 5;
                        }
                    }
                    else if (boarding_map.board[5] == ai) {
                        if (boarding_map.board[2] == " ") {
                            boarding_map.board[2] = ai;
                            ai_input = 2;
                        }
                    }
                    else if (boarding_map.board[7] == ai) {
                        if (boarding_map.board[9] == " ") {
                            boarding_map.board[9] = ai;
                            ai_input = 9;
                        }
                    }
                    else if (boarding_map.board[9] == ai) {
                        if (boarding_map.board[7] == " ") {
                            boarding_map.board[7] = ai;
                            ai_input = 7;
                        }
                    }
                    break;

                case 9:
                    if(boarding_map.board[3] == ai) {
                        if (boarding_map.board[6] == " ") {
                            boarding_map.board[6] = ai;
                            ai_input = 6;
                        }
                    }
                    else if (boarding_map.board[6] == ai) {
                        if (boarding_map.board[3] == " ") {
                            boarding_map.board[3] = ai;
                            ai_input = 3;
                        }
                    }
                    else if (boarding_map.board[7] == ai) {
                        if (boarding_map.board[8] == " ") {
                            boarding_map.board[8] = ai;
                            ai_input = 8;
                        }
                    }
                    else if (boarding_map.board[8] == ai) {
                       if (boarding_map.board[7] == " ") {
                            boarding_map.board[7] = ai;
                            ai_input = 7;
                       }
                    }
                    else if (boarding_map.board[5] == ai) {
                        if (boarding_map.board[1] == " ") {
                            boarding_map.board[1] = ai;
                            ai_input = 1;
                        }
                    }
                    else if (boarding_map.board[1] == ai) {
                        if (boarding_map.board[5] == " ") {
                            boarding_map.board[5] = ai;
                            ai_input = 5;
                        }
                    }
                    break;
                }




            switch(input){
                case 1:
                    if(boarding_map.board[2] == player) {
                        if(boarding_map.board[3] == " ") {
                            boarding_map.board[3] = ai;
                            ai_input = 3;
                        }
                        else{
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[3] == player) {
                        if(boarding_map.board[2] == " "){
                            boarding_map.board[2] = ai;
                            ai_input = 2;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }

                    }
                    else if (boarding_map.board[4] == player) {
                        if (boarding_map.board[7] == " ") {
                            boarding_map.board[7] = ai;
                            ai_input = 7;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[7] == player) {
                        if (boarding_map.board[4] == " ") {
                            boarding_map.board[4] = ai;
                            ai_input = 4;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[5] == player) {
                        if (boarding_map.board[9] == " ") {
                            boarding_map.board[9] = ai;
                            ai_input = 9;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[9] == player) {
                        if (boarding_map.board[5] == " ") {
                            boarding_map.board[5] = ai;
                            ai_input = 5;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else {
                        int random_generated_strategy = rand() % 9 + 1;
                        while(boarding_map.board[random_generated_strategy] == "X" || boarding_map.board[random_generated_strategy] == "O")
                        {
                            random_generated_strategy = rand() % 9 + 1;
                            ai_input = random_generated_strategy;
                        }

                        boarding_map.board[random_generated_strategy] = ai;
                    }
                    break;

                case 2:
                    if(boarding_map.board[1] == player) {
                        if (boarding_map.board[3] == " ") {
                            boarding_map.board[3] = ai;
                            ai_input = 3;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[3] == player) {
                        if (boarding_map.board[1] == " ") {
                            boarding_map.board[1] = ai;
                            ai_input = 1;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[5] == player) {
                        if (boarding_map.board[8] == " ") {
                            boarding_map.board[8] = ai;
                            ai_input = 8;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[8] == player) {
                        if (boarding_map.board[5] == " ") {
                            boarding_map.board[5] = ai;
                            ai_input = 5;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else {
                        int random_generated_strategy = rand() % 9 + 1;
                        while(boarding_map.board[random_generated_strategy] == "X" || boarding_map.board[random_generated_strategy] == "O")
                        {
                            random_generated_strategy = rand() % 9 + 1;
                            ai_input = random_generated_strategy;
                        }

                        boarding_map.board[random_generated_strategy] = ai;
                    }
                    break;

                case 3:
                    if(boarding_map.board[2] == player) {
                        if (boarding_map.board[1] == " ") {
                            boarding_map.board[1] = ai;
                            ai_input = 1;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[1] == player) {
                        if (boarding_map.board[2] == " ") {
                            boarding_map.board[2] = ai;
                            ai_input = 2;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[6] == player) {
                        if (boarding_map.board[9] == " ") {
                            boarding_map.board[9] = ai;
                            ai_input = 9;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[9] == player) {
                        if (boarding_map.board[6] == " ") {
                            boarding_map.board[6] = ai;
                            ai_input = 6;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[5] == player) {
                        if (boarding_map.board[7] == " ") {
                            boarding_map.board[7] = ai;
                            ai_input = 7;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[7] == player) {
                        if (boarding_map.board[5] == " ") {
                            boarding_map.board[5] = ai;
                            ai_input = 5;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else {
                        int random_generated_strategy = rand() % 9 + 1;
                        while(boarding_map.board[random_generated_strategy] == "X" || boarding_map.board[random_generated_strategy] == "O")
                        {
                            random_generated_strategy = rand() % 9 + 1;
                            ai_input = random_generated_strategy;
                        }

                        boarding_map.board[random_generated_strategy] = ai;
                    }
                    break;

                case 4:
                    if(boarding_map.board[1] == player) {
                        if (boarding_map.board[7] == " ") {
                            boarding_map.board[7] = ai;
                            ai_input = 7;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[7] == player) {
                        if (boarding_map.board[1] == " ") {
                            boarding_map.board[1] = ai;
                            ai_input = 1;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[5] == player) {
                        if (boarding_map.board[6] == " ") {
                            boarding_map.board[6] = ai;
                            ai_input = 6;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[6] == player) {
                        if (boarding_map.board[5] == " ") {
                            boarding_map.board[5] = ai;
                            ai_input = 5;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else {
                        int random_generated_strategy = rand() % 9 + 1;
                        while(boarding_map.board[random_generated_strategy] == "X" || boarding_map.board[random_generated_strategy] == "O")
                        {
                            random_generated_strategy = rand() % 9 + 1;
                            ai_input = random_generated_strategy;
                        }

                        boarding_map.board[random_generated_strategy] = ai;
                    }
                    break;

                case 5:
                    if(boarding_map.board[2] == player) {
                        if (boarding_map.board[8] == " ") {
                            boarding_map.board[8] = ai;
                            ai_input = 8;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[8] == player) {
                        if (boarding_map.board[2] == " ") {
                            boarding_map.board[2] = ai;
                            ai_input = 2;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[4] == player) {
                        if (boarding_map.board[6] == " ") {
                            boarding_map.board[6] = ai;
                            ai_input = 6;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[6] == player) {
                        if (boarding_map.board[4] == " ") {
                            boarding_map.board[4] = ai;
                            ai_input = 4;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[1] == player) {
                        if (boarding_map.board[9] == " ") {
                            boarding_map.board[7] = ai;
                            ai_input = 9;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[9] == player) {
                        if (boarding_map.board[1] == " ") {
                            boarding_map.board[1] = ai;
                            ai_input = 1;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[3] == player) {
                        if (boarding_map.board[7] == " ") {
                            boarding_map.board[7] = ai;
                            ai_input = 7;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[7] == player) {
                       if (boarding_map.board[3] == " ") {
                            boarding_map.board[3] = ai;
                            ai_input = 3;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else {
                        int random_generated_strategy = rand() % 9 + 1;
                        while(boarding_map.board[random_generated_strategy] == "X" || boarding_map.board[random_generated_strategy] == "O")
                        {
                            random_generated_strategy = rand() % 9 + 1;
                            ai_input = random_generated_strategy;
                        }

                        boarding_map.board[random_generated_strategy] = ai;
                    }
                    break;

                case 6:
                    if(boarding_map.board[9] == player) {
                        if (boarding_map.board[3] == " ") {
                            boarding_map.board[3] = ai;
                            ai_input = 3;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[3] == player) {
                        if (boarding_map.board[9] == " ") {
                            boarding_map.board[9] = ai;
                            ai_input = 9;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[5] == player) {
                        if (boarding_map.board[4] == " ") {
                            boarding_map.board[4] = ai;
                            ai_input = 4;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[4] == player) {
                        if (boarding_map.board[5] == " ") {
                            boarding_map.board[5] = ai;
                            ai_input = 5;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else {
                        int random_generated_strategy = rand() % 9 + 1;
                        while(boarding_map.board[random_generated_strategy] == "X" || boarding_map.board[random_generated_strategy] == "O")
                        {
                            random_generated_strategy = rand() % 9 + 1;
                            ai_input = random_generated_strategy;
                        }

                        boarding_map.board[random_generated_strategy] = ai;
                    }
                    break;

                case 7:
                    if(boarding_map.board[1] == player) {
                        if (boarding_map.board[4] == " ") {
                            boarding_map.board[4] = ai;
                            ai_input = 4;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[4] == player) {
                        if (boarding_map.board[1] == " ") {
                            boarding_map.board[1] = ai;
                            ai_input = 1;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[8] == player) {
                        if (boarding_map.board[9] == " ") {
                            boarding_map.board[9] = ai;
                            ai_input = 9;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[9] == player) {
                        if (boarding_map.board[8] == " ") {
                            boarding_map.board[8] = ai;
                            ai_input = 8;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[5] == player) {
                        if (boarding_map.board[3] == " ") {
                            boarding_map.board[3] = ai;
                            ai_input = 3;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[3] == player) {
                        if (boarding_map.board[5] == " ") {
                            boarding_map.board[5] = ai;
                            ai_input = 5;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else {
                        int random_generated_strategy = rand() % 9 + 1;
                        while(boarding_map.board[random_generated_strategy] == "X" || boarding_map.board[random_generated_strategy] == "O")
                        {
                            random_generated_strategy = rand() % 9 + 1;
                            ai_input = random_generated_strategy;
                        }

                        boarding_map.board[random_generated_strategy] = ai;
                    }
                    break;

                case 8:
                    if(boarding_map.board[2] == player) {
                        if (boarding_map.board[5] == " ") {
                            boarding_map.board[5] = ai;
                            ai_input = 5;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[5] == player) {
                        if (boarding_map.board[2] == " ") {
                            boarding_map.board[2] = ai;
                            ai_input = 2;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[7] == player) {
                        if (boarding_map.board[9] == " ") {
                            boarding_map.board[9] = ai;
                            ai_input = 9;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[9] == player) {
                        if (boarding_map.board[7] == " ") {
                            boarding_map.board[7] = ai;
                            ai_input = 7;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else {
                        int random_generated_strategy = rand() % 9 + 1;
                        while(boarding_map.board[random_generated_strategy] == "X" || boarding_map.board[random_generated_strategy] == "O")
                        {
                            random_generated_strategy = rand() % 9 + 1;
                            ai_input = random_generated_strategy;
                        }

                        boarding_map.board[random_generated_strategy] = ai;
                    }
                    break;

                case 9:
                    if(boarding_map.board[3] == player){
                        if (boarding_map.board[6] == " ") {
                            boarding_map.board[6] = ai;
                            ai_input = 6;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[6] == player) {
                        if (boarding_map.board[3] == " ") {
                            boarding_map.board[3] = ai;
                            ai_input = 3;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[7] == player) {
                        if (boarding_map.board[8] == " ") {
                            boarding_map.board[8] = ai;
                            ai_input = 8;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[8] == player) {
                        if (boarding_map.board[7] == " ") {
                            boarding_map.board[7] = ai;
                            ai_input = 7;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[5] == player) {
                        if (boarding_map.board[1] == " ") {
                            boarding_map.board[1] = ai;
                            ai_input = 1;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else if (boarding_map.board[1] == player) {
                        if (boarding_map.board[5] == " ") {
                            boarding_map.board[5] = ai;
                            ai_input = 5;
                        }
                        else {
                            boarding_map.board[random_gen(boarding_map)] = ai;
                        }
                    }
                    else {
                        int random_generated_strategy = rand() % 9 + 1;
                        while(boarding_map.board[random_generated_strategy] == "X" || boarding_map.board[random_generated_strategy] == "O")
                        {
                            random_generated_strategy = rand() % 9 + 1;
                            ai_input = random_generated_strategy;
                        }

                        boarding_map.board[random_generated_strategy] = ai;
                    }
                break;

            }

            break;

            break;
    }
}





#endif // AI_HPP_INCLUDED
