/****************************************************************************
 *  File name: main.c
 *  Description:
 *      - Contains the main() function
*****************************************************************************/

#include "stdio.h"
#include "CommonIncludes.h"

#include "System.h"

#include "framework.h"
#include "graphics.h"
#include "Input.h"
/*********************************************
* Name: main
* Description:
*   - the main function
*********************************************/
int main()
{
  
  SystemInitialize(Framework);
  SystemInitialize(Graphics);
  SystemInitialize(Input);

  while (true)
  {
    EarlyTickInput();


    SystemTick(Framework);
    SystemTick(Input);

    if (KeyPressed(GLFW_KEY_SPACE))
    {
      printf("SpacePressed!");
    }

    if (KeyPressed(GLFW_KEY_ESCAPE))
    {
      break;
    }

    SystemTick(Graphics);


    LateTickInput();
  }

  SystemTerminate(Framework);
  SystemTerminate(Graphics);
  SystemTerminate(Input);
  
  return 0;
}
