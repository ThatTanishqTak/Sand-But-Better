#include "RayEngine.h"

void Game::Run()
{
	while (!WindowShouldClose())
	{
		// Update
		m_Grid.UpdateGrid(m_Grid.GetGrid());

		ClearBackground(BLACK);
		BeginDrawing();

		// Draw
		m_Grid.DrawGrid(m_Grid.GetGrid());

		EndDrawing();
	}
}