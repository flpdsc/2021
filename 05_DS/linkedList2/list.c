#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "List.h"

void initList(List *pList)
{
  pList->ptr = malloc(sizeof(Node));
  assert(pList->ptr);
  pList->ptr->next = NULL;
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
  Node *ptr = malloc(sizeof(Node));
  assert(ptr);

  ptr->data = data;
  ptr->next = pList->ptr->next;
  pList->ptr->next = ptr;
}

void insertNode(List *pList, int prevData, int data)
{
  Node *ptr = pList->ptr->next;

  while(ptr){
    if(ptr->data == prevData)
      break;
    ptr = ptr->next;
  }

  if(ptr != NULL) { //찾았으면
    Node *tmp = malloc(sizeof(Node));
    assert(tmp); //ptr -> tmp로 수정필요
    tmp->data = data;
    tmp->next = ptr->next;
    ptr->next = tmp;
  }
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
