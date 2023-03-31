#include "Window.h"


int Engine::SCREEN_WIDTH = 1024;
int Engine::SCREEN_HEIGHT = 768;

GLFWwindow* Engine::window = NULL;

Engine::Engine()
{



}


Engine::~Engine()
{



}

/*
* !@brief Intializes GLFW And Creates The Window.
*/
bool Engine::Initialize(const char* windowTitle)
{

	if (!glfwInit())
	{
		cout << "Error!" << endl;

		return false;
	}


	window = glfwCreateWindow(SCREEN_WIDTH, SCREEN_HEIGHT, windowTitle, NULL, NULL);

	if (window == NULL)
	{
		cout << "No Window!" << endl;

		return false;
	}

	//GLFW setup

	glfwMakeContextCurrent(window);

	int width, height;

	glfwGetFramebufferSize(window, &width, &height);

	glfwSwapInterval(1);


	const GLFWvidmode* mode = glfwGetVideoMode(glfwGetPrimaryMonitor());

	int xpos = (mode->width - SCREEN_WIDTH) / 2;
	int ypos = (mode->height - SCREEN_HEIGHT) / 2;

	glfwSetWindowPos(window, xpos, ypos);


	// GL Setup
	// Viewport

	glViewport(0, 0, width, height);

	glMatrixMode(GL_PROJECTION);

	glLoadIdentity();

	glOrtho(0, width, 0, height, -10, 10);

	glDepthRange(-10, 10);

	glMatrixMode(GL_MODELVIEW);

	// Alpha Blending

	glEnable(GL_ALPHA_TEST);

	glEnable(GL_BLEND);

	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);


	return true;
}



/*
* !@brief Updates The Window And Swap The Buffers.
* WARNING: Render Everything Before You Call the Update() Function.
*/
void Engine::Update()
{

	glfwPollEvents();
	glfwSwapBuffers(window);
}

/*
* !@brief Colors The Window.
* r is Red, g is Green and b is blue. But it uses 0 to 1 rgb color space.
* It is also cleared with GL_COLOR_BUFFER_BIT and GL_DEPTH_BUFFER_BIT.
*/
void Engine::Clear(float r, float g, float b)
{
	glClearColor(r, g, b, 1.0f);

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

int Engine::CloseWindow()
{
	glfwWindowShouldClose(window);

	return glfwWindowShouldClose(window);
}

void Engine::TerminateApplication()
{
	glfwTerminate();
}
