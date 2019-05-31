// Engine.cpp


#include "Engine.hpp"
#include <unistd.h>
#include <GL/glut.h>

#include "SFML/Graphics.hpp"
#include "SFML/OpenGL.hpp"
#include <iostream>
#include "Engine.hpp"

void ngin::RenderWindow::setTitle(std::string Title) {
		ngin::RenderWindow::title = Title;
}

void ngin::RenderWindow::setResolution(int x, int y) {
	this->WindowX = x;
	this->WindowY = y;
}

void ngin::RenderWindow::setResolution(int x, int y, int z) {
	this->WindowX = x;
	this->WindowY = y;
	this->WindowZ = z;
}

void ngin::RenderWindow::Begin() {
		
		ngin::RenderWindow::Window = new sf::RenderWindow(sf::VideoMode(this->WindowX, this->WindowY, this->WindowZ), ngin::RenderWindow::title);

		ngin::RenderWindow::Window->clear();
		ngin::RenderWindow::Window->display();
}

void ngin::RenderWindow::Render() {
	//this->Window->clear();
	this->Window->display();
}
