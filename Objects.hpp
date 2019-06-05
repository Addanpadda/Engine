#ifndef OBJECTS_HPP
#define OBJECTS_HPP

// Putting all code inside the ngin namespace.
namespace ngin {
    // Making the RenderWindow class visable for this file, if not
    // done it won't compile properly.
    class RenderWindow;

    // The Cube class which contains everything needed for rendering
    // a cube.
    class Cube {
    public:
        // This function displays the cube in a RenderWindow window.
        void Display(RenderWindow);
    };
}
#endif
