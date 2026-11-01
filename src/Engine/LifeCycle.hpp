#pragma once

namespace LifeCycle {
    class gameLifeCycle {
        public:
        void init();
        void update(float dt);
        void draw();
        void deinit();

        private:
        void tick();
        float m_counter {};
    };
}