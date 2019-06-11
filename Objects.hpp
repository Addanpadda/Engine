#pragma once
#include "Common.hpp"

// Putting all code inside the ngin namespace.
namespace ngin {
    // The Cube class which contains everything needed for rendering
    // a cube.
    class Cube {
    private:
        Axies _CubeRotation;
        float _cubeSize;
        float flip(const float&);

    public:
        // Cube constructor
        Cube();
        ngin::RGB VertexColors[6];
        void setColor(const RGB&);
        void setColor(const float&, const float&, const float&);
		void setColor(const Color&);
        void setSize(const float&);
        // This function displays the cube in a RenderWindow window.
        void Display(const RenderWindow*);
        void setRotation(const float&, const float&, const float&);
    };
}

