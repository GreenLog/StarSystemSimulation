/****************************************************************************
 *  File name: main.c
 *  Description:
 *      - Contains the main() function
*****************************************************************************/

#include "stdio.h"

#include "System.h"

#include "framework.h"
#include "graphics.h"
/*********************************************
* Name: main
* Description:
*   - the main function
*********************************************/
int main()
{
  
  SystemInitialize(Graphics);
  SystemInitialize(Framework);
  
  return 0;
}
