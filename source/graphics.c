/****************************************************************************
 *  File name: graphics.c
 *  Description:
 *      - The graphical back-end of the project. Contains all of the GLFW 
 *        calls
*****************************************************************************/

#define _WCHAR_T_DEFINED
#define _SIZE_T_DEFINED

#include "stdio.h"

#define GLFW_DLL
#include "GLFW/glfw3.h"
#include "graphics.h"

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
  GLFWwindow* window = glfwCreateWindow(640, 480, "Yes", NULL, NULL);
  
  
  
  if (!window)
  {
    printf("Failed to create window!\n");
  }
  else
  {
    printf("Window Created!\n");

  }

  while (1)
  {

  }
  return;
}

void GraphicsTerminate()
{
  glfwTerminate();
}
