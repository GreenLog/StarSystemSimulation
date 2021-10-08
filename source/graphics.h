/****************************************************************************
 *  File name: graphics.h
 *  Description:
 *      - The graphical back-end of the project. Contains all of the GLFW
 *        calls
*****************************************************************************/
#ifndef _GRAPHICS_H
#define _GRAPHICS_H

#include "GLFW/glfw3.h"

typedef Graphics;

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
