//main 에서 접근불가
static int queue[100];
static int rear;
static int front;

void push(int data)
{
  queue[rear] = data;
  ++rear;
}

int pop(void)
{
  int tmp = front;
  ++front;
  return queue[tmp];
}
