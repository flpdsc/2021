#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node * next;
} Node;

int main(void)
{
  Node * ptr;
  ptr = malloc(sizeof(Node));
  ptr->data = 1;
  ptr->next = malloc(sizeof(Node));
  ptr->next->data = 3;
  ptr->next->next = malloc(sizeof(Node));
  ptr->next->next->data = 4;
  ptr->next->next->next = NULL;

  printf("\n===입력===\n");
  Node * p;
  p = ptr;
  while(p != NULL){
    printf("%d\n", p->data);
    p = p->next;
  }


  //삽입
  Node * tmp = malloc(sizeof(Node));
  tmp->data = 2;
  tmp->next = ptr->next;
  ptr->next = tmp;


  printf("\n===삽입===\n");
  p = ptr;
  while(p != NULL){
    printf("%d\n", p->data);
    p = p->next;
  }

  //삭제
  tmp=ptr->next->next;
  ptr->next->next = tmp->next;
  free(tmp);

  printf("\n===삭제===\n");
  p = ptr;
  while(p != NULL){
    printf("%d\n", p->data);
    p = p->next;
  }

  //free
  p = ptr;
  while(p) {
    Node *tmp = p;  //임시변수 만들어준다
    p = p->next;
    free(tmp);
  }

  return 0;
}
