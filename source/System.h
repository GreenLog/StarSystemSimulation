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

typedef enum SystemType
{
  cStart,
  cInput,
  cFramework,
  cGraphics,
}SystemType;

typedef struct System
{
  void (*Initialize)(void);
  void (*Tick)(void);
  void (*Terminate)(void);

  void (*SetInstance)(void);

  struct System* instance;

  SystemType type;
}System;

/*********************************************
* Name: Stub
* Description:
*   - Stubs
*********************************************/
#endif
