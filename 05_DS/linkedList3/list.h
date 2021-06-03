#ifndef LIST_H
#define LIST_H

typedef struct node {
  int data;
  struct node *next;
} Node;

typedef struct {
  Node *ptr;
} List;

static Node *createNode(int data, const Node *next); //main에서 사용 불가하고 list와 관련된 함수에서만 사용할 수 있음

void initList(List *pList);
void cleanupList(List *pList);

void insertFirstNode(List *pList, int data);
void insertNode(List *pList, int prevData, int data);
void deleteNode(List *pList, int data);
void printList(const List *pList);

#endif
