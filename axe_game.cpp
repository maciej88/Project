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
    int rectangle_x(300);
    int rectangle_y(0);
    int rectangle_width(50);
    int rectangle_hight(50);

    SetTargetFPS(60);
    while ( WindowShouldClose() == false )
    {
        BeginDrawing();
        ClearBackground( WHITE );

        // starting game logic
        DrawCircle(circle_X, circle_y, 25, BLUE);
        DrawRectangle(rectangle_x, rectangle_y, rectangle_hight, rectangle_width, RED);

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