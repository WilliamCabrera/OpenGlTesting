#ifndef HEADER_H
#define HEADER_H

 //char *vertexShaderSource = "a";



// settings
const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;

void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void processInput(GLFWwindow *window);
int runWindow();
int runTriangle();
int runCube();



#endif /* HEADER_H */