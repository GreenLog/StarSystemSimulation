/****************************************************************************
 *  File name: stub.c
 *  Description:
 *      -
*****************************************************************************/
#include <stdlib.h>
#include <stdio.h>

#include "CommonIncludes.h"

#include "Input.h"

#define GLFW_INCLUDE_NONE
#include "GLFW/glfw3.h"
#include "graphics.h"
#include "SystemManager.h"



const int keyArraySize = GLFW_KEY_LAST;

int *keys = NULL;
int keyCount = 0;
GLFWwindow* window;


bool KeyPressed(int key);
bool KeyHeld(int key);
bool KeyReleased(int key);

bool FindKey(int key);

void AddKey(int key, int action);

void InputCallBackFunction(GLFWwindow* window, int key, int scancode, int action, int mods);

/*********************************************
* Name: Stub
* Description:
*   - Stubs
*********************************************/
void InputInitialize()
{
  keys = (int*)malloc(sizeof(int) * keyArraySize);
  Input* input = GET_SYSTEM(Input);

  input->KeyHeld = KeyHeld;
  input->KeyPressed = KeyPressed;
  input->KeyReleased = KeyReleased;

  if (!(window = GET_SYSTEM(Graphics)->window))
  {
    printf("Window is NULL\n");
  }
  glfwSetKeyCallback(window, InputCallBackFunction);
  printf("Input Initialized!\n");

}


void InputTick()
{
  for (int i = 0; i < keyArraySize; i++)
  {
    keys[i] = -1;
  }

}

void LateTickInput()
{
  
}

void InputTerminate()
{
  free(keys);
}

bool KeyPressed(int key)
{
  return keys[key] == GLFW_PRESS;
  
}

bool KeyHeld(int key)
{
  return keys[key] == GLFW_REPEAT;
}

bool KeyReleased(int key)
{
  return keys[key] == GLFW_RELEASE;
}


bool FindKey(int key)
{
  for (int i = 0; i < keyCount; i++)
  {
    if (keys[i] == key)
    {
      return true;
    }
  }
  return false;
}

void AddKey(int key, int action)
{
  keys[key] = action;
}

void InputCallBackFunction(GLFWwindow* window, int key, int scancode, int action, int mods)
{
  printf("%d %d\n", key, action);
  AddKey(key, action);
}
