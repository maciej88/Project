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
    int axe_x(400);
    int axe_y(0);
    int axe_width(50);
    int axe_height(50);

    int direction{10};

    SetTargetFPS(60);
    while ( WindowShouldClose() == false )
    {
        BeginDrawing();
        ClearBackground( WHITE );

        // starting game logic
        DrawCircle(circle_X, circle_y, 25, BLUE);
        DrawRectangle(axe_x, axe_y, axe_height, axe_width, RED);

        // axe movement
        axe_y += direction;
        if (axe_y > 450 || axe_y < 0)
        {
            direction = -direction;
        }

        // controls
        if (IsKeyDown(KEY_D) && circle_X < width)
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