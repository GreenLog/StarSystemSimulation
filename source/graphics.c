/****************************************************************************
 *  File name: graphics.c
 *  Description:
 *      - The graphical back-end of the project. Contains all of the GLFW 
 *        calls
*****************************************************************************/



#include "CommonIncludes.h"

#define GLFW_DLL
#define GLFW_INCLUDE_NONE
#include "GLFW/glfw3.h"
#include <gl/gl.h>
#include <stdio.h>
#include "graphics.h"
#include "SystemManager.h"

GLFWwindow* window = NULL;
void error_callback(int error, const char* description)
{
  printf("Error: %s\n", description);
}

/*********************************************
* Name: Stub
* Description:
*   - Stubs
*********************************************/
void GraphicsInitialize()
{
  if (!glfwInit())
  {
    printf("Graphics Failed to Initialize!\n");
  }
  printf("Graphics Initialized!\n");
  glfwSetErrorCallback(error_callback);
  glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

  GLFWmonitor* primary = glfwGetPrimaryMonitor();
  if (!primary)
  {
    printf("Failed to fetch monitor!\n");

  }
  else
  {
    printf("Monitor fetched!\n");
  }
  window = glfwCreateWindow(640, 480, "Yes", NULL, NULL);
  GET_SYSTEM(Graphics)->window = window;
  
  
  if (!window)
  {
    printf("Failed to create window!\n");
  }
  else
  {
    printf("Window Created!\n");

  }

  return;
}

void GraphicsTick()
{
  
  glfwSwapBuffers(window);
}

GLFWwindow* GraphicsGetGLFWwindow()
{
  return window;
}

void GraphicsTerminate()
{
  glfwTerminate();
}
