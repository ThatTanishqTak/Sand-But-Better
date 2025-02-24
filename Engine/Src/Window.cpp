#include "Window.h"
#include "raylib.h"

namespace Engine
{
	void Window::Init()
	{
		SetConfigFlags(FLAG_WINDOW_RESIZABLE);
		InitWindow(m_Width, m_Height, m_Title);
		SetTargetFPS(60);
	}

	void Window::Shutdown()
	{
		CloseWindow();
	}
}