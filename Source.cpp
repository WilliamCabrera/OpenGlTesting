#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>


#include "Header.h";
#include "RendeableObject.h";
#include "Object3D.h";
using namespace std;



//void framebuffer_size_callback(GLFWwindow* window, int width, int height);
//void processInput(GLFWwindow *window);



int main()
{
	

	float * vertex = new float[12]{
		0.5f,  0.5f, 0.0f,  // top right
		0.5f, -0.5f, 0.0f,  // bottom right
		-0.5f, -0.5f, 0.0f,  // bottom left
		-0.5f,  0.5f, 0.0f   // top left 
	};
	unsigned int * index = new unsigned int[6]{  // note that we start from 0!
		0, 1, 3,  // first Triangle
		1, 2, 3   // second Triangle
	};


	// glfw: initialize and configure
	// ------------------------------

	float vertices[] = {
		-0.5f, -0.5f, 0.0f, // left  
		0.5f, -0.5f, 0.0f, // right 
		0.0f,  0.5f, 0.0f  // top   
	};
	int sz = sizeof(vertices);

	cout << "sizeof : " << sz << endl;

	Object3D * object3D = new Object3D(vertex,9);
	return object3D->runWindow();
	
	system("pause");
	return 0;
}

//

// glfw: whenever the window size changed (by OS or user resize) this callback function executes
// ---------------------------------------------------------------------------------------------
void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
	// make sure the viewport matches the new window dimensions; note that width and 
	// height will be significantly larger than specified on retina displays.
	glViewport(0, 0, width, height);
}