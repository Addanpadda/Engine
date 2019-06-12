#pragma once

namespace ngin {

	struct RGB {
		float Red = 0.0f, Green = 0.0f, Blue = 0.0f;
	};

	struct Axies {
		int X = 0, Y = 0, Z = 0;
	};

	enum Color {
		Red, Green, Blue, White, Black
	};

	class RenderWindow;
	class Cube;
	RGB colorToRGB(const Color&);
}
