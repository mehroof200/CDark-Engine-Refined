#include "../Window/Graphics/Window.h" // Double dots and a slash to go back one Folder.
#include "../Pad/shapes/pad_shapes.h"

#include <iostream> // You need this in order to print strings, integers .etc

using namespace std; // I know this isn't a good practice.

int main() // The entry point of application (e.g Win32 uses int WINAPI WinMain() {}).
{
	cout << "Hello, World!" << endl; // You don't need this.

	Atlas atlas;

	Engine engine; // Gaining acess to the Engine class; this is general OOP (Object-Oriented-Porgramming). 

	engine.Initialize("My CDark Game!"); // Initializies GLEW and GLFW (Also Creates A Window).

	GLuint VertexArrayID{}, vertexbuffer{};

	atlas.SetTriDefaults(VertexArrayID, vertexbuffer);

	while (!engine.CloseWindow()) // Run until the user closes the application entirely.
	{
		engine.Clear(0.0f, 0.0f, 1.0f); // Gives a nice blue color.
		atlas.Draw(vertexbuffer);
		engine.Update(); // Checks for events and swaps front and back buffers (More Info On GLFW Documentation).
	}

	engine.TerminateApplication(); // Once we are done, we terminate the Application (*PROJECT_NAME*.exe).
	return 0; // As all good c++ application, we add a return 0.
} // Fin.