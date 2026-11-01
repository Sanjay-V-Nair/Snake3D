#pragma once
#include<raylib.h>

namespace CameraSettings {

    class cameraData{
    public:
        Vector3 position = {10,10,10};
        Vector3 target;
        Vector3 up = {0,1,0};
        float fovy = 60;
        int projection = CAMERA_PERSPECTIVE;
    };

    class cameraHandler{

        public:
        Camera3D createCamera(cameraData data);
    };
}