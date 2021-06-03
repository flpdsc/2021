#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

void initQueue(Queue *pq)
{
  pq->rear = 0;
  pq->front = 0;
}

void push(Queue *pq, int data)
{

  //full
  if(pq->rear == ARRAYSIZE){
    fprintf(stderr, "Queue is full\n");
    exit(1);
  }
  pq->array[pq->rear] = data;
  ++pq->rear;
}

int pop(Queue *pq)
{
  //empty
  if(pq->front == pq->rear){
    fprintf(stderr, "Queue is empty\n");
    exit(2);
  }
  int tmp = pq->front;
  ++pq->front;
  return pq->array[tmp];
}
