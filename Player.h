//
// Created by karl on 10/19/17.
//

#ifndef PROJ_PLAYER_H
#define PROJ_PLAYER_H
#include "GameBoard.h"

class Player{
    int _movesRemaining;
public:
    Player(int movesRemaining);
    int GetMovesRemaining();
    char * Move(int x, int y, GameBoard gameBoard);
    ~Player();
};


#endif //PROJ_PLAYER_H
