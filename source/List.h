#ifndef LIST_H
#define LIST_H

//Usage:
//Supply the list head as pList,
//then write the piece of code you would like to run for each member
//whenever you want to reference a value of a member use "value"
//example usage: ListForEach(list, value->Initialize(), System)
#define ListForEach(pList, lambda, type) {Node* temp = pList; while (temp) {type* value = (type*)temp->value; lambda ;temp = temp->next;} }

    typedef struct Node
    {
      void* value; // data portion
      struct Node *next; // pointer portion
    }Node;


    typedef struct Node List;

    void ListAddToEnd(Node **pList, void* value);

    void ListAddToFront(Node **pList, void* value);

    int ListCount(Node *list);

    Node * ListFindItem(Node *list, void* value);

    void ListFreeList(Node *pList);

    void ListInsert(Node **pList, void* value, int position);


#endif 
