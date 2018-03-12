#ifndef OBJECT3D_H
#define OBJECT3D_H


class Object3D : public RendeableObject
{
public:
	Object3D(float *_vertex);
	~Object3D();
	int runWindow();

protected:
	void renderLoop(GLFWwindow* window);
	virtual void vertexShaderBuilder();
	virtual void vertexDataSetUp();

private:
	float *vertex;
	unsigned int VBO, VAO;
	int shaderProgram;

};

#endif // !OBJECT3D_H

