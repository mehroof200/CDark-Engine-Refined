#include "../Window/Graphics/Window.h"

#include <iostream>

using namespace std;

int main()
{
	cout << "Hello, World!" << endl;

	Engine engine;

	engine.Initialize("My CDark Game!");

	while (!engine.CloseWindow())
	{
		engine.Clear(0.0f, 0.0f, 1.0f);
		engine.Update();
	}

	engine.TerminateApplication();
	return 0;
}