/*******************************************************************************************
*
*   raylib [core] example - Basic window (adapted for HTML5 platform)
*
*   This example is prepared to compile for PLATFORM_WEB and PLATFORM_DESKTOP
*   As you will notice, code structure is slightly different to the other examples...
*   To compile it for PLATFORM_WEB just uncomment #define PLATFORM_WEB at beginning
*
*   This example has been created using raylib 1.3 (www.raylib.com)
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Copyright (c) 2015 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"
#include "src/Game.h"
#include "src/resource_dir.h"
#include <iostream>

constexpr int SCREEN_WIDTH = 450;
constexpr int SCREEN_HEIGHT = 800;



#if defined(PLATFORM_WEB)
    #include <emscripten/emscripten.h>
#endif
//----------------------------------------------------------------------------------
// Module Functions Declaration
//----------------------------------------------------------------------------------
void UpdateDrawFrame();     // Update and Draw one frame

//----------------------------------------------------------------------------------
// Main Entry Point
//----------------------------------------------------------------------------------

Game* game = new Game(); //Global game instance

int main()
{
    // Initialization
    //--------------------------------------------------------------------------------------



    SearchAndSetResourceDir("resources");

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "FactoryWeb");
    InitAudioDevice();
    SetTargetFPS(120);

    game->Start();
#if defined(PLATFORM_WEB)
    emscripten_set_main_loop(UpdateDrawFrame, 0, 1);
#else
    SetTargetFPS(60);   // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        UpdateDrawFrame();
    }
#endif

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    CloseAudioDevice();
    //--------------------------------------------------------------------------------------

    return 0;
}

//----------------------------------------------------------------------------------
// Module Functions Definition
//----------------------------------------------------------------------------------
void UpdateDrawFrame()
{
    const float dt = GetFrameTime();
    DrawFPS(400, 0);
    // Update
    //----------------------------------------------------------------------------------
    // TODO: Update your variables here
    //----------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    BeginDrawing();

        ClearBackground(BLACK);
        game->Update(dt);



    EndDrawing();
    //----------------------------------------------------------------------------------
}
