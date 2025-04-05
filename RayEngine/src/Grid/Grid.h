#pragma once

#include <raylib.h>

#include <vector>

#define GRID std::vector<Rectangle>

struct GridData
{
	GRID grid;
	Color color;
};

namespace Engine
{
	class Grid
	{
	public:
		Grid(int rows, int cols, int size);
		~Grid();

		GRID GetGrid() { return m_Grid; }
		GRID MakeGrid(int rows, int cols, int size);
		
		void DrawGrid(GRID grid);
		void UpdateGrid(GRID grid);

	private:
		GRID m_Grid;

		int m_Size;
		int m_Rows;
		int m_Cols;
	};
}