// Engine.hpp

#ifndef ENGINE_HPP
#define ENGINE_HPP
#include "SFML/Graphics.hpp"

namespace ngin {
	
	class RenderWindow {
	public:
		sf::RenderWindow* Window;
		std::string title = "Game";
		int WindowX = 800, WindowY = 600, WindowZ = 32;
		
		void setTitle(std::string);
		void setResolution(int x, int y);
		void setResolution(int x, int y, int z);
		
		//void Begin();
		#include "Begin.h"

		void Render();
	};

	class Draw {
	public:
		
		class Cube {
		public:
			
			
		};
		
		
	};

}

#endif
