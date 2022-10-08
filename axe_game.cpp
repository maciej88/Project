#include "raylib.h"
int main()
{
    int width;
    width = 350;
    InitWindow(width, 200, "Maciej's window");

    while ( WindowShouldClose() == false )
    {
        BeginDrawing();
        ClearBackground( WHITE );

        DrawCircle(175, 100, 25, BLUE);
        EndDrawing();
    }
    
}