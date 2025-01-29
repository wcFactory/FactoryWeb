//
// Created by Will on 22/01/2025.
//

#ifndef GAME_H
#define GAME_H
#include <string>
#include "raylib.h"
#include "Player.h"
#include "Mirror.h"


class Game {

public:

    Game();
    ~Game();


    void Start();
    void Update(float dt) const;

private:
    Player* player { nullptr };
    Mirror* mirror { nullptr };

};



#endif //GAME_H
