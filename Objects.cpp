#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>
#include <GL/glut.h>
#include "Objects.hpp"
#include "Engine.hpp"

ngin::Cube::Cube() {
	// Making all vertices white as default
	setColor(1.f, 1.f, 1.f);
	// Setting default size of the cube to 50
	setSize(50);
}

void ngin::Cube::setColor(const RGB &passedRGBColor) {
	for(int index = 0; index < 6; index++) {
		VertexColors[index] = passedRGBColor;
	}
}

void ngin::Cube::setColor(const float &Red, const float &Green, const float &Blue) {
	setColor({Red, Green, Blue});
}

void ngin::Cube::setColor(const Color &passedColor) {
	setColor(colorToRGB(passedColor));
}

void ngin::Cube::setSize(const float &Size) {
	_cubeSize = Size;
}

void ngin::Cube::setRotation(const int &XAxies, const int &YAxies, const int &ZAxies) {
	_CubeRotation = {XAxies, YAxies, ZAxies};
}

// Makes a positive number negative and vice versa
float ngin::Cube::flip(const float &number) {
	return -1*number;
}

void ngin::Cube::Display(const ngin::RenderWindow *App) {
	// Prepare for drawing
	// Clear color and depth buffer
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	// Apply some transformations for the cube
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.f, 0.f, -500);

	// Use the cubes own variable to know the rotation and make it
	glRotatef(_CubeRotation.X, 1.f, 0.f, 0.f);
	glRotatef(_CubeRotation.Y, 0.f, 1.f, 0.f);
	glRotatef(_CubeRotation.Z, 0.f, 0.f, 1.f);

	// Draw a cube
	glBegin(GL_QUADS);	//draw some squares

	glColor3i(VertexColors[0].Red, VertexColors[0].Green, VertexColors[0].Blue);
		glVertex3f(flip(_cubeSize), flip(_cubeSize), flip(_cubeSize));
		glVertex3f(flip(_cubeSize), _cubeSize,       flip(_cubeSize));
		glVertex3f( _cubeSize,      _cubeSize,       flip(_cubeSize));
		glVertex3f( _cubeSize,      flip(_cubeSize), flip(_cubeSize));

	glColor3f(VertexColors[1].Red, VertexColors[1].Green, VertexColors[1].Blue);
		glVertex3f(flip(_cubeSize), flip(_cubeSize), _cubeSize);
		glVertex3f(flip(_cubeSize), _cubeSize,       _cubeSize);
		glVertex3f( _cubeSize,      _cubeSize,       _cubeSize);
		glVertex3f( _cubeSize,      flip(_cubeSize), _cubeSize);

	glColor3f(VertexColors[2].Red, VertexColors[2].Green, VertexColors[2].Blue);
		glVertex3f(flip(_cubeSize), flip(_cubeSize), flip(_cubeSize));
		glVertex3f(flip(_cubeSize), _cubeSize,       flip(_cubeSize));
		glVertex3f(flip(_cubeSize), _cubeSize,       _cubeSize);
		glVertex3f(flip(_cubeSize), flip(_cubeSize), _cubeSize);

	glColor3f(VertexColors[3].Red, VertexColors[3].Green, VertexColors[3].Blue);
		glVertex3f(_cubeSize, flip(_cubeSize), flip(_cubeSize));
		glVertex3f(_cubeSize, _cubeSize,       flip(_cubeSize));
		glVertex3f(_cubeSize, _cubeSize,       _cubeSize);
		glVertex3f(_cubeSize, flip(_cubeSize), _cubeSize);

	glColor3f(VertexColors[4].Red, VertexColors[4].Green, VertexColors[4].Blue);
		glVertex3f(flip(_cubeSize), flip(_cubeSize),  _cubeSize);
		glVertex3f(flip(_cubeSize), flip(_cubeSize),  flip(_cubeSize));
		glVertex3f( _cubeSize,      flip(_cubeSize),  flip(_cubeSize));
		glVertex3f( _cubeSize,      flip(_cubeSize),  _cubeSize);

	glColor3f(VertexColors[5].Red, VertexColors[5].Green, VertexColors[5].Blue);
		glVertex3f(flip(_cubeSize), _cubeSize,  _cubeSize);
		glVertex3f(flip(_cubeSize), _cubeSize,  flip(_cubeSize));
		glVertex3f( _cubeSize,      _cubeSize,  flip(_cubeSize));
		glVertex3f( _cubeSize,      _cubeSize,  _cubeSize);

	glEnd();
}
