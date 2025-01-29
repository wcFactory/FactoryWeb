//
// Created by Will Chapman on 29/01/2025.
//

#ifndef MIRROR_H
#define MIRROR_H
#include <raylib.h>


class Mirror
{
public:
    Mirror(Vector2 startPos, Vector2 endPos );
    ~Mirror();

    void Start();
    void Update(float dt);
    void End();

    Vector2 startPos {};
    Vector2 endPos {};

private:

};



#endif //MIRROR_H
