#include <stdlib.h>
#include <stdio.h>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#define UNUSED(x) (void)x

int main(void) {

    if (!glfwInit()) {
        fprintf(stderr, "Could not initialize GLFW, aborting.\n");
        return(EXIT_FAILURE);
    }

    GLFWwindow* window;

    int WIDTH, HEIGHT;
    WIDTH = 800;
    HEIGHT = 600;

    glfwCreateWindow(WIDTH, HEIGHT, "04 coordinate systems.", NULL, window);
    if (!window) {
        fprintf(stderr, "Could not create window, aborting.\n");
        return(EXIT_FAILURE);
    }
    glfwMakeContextCurrent(window);
    glewExperimental = GL_TRUE;
    if(glewInit() != GLEW_OK) {
        fprintf(stderr, "Could not initialize GLEW, aborting.\n");
        return(EXIT_FAILURE);
    }

    printf("Hello.\n");
    return EXIT_SUCCESS;
}
