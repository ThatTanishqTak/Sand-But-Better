#pragma once

#include <vector>

namespace Engine
{
	// Rectangle, 4 components
	typedef struct Rectangle {
		float x;                // Rectangle top-left corner position x
		float y;                // Rectangle top-left corner position y
		float width;            // Rectangle width
		float height;           // Rectangle height
	} Rectangle;

	class Renderer
	{
	public:
		std::vector<std::vector<Rectangle>> MakeGrid(int row, int cols);

		int m_CellSize = 10;

	private:

	};
}