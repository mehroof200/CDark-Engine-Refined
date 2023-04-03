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

	if (glewInit() != GLEW_OK)
	{
		std::cout << "Error!" << std::endl;

		return false;
	}

	return true;
}



void Engine::Update()
{

	glfwPollEvents();
	glfwSwapBuffers(window);
}


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
