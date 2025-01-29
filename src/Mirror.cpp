//
// Created by Will Chapman on 29/01/2025.
//

#include "Mirror.h"

Mirror::Mirror(Vector2 startPos, Vector2 endPos)
{
    this->startPos = startPos;
    this->endPos = endPos;

}

Mirror::~Mirror() {
}

void Mirror::Start()
{

}

void Mirror::Update(float dt)
{
    DrawLineEx(startPos, endPos, 10, RED);

}

void Mirror::End() {
}
