#include <stdio.h>
#include "list.h"

void printInt(const void *pData)  //반환값 인자 데이터형이 같아야 함(?)
{
  printf("%d", *(int *)pData);
}

void printDouble(const void *pData)
{
  printf("%f", *(double *)pData);
}

int main(void)
{
  List list1, list2;

  initList(&list1, sizeof(int));
  initList(&list2, sizeof(double));

  int i, j;
  i=4;  insertFirstNode(&list1, &i);
  printList(&list1, printInt);
  i=2;  insertFirstNode(&list1, &i);
  printList(&list1, printInt);
  i=1;  insertFirstNode(&list1, &i);
  printList(&list1, printInt);
  j=2;
  i=3;  insertNode(&list1, &j, &i);
  printList(&list1, printInt);

  double d, f;
  d=4.4;  insertFirstNode(&list2, &d);
  printList(&list2, printDouble);
  d=2.2;  insertFirstNode(&list2, &d);
  printList(&list2, printDouble);
  d=1.1;  insertFirstNode(&list2, &d);
  printList(&list2, printDouble);
  f=2.2;
  d=3.3;  insertNode(&list2, &f, &d);
  printList(&list2, printDouble);

  i=3;    deleteNode(&list1, &i);
  printList(&list1, printInt);
  d=3.3;  deleteNode(&list2, &d);
  printList(&list2, printDouble);

  cleanupList(&list1);
  cleanupList(&list2);

  return 0;
}
