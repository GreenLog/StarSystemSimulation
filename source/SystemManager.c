
#include "SystemManager.h"
#include "List.h"
#include "stdlib.h"
#include "System.h"
#include "graphics.h"
#include "framework.h"
#include "Input.h"
#include "stdio.h"

#define REGISTER_SYSTEM(system) system* system##Temp = malloc(sizeof(system)); \
       ListAddToEnd(&systems, (void*)system##Temp); system##Temp->base.Initialize = system##Initialize; \
        system##Temp->base.Tick = system##Tick; system##Temp->base.Terminate = system##Terminate; system##Temp->base.type = c##system;

#define GET_ABSTRACT_SYSTEM(system) _GetSystem(c##system)

/****************************************************************************
 *  File name: stub.c
 *  Description:
 *      -
*****************************************************************************/

/*********************************************
* Name: Stub
* Description:
*   - Stubs
*********************************************/

List* systems;

void SystemManagerInitialize()
{
  systems = NULL;
 
  printf("Before Initialization\n");

  REGISTER_SYSTEM(Graphics);
  REGISTER_SYSTEM(Framework);
  REGISTER_SYSTEM(Input);
  
  printf("Systems Registered!\n");


  ListForEach(systems, value->Initialize(), System);
  printf("Systems Initialized!\n");
}

void SystemManagerTick()
{
  ListForEach(systems, value->Tick(), System);
}

void SystemManagerTerminate()
{
  ListFreeList(systems);
}

System* _GetSystem(SystemType type)
{
  List* iterator = systems;
  while (iterator)
  {
    if (((System*)(iterator->value))->type == type)
    {
      return (System*)(iterator->value);
    }
    iterator = iterator->next;
  }
  return NULL;

}
