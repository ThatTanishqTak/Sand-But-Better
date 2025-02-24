#pragma once

namespace Engine
{
	class Window
	{
	public:
		void Init();
		void Shutdown();

	private:
		int m_Width = 1920;
		int m_Height = 1080;
		const char* m_Title = "Game";
	};
}