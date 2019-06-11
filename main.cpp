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
		App.setBackgroundColor(1.f, 1.f, 1.f);   // Optional (dafault black)
        App.start();

        // Making the cube object and displaying it in the App window.
		ngin::Cube myCube;
		myCube.setColor(0.5f, 0.5f, 0.5f);   // Optional (default white)

        // Game loop, checks if window is open and if so
        // continiues running.
		while(App.isOpen()) {
            myCube.setRotation(45, 45, 0);  // Optional
            App.displayObject(myCube);
			App.render();
			cout << "Rendered App!" << endl;
            sleep(1);
		}

	return 0;
}
