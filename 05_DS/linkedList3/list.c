#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "List.h"

static Node *createNode(int data, const Node *next)
{
  Node *ptr = malloc(sizeof(Node));
  assert(ptr);

  ptr->data = data;
  ptr->next = (Node *)next; //typecasting
}

void initList(List *pList)
{
  pList->ptr = createNode(-1, NULL);
}

void cleanupList(List *pList)
{
  Node *ptr = pList->ptr;
  while(ptr){
    Node *tmp = ptr;
    ptr = ptr->next;
    free(tmp);
  }
}

void insertFirstNode(List *pList, int data)
{
  pList->ptr->next = createNode(data, pList->ptr->next);
}

void insertNode(List *pList, int prevData, int data)
{
  Node *ptr = pList->ptr->next;

  while(ptr){
    if(ptr->data == prevData)
      break;
    ptr = ptr->next;
  }

  if(ptr != NULL)//찾았으면
    ptr->next = createNode(data, ptr->next);
}

void deleteNode(List *pList, int data)
{
  Node *prevPtr = pList->ptr; //더미노드 가리킴
  Node *ptr = pList->ptr->next;

  while(ptr){
    if (ptr->data == data)
      break;
    ptr = ptr->next;
    prevPtr = prevPtr->next;
  }

  if(ptr != NULL){ //찾았으면 삭제
    prevPtr->next = ptr->next;
    free(ptr);
  }
}

void printList(const List *pList)
{
  Node *ptr = pList->ptr->next;
  printf("[");
  while(ptr){
    printf("%d",ptr->data);
    printf((ptr->next)? ", " : "");
    ptr = ptr->next;
  }
  printf("]\n");
}
