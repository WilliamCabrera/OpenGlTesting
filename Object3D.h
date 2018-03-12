#ifndef OBJECT3D_H
#define OBJECT3D_H


class Object3D : public RendeableObject
{
public:
	Object3D(float *_vertex, int size);
	~Object3D();
	int runWindow();

protected:
	void renderLoop(GLFWwindow* window);
	virtual void vertexShaderBuilder();
	virtual void vertexDataSetUp();

private:
	float *vertex;
	int size;
	unsigned int VBO, VAO, EBO;
	int shaderProgram;

};

#endif // !OBJECT3D_H

