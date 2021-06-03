#ifndef QUEUE_H
#define QUEUE_H

typedef struct {
  void *pArr;
  int eleSize;
  int size;
  int rear;
  int front;
} Queue;

void initQueue(Queue *ps, int size, int eleSize);
void cleanupQueue(Queue *ps);
void push(Queue *ps, const void *pData);
void pop(Queue *ps, void *pData);

#endif
