//
// Created by Will on 29/01/2025.
//

#ifndef PLAYER_H
#define PLAYER_H
#include "raylib.h"


class Player {

public:

    Player();
    ~Player();

    void Start();
    void Stop();
    void Update(float dt);

    Vector2 GetPosition(){return pos;}
private:
    void input(float dt);
    void draw();


    //Player Attributes

    //Visual
    int width = 50;
    int height = 50;

    //Movement
    Vector2 pos = {0,0};
    Vector2 dir = {0,0};
    float speed = 50.0f;
    Vector2 velocity = {0,0};





};



#endif //PLAYER_H
