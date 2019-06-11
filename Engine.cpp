#include <GL/glut.h>
#include <iostream>
#include "Engine.hpp"

ngin::RenderWindow::RenderWindow() {
    setTitle("Game");

    // Setting the dimentions for the 3D space
    spaceDimentions = {800, 600, 30};
}

void ngin::RenderWindow::setTitle(std::string Title) {
        // This makes the string passed to the title variable inside RenderWindow.
		_title = Title;
}

void ngin::RenderWindow::setSpaceDimentions(const int &x, const int &y, const int &z) {
    // This makes the integer passed to the dimention variables inside RenderWindow for 3D.
	spaceDimentions = {x, y, z};
}

void ngin::RenderWindow::setBackgroundColor(const RGB &passedRGBColor) {
    backgroundColor = passedRGBColor;
}

void ngin::RenderWindow::setBackgroundColor(const float &Red, const float &Green, const float &Blue) {
    setBackgroundColor({Red, Green, Blue});
}

void ngin::RenderWindow::setBackgroundColor(const Color &passedColor) {
    setBackgroundColor(colorToRGB(passedColor));
}

void ngin::RenderWindow::start() {
    // Creating an SFML window object which creates the window and which later can
    // be manipulated through this library.
    ngin::RenderWindow::Window = new sf::RenderWindow(sf::VideoMode(spaceDimentions.X, spaceDimentions.Y, spaceDimentions.Z), ngin::RenderWindow::_title);

    // Prepare OpenGL surface for HSR
    glClearDepth(1.f);
    glClearColor(backgroundColor.Red, backgroundColor.Green, backgroundColor.Blue, 0.f);
    glEnable(GL_DEPTH_TEST);
    glDepthMask(GL_TRUE);

    // Setup a perspective projection & Camera position
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(90.f, 1.f, 1.f, 1000.0f);//fov, aspect, zNear, zFar

    // Rendering for the first frame.
   render();
}

void ngin::RenderWindow::render() const {
	Window->display();
}

void ngin::RenderWindow::displayObject(ngin::Cube currentCube) const {
    currentCube.Display(this);
}

bool ngin::RenderWindow::isOpen() const {
    return Window->isOpen();
}
