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

	void SetTriDefaults();
	void Draw();
	unsigned int SetVAO();
	unsigned int SetVBO();

	inline unsigned int GetVAO() { return VAO; }
	inline unsigned int GetVBO() { return VBO; }
private:
	static unsigned int VAO;
	static unsigned int VBO;
};

#endif