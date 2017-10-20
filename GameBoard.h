//
// Created by karl on 10/19/17.
//

#ifndef PROJ_GAMEBOARD_H
#define PROJ_GAMEBOARD_H

template<int h, int w>
class GameBoard {
public:
    bool Board[h][w];
    GameBoard();
    ~GameBoard();
};


#endif //PROJ_GAMEBOARD_H
