//
// Created by karl on 10/19/17.
//

#ifndef PROJ_GAME_H
#define PROJ_GAME_H


#include "Player.h"
#include "GameBoard.h"

class Game {
    int _shipCount;
    bool _isFinished = false;
    Player _player;
    GameBoard _board;

public:
    Game(int shipCount, Player p, GameBoard g);
    void StartGame();
    void EndGame();
    ~Game();
};


#endif //PROJ_GAME_H
