/****************************************************************************
 *  File name: stub.h
 *  Description:
 *      -
*****************************************************************************/
#ifndef _INPUT_H
#define _INPUT_H

typedef Input;
/*********************************************
* Name: Stub
* Description:
*   - Stubs
*********************************************/
void InputInitialize();

void EarlyTickInput();

void InputTick();

void LateTickInput();

void InputTerminate();

bool KeyPressed(int key);

#endif
