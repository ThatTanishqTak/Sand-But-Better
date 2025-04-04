#include "RayEngine.h"

namespace Engine
{
	void Engine::Run()
	{
		while (!WindowShouldClose())
		{
			ClearBackground(RED);
			BeginDrawing();

			EndDrawing();
		}
	}
}