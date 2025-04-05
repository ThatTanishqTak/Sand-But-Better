#include "Grid.h"

#include <iostream>

namespace Engine
{
	Grid::Grid(int rows, int cols, int size) : m_Rows(rows), m_Cols(cols), m_Size(size)
	{
		MakeGrid(m_Rows, m_Cols, m_Size);
	}

	Grid::~Grid()
	{

	}

	GRID Grid::MakeGrid(int rows, int cols, int size)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				Rectangle rect = { static_cast<float>(i) * size, static_cast<float>(j) * size, static_cast<float>(size), static_cast<float>(size) };
				m_Grid.push_back(rect);
			}
		}

		return m_Grid;
	}

	void Grid::DrawGrid(GRID grid)
	{
		for (Rectangle rect : grid)
		{
			DrawRectangleRec(rect, BLACK);
		}
	}

	void Grid::UpdateGrid(GRID grid)
	{
		for (Rectangle rect : grid)
		{
			if (IsMouseButtonPressed(0))
			{
				if (CheckCollisionPointRec(GetMousePosition(), rect))
				{
					std::cout << rect.x << " " << rect.y << std::endl;
				}
			}
		}
	}
}