#include <stdio.h>
#include "queue.h"

int main(void)
{
  Queue q1, q2;
  initQueue(&q1, 10);
  initQueue(&q2, 100);

  push(&q1, 100);
  push(&q1, 200);
  printf("1st pop(): %d\n", pop(&q1));
  push(&q1, 300);
  printf("2nd pop(): %d\n", pop(&q1));
  printf("3rd pop(): %d\n", pop(&q1));

  push(&q2, 900);
  push(&q2, 800);
  printf("1st pop(): %d\n", pop(&q2));
  push(&q2, 700);
  printf("2nd pop(): %d\n", pop(&q2));
  printf("3rd pop(): %d\n", pop(&q2));

  cleanupQueue(&q1);
  cleanupQueue(&q2);

  return 0;
}
