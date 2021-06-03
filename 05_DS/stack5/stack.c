#include "stack.h" //구조체 사용
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

void initStack(Stack *ps, int size, int eleSize)
{
  //ps->pArr = malloc(sizeof(int) * size);
  ps->pArr = malloc(eleSize * size);
  assert(ps->pArr /*!= NULL*/);
  ps->eleSize = eleSize;
  ps->size = size;
  ps->tos = 0;
}

void cleanupStack(Stack *ps)
{
  free(ps->pArr);
}

void push(Stack *ps, const void *pData)
{
  assert(ps->tos != ps->size);
  //ps->pArr[ps->tos] = data;
  //memcpy(&ps->pArr[ps->tos], pData, ps->eleSize);
  //void pointer 역참조 불가하므로 type casting 후 역참조
  //1바이트 단위로 접근하기 위해 char
  memcpy((unsigned char *)ps->pArr + ps->eleSize * ps->tos, pData, ps->eleSize);
  ++ps->tos;
}

void pop(Stack *ps, void *pData)
{
  assert(ps->tos != 0);
  --ps->tos;
  // return ps->pArr[ps->tos];
  //*pData = ps->pArr[ps->tos];
  //memcpy(pData, &ps->pArr[ps->tos], ps->eleSize);
  memcpy(pData, (unsigned char *)ps->pArr + ps->eleSize * ps->tos, ps->eleSize);
}
