#include <iostream>

#include "ThirdParty\headers\GLFW\glfw3.h"



int main(int argc, char** argv) {
	 

	glfwInit();
	GLFWwindow * window = glfwCreateWindow(500, 500, "feDuke", NULL, NULL);


	std::cout << "Hello, world" << std::endl;

	int derp;
	
	 std::cin >> derp;

	return 0;
}