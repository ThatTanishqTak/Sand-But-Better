#pragma once

#include "Window.h"
#include "Renderer.h"

class Game
{
public:
	Game();
	~Game();

	void Run();

	Engine::Window m_Window;
	Engine::Renderer m_Renderer;

private:
	void Init();
	void Shutdown();
};