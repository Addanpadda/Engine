#pragma once
#include "SFML/Graphics.hpp"
#include "Objects.hpp"

// Putting all code inside the ngin namespace.
namespace ngin {

    // This class is the main window function which handles everything
    // from the title of the game to the dimentions.
	class RenderWindow {
    private:
        std::string _title;

	public:
	    // RenderWindow constructor
	    RenderWindow();

	    // sf::RenderWindow creates a window with SFML library,
	    // not to be confused with the RenderWindow class above.
		sf::RenderWindow* Window;
		// Variable for storing the game title and space dimentions which
		// later can be used by the begin function.
        Axies spaceDimentions;
		RGB backgroundColor;

		void setTitle(std::string);
		void setSpaceDimentions(const int&, const int&, const int&);
        void setBackgroundColor(const RGB&);
		void setBackgroundColor(const float&, const float&, const float&);
		void setBackgroundColor(const Color&);

        // Different functions to interact with the window.
		void start();
		void render() const;
		void displayObject(Cube) const;

		bool isOpen() const;
	};
}
