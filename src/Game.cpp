//
// Created by Will on 22/01/2025.
//

#include "Game.h"



Game::Game() = default;

Game::~Game() = default;

void Game::Start()
{
    player = new Player();
    player->Start();

    mirror = new Mirror(Vector2{50, 50}, Vector2{400, 400});

}

void Game::Update(float dt) const
{
    player->Update(dt);
    mirror->Update(dt);


    Vector2 point = GetMousePosition();

   if ( CheckCollisionPointLine(point, mirror->startPos, mirror->endPos, 10))
   {
       DrawLineEx(player->GetPosition(), point, 2, GREEN);
   }

}
