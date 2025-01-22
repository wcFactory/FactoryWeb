//
// Created by Will on 22/01/2025.
//

#include "Game.h"


Game::Game() = default;

Game::~Game() = default;

void Game::Start()
{
    logo = LoadTexture("art/logo.png");
    music = LoadMusicStream("audio/music.ogg");
    PlayMusicStream(music);

}

void Game::Update() const {
    DrawText("Welcome to FactoryWeb", 50, 50, 50, WHITE);
    DrawTextureEx(logo, {50, 100}, 0.0f, 0.2f, WHITE);
    UpdateMusicStream(music);
}
