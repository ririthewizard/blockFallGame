#include <raylib.h>
#include "grid.h"

int main()
{
    InitWindow(300, 600, "raylib BlockFall");
    SetTargetFPS(90);
    Color darkBlue = {44, 44, 127, 255};

    Grid grid = Grid();
    grid.Print();

    while(WindowShouldClose() == false){
        BeginDrawing();
        ClearBackground(darkBlue);
        grid.Draw();

        EndDrawing();
    }

    CloseWindow();
}