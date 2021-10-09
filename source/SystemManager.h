/****************************************************************************
 *  File name: stub.h
 *  Description:
 *      -
*****************************************************************************/
#ifndef _STUB_H
#define _STUB_H
#include "System.h"
#include "CommonIncludes.h"

#define GET_SYSTEM(system) ((system*)_GetSystem(c##system))

/*********************************************
* Name: Stub
* Description:
*   - Stubs
*********************************************/
void SystemManagerInitialize();
void SystemManagerTick();
void SystemManagerTerminate();

System* _GetSystem(SystemType system);
#endif
