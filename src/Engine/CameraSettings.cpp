#include "CameraSettings.hpp"

namespace CameraSettings {
    
    Camera3D cameraHandler::createCamera(cameraData data){
        Camera3D camera;
        camera.position = data.position;
        camera.target = data.target;
        camera.up = data.up;
        camera.fovy = data.fovy;
        camera.projection = data.projection;
        return camera;
    }
}