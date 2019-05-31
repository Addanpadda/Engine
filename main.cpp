#include <iostream>
#include "Engine.hpp"
#include <unistd.h>

using std::cout;
using std::endl;

int main() {
		
		ngin::RenderWindow App;
		
		App.Begin();
		
		while(App.Window->isOpen()) {
			sleep(1);
			App.Render();
			cout << "Rendered App!" << endl;
		}

	return 0;
}
