#include "LifeCycle.hpp"
#include "GameSettings.hpp"

namespace LifeCycle{
    
    void gameLifeCycle::update(float dt){
        m_counter += dt;
        if(m_counter >= GameSettings::TICK_SEC){
            tick();
            m_counter = 0;
        }
    } 

    void gameLifeCycle::tick(){
        std::cout<<"Tick"<<std::endl;
    }

}