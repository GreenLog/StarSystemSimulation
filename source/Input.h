/****************************************************************************
 *  File name: stub.h
 *  Description:
 *      -
*****************************************************************************/
#include <stdbool.h>
#ifndef _INPUT_H
#define _INPUT_H
#include "System.h"
typedef struct Input
{
  System base;
  bool (*KeyPressed)(int);
  bool (*KeyHeld)(int);
  bool (*KeyReleased)(int);


}Input;
/*********************************************
* Name: Stub
* Description:
*   - Stubs
*********************************************/
void InputInitialize();

void InputTick();

void InputTerminate();



#endif
