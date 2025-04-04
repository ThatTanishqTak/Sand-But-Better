#include "WindowsWindow.h"

namespace Engine
{
	WindowsWindow::WindowsWindow(int width, int height, const char* title) : m_Width(width), m_Height(height), m_Title(title)
	{
		Init(m_Width, m_Height, m_Title);
	}

	WindowsWindow::~WindowsWindow()
	{
		Shutdown();
	}

	void WindowsWindow::Init(int width, int height, const char* title)
	{
		InitWindow(width, height, title);
		SetTargetFPS(60);
	}

	void WindowsWindow::Shutdown()
	{
		CloseWindow();
	}
}