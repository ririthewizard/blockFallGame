#include <raylib.h>
#include "game.h"


int main()
{
    InitWindow(300, 600, "raylib BlockFall");
    SetTargetFPS(90);
    Color darkBlue = {44, 44, 127, 255};


    // Grid grid = Grid();
    Game game = Game();
    

    while(WindowShouldClose() == false){
        BeginDrawing();
        ClearBackground(darkBlue);
        game.Draw();
        EndDrawing();
    }

    CloseWindow();
}