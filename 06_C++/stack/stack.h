#ifndef STACK_H
#define STACK_H
// #define ARRAYSIZE 100

class Stack {
  // int array[ARRAYSIZE];
private:
  int *pArr;
  int size;
  int tos;

public:
  Stack(int size);  //생성자
  ~Stack();         //소멸자
  void push(int data);
  int pop();
};

#endif
