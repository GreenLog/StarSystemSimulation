/****************************************************************************
 *  File name: main.c
 *  Description:
 *      - Contains the main() function
*****************************************************************************/

#define GLFW_INCLUDE_NONE
#include "stdio.h"
#include "CommonIncludes.h"


#include "framework.h"
#include "graphics.h"
#include "Input.h"
#include "GLFW/glfw3.h"
#include "SystemManager.h"
/*********************************************
* Name: main
* Description:
*   - the main function
*********************************************/
int main()
{
  
  SystemManagerInitialize();
  while (true)
  {
    SystemManagerTick();
    if (GET_SYSTEM(Input)->KeyPressed(GLFW_KEY_ESCAPE))
    {
      printf("Escape pressed\n");
      break;
    }
    printf("frame\n");
  }
  SystemManagerTerminate();
  
  return 0;
}
