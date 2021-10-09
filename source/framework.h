/****************************************************************************
 *  File name: stub.h
 *  Description:
 *      -
*****************************************************************************/
#ifndef _FRAMEWORK_H
#define _FRAMEWORK_H

#include "System.h"
typedef struct Framework
{
  System base;
}Framework;


/*********************************************
* Name: Stub
* Description:
*   - Stubs
*********************************************/
void FrameworkInitialize();

void FrameworkTick();

void FrameworkTerminate();
#endif
