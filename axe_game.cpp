#include "raylib.h"
int main()
{
    // window dimensions
    int width;
    width = 350;
    InitWindow(width, 200, "Maciej's window");

    //circle coordinates
    int circle_X{175};
    int circle_y{100};


    while ( WindowShouldClose() == false )
    {
        BeginDrawing();
        ClearBackground( WHITE );

        // starting game logic
        DrawCircle(circle_X, circle_y, 25, BLUE);

        if (IsKeyDown(KEY_D))
        {
            circle_X += 10;
        }
        // ending game logic
        EndDrawing();
    }
    
}