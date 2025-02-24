#include "Game.h"
#include "raylib/include/raylib.h"

Game::Game()
{
	Init();
}

Game::~Game()
{
	Shutdown();
}

void Game::Run()
{
	while (!WindowShouldClose())
	{
		// Update

		BeginDrawing();
		ClearBackground(BLACK);

		// Render
		m_Renderer.MakeGrid(GetScreenWidth() / m_Renderer.m_CellSize, GetScreenHeight() / m_Renderer.m_CellSize);

		EndDrawing();
	}
}

void Game::Init()
{
	m_Window.Init();
}

void Game::Shutdown()
{
	m_Window.Shutdown();
}