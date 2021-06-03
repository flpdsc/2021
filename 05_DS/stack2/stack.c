//main 에서 접근불가
static int stack[100];
static int tos; //top of stack

void push(int data)
{
  stack[tos] = data;
  ++tos;
}

int pop(void)
{
  --tos;
  return stack[tos];
}
