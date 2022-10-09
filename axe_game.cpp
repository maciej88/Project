#include "raylib.h"
int main()
{
    // window dimensions
    int width{800};
    int height{450};
    InitWindow(width, height, "Maciej's window");

    //circle coordinates
    int circle_x{200};
    int circle_y{200};
    int circle_radius{25};
    // circle edges
    int l_circle_x{circle_x - circle_radius};
    int r_circle_x{circle_x + circle_radius};
    int u_circle_y{circle_y - circle_radius};
    int b_circle_y{circle_y + circle_radius};


    // axe cordinates
    int axe_x(400);
    int axe_y(0);
    int axe_lenght{50};
    // axe edges
    int l_axe_x{axe_x};
    int r_axe_x{axe_x + axe_lenght};
    int u_axe_y{axe_y};
    int b_axe_y{axe_y + axe_lenght};

    int direction{10};

    SetTargetFPS(60);
    while ( WindowShouldClose() == false )
    {
        BeginDrawing();
        ClearBackground( WHITE );

        // starting game logic
        DrawCircle(circle_x, circle_y, circle_radius, BLUE);
        DrawRectangle(axe_x, axe_y, axe_lenght, axe_lenght, RED);

        // axe movement
        axe_y += direction;
        if (axe_y > 450 || axe_y < 0)
        {
            direction = -direction;
        }

        // controls
        if (IsKeyDown(KEY_D) && circle_x < width)
        {
            circle_x += 10;
        }
        if (IsKeyDown(KEY_A) && circle_x > 0)
        {
            circle_x -= 10;
        }

        // ending game logic
        EndDrawing();
    }
    
}