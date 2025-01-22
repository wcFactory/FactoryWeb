//
// Created by Will on 22/01/2025.
//

#ifndef GAME_H
#define GAME_H
#include <string>
#include "raylib.h"
#include "raylib.h"


class Game {

public:

    Game();
    ~Game();


    void Start();
    void Update();

private:
    Texture logo {0};
    Music music {0};
};



#endif //GAME_H
