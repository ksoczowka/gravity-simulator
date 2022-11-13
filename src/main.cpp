#include <raylib.h>

int main() {
    InitWindow(800, 600, "Gravity Simulator");
    SetExitKey(KEY_BACKSPACE);
    while(!WindowShouldClose()) {
        
        BeginDrawing();
        ClearBackground(BLACK);
        EndDrawing();
    }
}