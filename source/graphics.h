/****************************************************************************
 *  File name: graphics.h
 *  Description:
 *      - The graphical back-end of the project. Contains all of the GLFW
 *        calls
*****************************************************************************/
#ifndef _GRAPHICS_H
#define _GRAPHICS_H


#include "System.h"

typedef struct GLFWwindow GLFWwindow;

typedef struct Graphics
{
  System base;
  GLFWwindow* window;
}Graphics;

/*********************************************
* Name: Stub
* Description:
*   - Stubs
*********************************************/
void GraphicsInitialize();

void GraphicsTick();
GLFWwindow* GraphicsGetGLFWwindow();

void GraphicsTerminate();
#endif
