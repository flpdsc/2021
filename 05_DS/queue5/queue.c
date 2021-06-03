#include "queue.h"
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

void initQueue(Queue *pq, int size, int eleSize)
{
  pq->pArr = malloc(eleSize * size);
  assert(pq->pArr /*!= NULL*/);
  pq->eleSize = eleSize;
  pq->size = size;
  pq->rear = 0;
  pq->front = 0;
}

void cleanupQueue(Queue *pq)
{
  free(pq->pArr);
}

void push(Queue *pq, const void *pData)
{
  assert(pq->rear != pq->size);
  //typecasting 해야하는데
  //원래 데이터 타입을 모름
  //1byte 단위로 접근
  //ptr의 더하기는 다음 엘리먼트
  memcpy((unsigned char *)pq->pArr + pq->eleSize * pq->rear, pData, pq->eleSize);
  ++pq->rear;
}

void pop(Queue *pq, void *pData)
{
  assert(pq->rear != pq->front);
  int tmp = pq->front;
  ++pq->front;
  memcpy(pData, (unsigned char *)pq->pArr + pq->eleSize * tmp, pq->eleSize);
}
