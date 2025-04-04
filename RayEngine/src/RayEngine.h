#pragma once

#include <raylib.h>

#include "Window/WindowsWindow.h"

namespace Engine
{
	class Engine
	{
	public:
		void Run();

	private:
		WindowsWindow m_WindowsWindow{ 1920, 1080, "Sand!" };
	};
}