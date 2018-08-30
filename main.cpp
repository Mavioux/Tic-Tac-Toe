#include <iostream>
#include "Board.hpp"
#include "Game.hpp"
#include "AI.hpp"
#include <stdlib.h>
#include <ctime>


using namespace std;



int main()
{
    srand(time(NULL));

    Board boarding_map;
    game(boarding_map);

}
