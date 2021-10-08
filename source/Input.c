/****************************************************************************
 *  File name: stub.c
 *  Description:
 *      -
*****************************************************************************/
#include <stdlib.h>
#include "CommonIncludes.h"

#include "Input.h"
#include "GLFW/glfw3.h"
#include "graphics.h"
#include "System.h"

const int keyArraySize = 256;

int *keys = NULL;
int keyCount = 0;
GLFWwindow* window;

bool FindKey(int key);

void AddKey(int key);

void InputCallBackFunction(GLFWwindow* window, int key, int scancode, int action, int mods);

/*********************************************
* Name: Stub
* Description:
*   - Stubs
*********************************************/
void InputInitialize()
{
  keyCount = 0;
  keys = (int*)malloc(sizeof(int) * keyArraySize);
  for (int i = 0; i < keyArraySize; i++)
  {
    keys[i] = -1;
  }

  window = SystemGet(Graphics, GLFWwindow);
  glfwSetKeyCallback(window, InputCallBackFunction);
}

void EarlyTickInput()
{
  
}

void InputTick()
{
}

void LateTickInput()
{
  for (int i = 0; i < keyCount; i++)
  {
    keys[i] = -1;
  }
}

void InputTerminate()
{
  free(keys);
}

bool KeyPressed(int key)
{
  return FindKey(key);
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

void AddKey(int scancode)
{
  if (!FindKey(scancode))
  {
    keys[keyCount++] = scancode;
  }
}

void InputCallBackFunction(GLFWwindow* window, int key, int scancode, int action, int mods)
{
  if (action != GLFW_RELEASE)
  {
    AddKey(scancode);
  }
}
