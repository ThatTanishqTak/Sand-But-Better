#include "raylib.h"
#include "Renderer.h"

namespace Engine
{
	std::vector<std::vector<Rectangle>> Renderer::MakeGrid(int row, int cols)
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				DrawRectangleLines(i * 10, j * 10, 10, 10, BLACK);
			}
		}

		return std::vector<std::vector<Rectangle>>();
	}
}