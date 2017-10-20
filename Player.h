//
// Created by karl on 10/19/17.
//

#ifndef PROJ_PLAYER_H
#define PROJ_PLAYER_H

class Player{
    int _movesRemaining;
public:
    Player(int movesRemaining);
    int GetMovesRemaining();
    char * Move(int x, int y);
    ~Player();
};


#endif //PROJ_PLAYER_H
