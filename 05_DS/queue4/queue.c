#include "queue.h"
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

void initQueue(Queue *pq, int size)
{
  pq->pArr = malloc(sizeof(int) * size);
  assert(pq->pArr);
  pq->size = size;
  pq->rear = 0;
  pq->front = 0;
}

void cleanupQueue(Queue *pq)
{
  free(pq->pArr);
}

void push(Queue *pq, int data)
{
  pq->pArr[pq->rear] = data;
  ++pq->rear;
  assert(pq->rear != pq->size);
}

int pop(Queue *pq)
{
  int tmp = pq->front;
  ++pq->front;
  assert(pq->front != 0);
  return pq->pArr[tmp];
}
