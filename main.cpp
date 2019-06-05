#include <iostream>
#include "Engine.hpp"
#include <unistd.h>

// Making the functions std::cout and std::endl easy to use without
// having to specify the std namespace.
using std::cout;
using std::endl;

int main() {

        // Creating the App window and let it begin and which mean
        // it initializes all needed variables, function etc.
		ngin::RenderWindow App;
        App.Begin();

        // Making the cube and displaying it in the App window.
		ngin::Cube myCube;
        App.DisplayObject(myCube);

        // Game loop, checks if window is open and if so
        // continiues running.
		while(App.isOpen()) {
			sleep(1);
			App.Render();
			cout << "Rendered App!" << endl;
		}

	return 0;
}
