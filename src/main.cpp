#include<raylib.h>
#include "Engine/CameraSettings.hpp"
#include "Engine/LifeCycle.hpp"

int main(){
    InitWindow(1000, 800, "Snake Game");
    LifeCycle::gameLifeCycle game {};
    CameraSettings::cameraHandler cameraHandler {};
    
    while(!WindowShouldClose()){

        game.update(GetFrameTime());

        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Welcome to Snake Game", 190, 200, 20, LIGHTGRAY);

        auto camera {cameraHandler.createCamera(CameraSettings::cameraData())};
        BeginMode3D(camera);
        //DrawCube({}, 2, 2, 2, Color{255, 0, 0, 255});
        DrawCube({}, 2, 2, 2, SKYBLUE);
        EndMode3D();

        EndDrawing();
    } 
    CloseWindow();
    return 0;
}