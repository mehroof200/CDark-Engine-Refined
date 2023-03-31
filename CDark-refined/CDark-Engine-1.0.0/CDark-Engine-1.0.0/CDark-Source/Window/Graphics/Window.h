#ifndef CDARK_WINDOW
#define CDARK_WINDOW

#include "GLFW/glfw3.h"

#pragma comment(lib, "opengl32.lib")

#include <iostream>


using namespace std;

/* 
	* !@brief The Engine Class
	* All Of the Window Code I Referenced From Progrematic's video: https://www.youtube.com/watch?time_continue=4&v=4R5vSIZxr0M&embeds_euri=https%3A%2F%2Fwww.bing.com%2F&embeds_origin=https%3A%2F%2Fwww.bing.com&feature=emb_logo
	* So please All the credit to him, because without his videos this wouldn't be possible!
	* And also I'm using NuGet Package 'nupengl.core' And Since The Package is depracated it might not work :P.
*/
class Engine
{
public:
	static int SCREEN_WIDTH;
	static int SCREEN_HEIGHT;

	Engine();
	~Engine();

	bool Initialize(const char* windowTitle);


	void Update();
	void Clear(float r, float g, float b);
	int CloseWindow();
	void TerminateApplication();

private:

	static GLFWwindow* window;

};


#endif
