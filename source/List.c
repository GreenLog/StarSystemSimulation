#include "List.h"
#include "stdlib.h"
#include "stdio.h"



struct Node* ListMakeNode(void* value)
{
  struct Node* pNode = malloc(sizeof(Node)); // Allocate memory for the node
  pNode->value = value;         // Set data field (value)
  pNode->next = NULL;               // Set next (no next yet)

  return pNode;
}


int ListCount(struct Node* list)
{
  int count = 0; // Number of nodes in the list

  while (list)
  {
    count++;
    list = list->next;
  }

  return count;
}

void ListAddToEnd(Node** pList, void* value)
{
  Node* newNode = ListMakeNode(value);
  if (*pList == NULL)
  {

    *pList = newNode;
  }

  else
  {
    /* Find the end of the list (don't move list!) */
    Node* temp = *pList;

    while (temp->next)
    {
      temp = temp->next;
    }


    temp->next = newNode; /* Put new node at the end */
  }

  printf("Added system\n");

}

void ListAddToFront(Node** pList, void* value)
{
  /* The new node's next pointer will point at the first node */
  Node* node = malloc(sizeof(Node));
  node->value = value;
  node->next = *pList;
  *pList = node;
}

Node* ListFindItem(Node* list, void* value)
{
  Node* temp = list;
  while (temp && temp->next)
  {
    if (temp->value == value)
    {
      return temp;
    }
    temp = temp->next;
  }
  return NULL;
}

void ListFreeList(Node* pList)
{
  Node* temp = pList;
  while (temp)
  {
    Node* new_temp = temp->next;
    free(temp->value);
    free(temp);
    temp = new_temp;
  }
}


void ListInsert(Node** pList, void* value, int position)
{
  if (position == 0)
  {
    ListAddToFront(pList, value);
    return;
  }

  Node* node = malloc(sizeof(Node));
  Node* temp = *pList;
  node->value = value;
  int counter = 1;

  if (position > ListCount(*pList))
  {
    free(node);
    return;
  }

  while (counter < position)
  {
    temp = temp->next;
    counter++;
  }

  node->next = temp->next;
  temp->next = node;
  return;
}
