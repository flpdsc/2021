#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "list.h"

void initList(List *pList, int eleSize)
{
  pList->ptr = malloc(sizeof(Node));
  assert(pList->ptr);
  pList->ptr->next = NULL;
  pList->eleSize = eleSize;
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

void insertFirstNode(List *pList, const void *pData)
{
  Node *ptr = malloc(sizeof(Node) + pList->eleSize); //포인터공간 + 데이터공간
  assert(ptr);

  //ptr->data = data;
  memcpy(ptr+1, pData, pList->eleSize);
  ptr->next = pList->ptr->next;
  pList->ptr->next = ptr;
}

void insertNode(List *pList, const void *pPrevData, const void *pData)
{
  Node *ptr = pList->ptr->next;

  while(ptr){
    // if(ptr->data == prevData)
    if (memcmp(ptr+1, pPrevData, pList->eleSize) == 0)
      break;
    ptr = ptr->next;
  }

  if(ptr != NULL) { //찾았으면
    Node *tmp = malloc(sizeof(Node) + pList->eleSize);
    assert(tmp); //ptr -> tmp로 수정필요
    // tmp->data = data;
    memcpy(tmp+1, pData, pList->eleSize);
    tmp->next = ptr->next;
    ptr->next = tmp;
  }
}

void deleteNode(List *pList, const void *pData)
{
  Node *prevPtr = pList->ptr; //더미노드 가리킴
  Node *ptr = pList->ptr->next;

  while(ptr){
    // if (ptr->data == data)
    if (memcmp(ptr+1, pData, pList->eleSize) == 0)
      break;
    ptr = ptr->next;
    prevPtr = prevPtr->next;
  }

  if(ptr != NULL){ //찾았으면 삭제
    prevPtr->next = ptr->next;
    free(ptr);
  }
}

void printList(const List *pList, void (*print)(const void *pData))
{
  Node *ptr = pList->ptr->next;
  printf("[");
  while(ptr){
    // printf("%d",ptr->data);
    print(ptr+1);  //(*print)(ptr+1);
    printf((ptr->next)? ", " : "");
    ptr = ptr->next;
  }
  printf("]\n");
}
