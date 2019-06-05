#include <GL/glut.h>
#include <iostream>
#include "Engine.hpp"

void ngin::RenderWindow::setTitle(std::string Title) {
        // This makes the string passed to the title variable inside RenderWindow.
		ngin::RenderWindow::title = Title;
}

void ngin::RenderWindow::setResolution(int x, int y) {
    // This makes the integer passed to the dimention variables inside RenderWindow for 2D.
	this->WindowX = x;
	this->WindowY = y;
}

void ngin::RenderWindow::setResolution(int x, int y, int z) {
    // This makes the integer passed to the dimention variables inside RenderWindow for 3D.
	this->WindowX = x;
	this->WindowY = y;
	this->WindowZ = z;
}

void ngin::RenderWindow::Begin() {
        // Creating an SFML window object which creates the window and which later can
        // be manipulated through this library.
		ngin::RenderWindow::Window = new sf::RenderWindow(sf::VideoMode(this->WindowX, this->WindowY, this->WindowZ), ngin::RenderWindow::title);

        // Clearing and displaying a first frame.
		ngin::RenderWindow::Window->clear();
		ngin::RenderWindow::Window->display();
}

void ngin::RenderWindow::Render() {
	this->Window->display();
}

void ngin::RenderWindow::DisplayObject(ngin::Cube currentCube) {
    currentCube.Display(*this);
}

bool ngin::RenderWindow::isOpen() {
    return this->Window->isOpen();
}
