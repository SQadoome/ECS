#include <iostream>
#include "raylib.h"


Vector2 screen_size = {
  .x = 1280,
  .y = 720,
};


int main(void) {
  
  InitWindow(1280, 720, "ECS");
  SetTargetFPS(144);

  while (WindowShouldClose() == false) {
    
    BeginDrawing();
    
    ClearBackground((Color) {.r = 120, .g = 120, .b = 120, .a = 255});

    DrawText("Hello world!", (int) screen_size.x*0.4, (int) screen_size.y*0.5, 48, LIGHTGRAY);
    
    EndDrawing();
    
  }

  CloseWindow();
  
  return 0;
}



