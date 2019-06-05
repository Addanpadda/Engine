#ifndef ENGINE_HPP
#define ENGINE_HPP
#include "SFML/Graphics.hpp"
#include "Objects.hpp"

// Putting all code inside the ngin namespace.
namespace ngin {

    // This class is the main window function which handles everything
    // from the title of the game to the dimentions.
	class RenderWindow {
	public:
	    // sf::RenderWindow creates a window with SFML library,
	    // not to be confused with the RenderWindow class above.
		sf::RenderWindow* Window;
		// Variable for storing the game title and window dimentions which
		// later can be used by the begin function.
		std::string title = "Game";
		int WindowX = 800, WindowY = 600, WindowZ = 32;

		void setTitle(std::string);
		void setResolution(int x, int y);
		void setResolution(int x, int y, int z);

        // Different functions to interact with the window.
		void Begin();
		void Render();
		void DisplayObject(ngin::Cube);

		bool isOpen();

	};
}

#endif
