#include "raylib.h"

void NoLog(int msgType, const char *text, va_list args)
{
    return;
}

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 600;
    
    SetTraceLogCallback(NoLog);
    
    InitWindow(screenWidth, screenHeight, "Hello World in Raylib");
    
    SetTargetFPS(60);
    
    while (!WindowShouldClose())
    {
        BeginDrawing();
        
            ClearBackground(RAYWHITE);
            
            DrawFPS(5, 5);
            
            const char text1[] = "Hello World";
            const int text1Width = MeasureText(text1, 20) / 2;
            DrawText(text1, 400 - text1Width, 300, 20, BLACK);
        
        EndDrawing();
    }
    
    CloseWindow();
    
    return 0;
}