#ifndef RENDEABLEO_H
#define RENDEABLEO_H


class RendeableObject
{


public:
	RendeableObject();
	~RendeableObject();
	virtual int runWindow();
	void processInput(GLFWwindow *window);

protected:
	virtual void renderLoop(GLFWwindow* window);
	GLFWwindow* createWindow();
	//GLAD
	bool loadOpenGlFuntionPointers();

protected:
	const char *vertexShaderSource = "#version 330 core\n"
		"layout (location = 0) in vec3 aPos;\n"
		"void main()\n"
		"{\n"
		"   gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"
		"}\0";

	const char *fragmentShaderSource = "#version 330 core\n"
		"out vec4 FragColor;\n"
		"void main()\n"
		"{\n"
		"   FragColor = vec4(1.0f, 0.5f, 0.2f, 1.0f);\n"
		"}\n\0";

	// settings
	const unsigned int SCR_WIDTH = 800;
	const unsigned int SCR_HEIGHT = 600;

	//functions
	void init();




};




#endif /* RENDEABLEO_H */
