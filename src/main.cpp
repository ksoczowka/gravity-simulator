#include "include/planet.hpp"

#include <raylib.h>

int main() {
    InitWindow(800, 600, "Gravity Simulator");
    SetExitKey(KEY_BACKSPACE);

    planet::System system;

    KeyboardKey lastClicked = KEY_ONE;

    while(!WindowShouldClose()) {
        if(IsKeyPressed(KEY_ONE)) lastClicked = KEY_ONE;
        if(IsKeyPressed(KEY_TWO)) lastClicked = KEY_TWO;
        if(IsKeyPressed(KEY_THREE)) lastClicked = KEY_THREE;

        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
            switch(lastClicked) {
                case KEY_ONE:
                    system.addPlanet(planet::PlanetType::Small, GetMousePosition());
                    break;
                case KEY_TWO:
                    system.addPlanet(planet::PlanetType::Medium, GetMousePosition());
                    break;
                case KEY_THREE:
                    system.addPlanet(planet::PlanetType::Big, GetMousePosition());
                    break;
            }
        }

        BeginDrawing();
        ClearBackground(BLACK);
        system.drawPlanets();
        EndDrawing();
    }
}