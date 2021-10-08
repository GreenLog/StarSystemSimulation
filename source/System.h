/****************************************************************************
 *  File name: stub.h
 *  Description:
 *      -
*****************************************************************************/
#ifndef _SYSTEM_H
#define _SYSTEM_H

#define SystemInitialize(System) System##Initialize()
#define SystemTick(System) System##Tick()
#define SystemTerminate(System) System##Terminate()
#define SystemGet(System, SystemVariable) System##Get##SystemVariable()

/*********************************************
* Name: Stub
* Description:
*   - Stubs
*********************************************/
void GetSystem();
#endif
