#include "raylib.h"
int main()
{
    // window dimensions
    int width{800};
    int height{450};
    InitWindow(width, height, "Maciej's window");

    //circle coordinates
    int circle_X{200};
    int circle_y{200};

    // axe cordinates
    int rectangle_x(300);
    int rectangle_y(0);
    int rectangle_width(50);
    int rectangle_height(50);

    SetTargetFPS(60);
    while ( WindowShouldClose() == false )
    {
        BeginDrawing();
        ClearBackground( WHITE );

        // starting game logic
        DrawCircle(circle_X, circle_y, 25, BLUE);
        DrawRectangle(rectangle_x, rectangle_y, rectangle_height, rectangle_width, RED);

        if (IsKeyDown(KEY_D) && circle_X < 350)
        {
            circle_X += 10;
        }
        if (IsKeyDown(KEY_A) && circle_X > 0)
        {
            circle_X -= 10;
        }

        // ending game logic
        EndDrawing();
    }
    
}