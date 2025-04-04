#pragma once

#include <raylib.h>

namespace Engine
{
	class WindowsWindow
	{
	public:
		WindowsWindow(int width, int height, const char* title);
		~WindowsWindow();

	private:
		int m_Width;
		int m_Height;

		const char* m_Title;

	private:
		void Init(int width, int height, const char* title);
		void Shutdown();
	};
}