#ifndef PAR_SHAPES_HEADER
#define PAR_SHAPES_HEADER

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#pragma comment(lib, "opengl32.lib")

#include <iostream>

using namespace std;

class Atlas
{
public:
	Atlas();
	~Atlas();

	static const GLfloat g_vertex_buffer_data[];

	void SetTriDefaults(GLuint VAO, GLuint VBO);
	void Draw(GLuint vertexbuffer);
private:

};

#endif