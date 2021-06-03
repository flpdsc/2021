#include "queue.h"
#include <cstdio>
#include <cassert>
#include <cstdlib>

Queue::Queue(int size)
{
  this->pArr = new int[size];
  assert(this->pArr);
  this->size = size;
  this->rear = 0;
  this->front = 0;
}

Queue::~Queue()
{
  delete [] this->pArr;
}

void Queue::push(int data)
{
  this->pArr[this->rear] = data;
  ++this->rear;
  assert(this->rear != this->size);
}

int Queue::pop()
{
  int tmp = this->front;
  ++this->front;
  assert(this->front != 0);
  return this->pArr[tmp];
}
