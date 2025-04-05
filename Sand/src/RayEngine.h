#pragma once

#include "Window/WindowsWindow.h"
#include "Grid/Grid.h"

#include <raylib.h>

class Game
{
public:
	void Run();

private:
	int m_WindowWidth = 1920;
	int m_WindowHeight = 1080;

	int m_Size = 20;
	int m_Rows = m_WindowWidth / m_Size;
	int m_Cols = m_WindowHeight / m_Size;

private:
	Engine::WindowsWindow m_WindowsWindow{ m_WindowWidth, m_WindowHeight, "Sand!" };
	Engine::Grid m_Grid{ m_Rows, m_Cols, m_Size };
};