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



}

void Game::Update(float dt) const
{
    player->Update(dt);


}
