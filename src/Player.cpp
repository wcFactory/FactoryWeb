//
// Created by Will on 29/01/2025.
//

#include "Player.h"
#include "math.h"
#include "raymath.h"

Player::Player() {

}

Player::~Player() {

}

void Player::Start() {

}

void Player::Stop() {

}

void Player::Update(float dt)
{
    input(dt);
    draw();
}

void Player::input(float dt)
{
    // Reset direction each frame (but NOT velocity)
    Vector2 targetDir = { 0, 0 };

    if (IsKeyDown(KEY_W))    targetDir.y -= 1;  // Move UP
    if (IsKeyDown(KEY_S))  targetDir.y += 1;  // Move DOWN
    if (IsKeyDown(KEY_A))  targetDir.x -= 1;  // Move LEFT
    if (IsKeyDown(KEY_D)) targetDir.x += 1;  // Move RIGHT

    // Normalize direction to prevent faster diagonal movement
    if (targetDir.x != 0 || targetDir.y != 0) {
        float length = sqrtf(targetDir.x * targetDir.x + targetDir.y * targetDir.y);
        targetDir.x /= length;
        targetDir.y /= length;
    }

    // Acceleration factor
    float acceleration = 1000.0f;  // Adjust for faster/slower acceleration

    // Apply acceleration to velocity
    velocity.x += targetDir.x * acceleration * dt;
    velocity.y += targetDir.y * acceleration * dt;

    // Apply damping (friction) when no input is given
    float damping = 0.95f;  // Closer to 1 = more inertia, Closer to 0 = stops quickly
    velocity.x *= damping;
    velocity.y *= damping;

    // Apply velocity to position
    pos.x += velocity.x * dt;
    pos.y += velocity.y * dt;

    // Debugging Output
    const char* directionText = TextFormat("DIRECTION:  %f, %f", targetDir.x, targetDir.y);
    const char* positionText = TextFormat("POSITION: %f, %f", pos.x, pos.y);
    const char* velocityText = TextFormat("VELOCITY: %f, %f", velocity.x, velocity.y);
    DrawText(directionText, 50, 600, 18, WHITE);
    DrawText(positionText, 50, 625, 18, WHITE);
    DrawText(velocityText, 50, 650, 18, WHITE);
}


void Player::draw()
{
    DrawRectangle((pos.x - (width / 2)), (pos.y - (height / 2)), width, height, GREEN);




}


