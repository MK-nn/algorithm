#include <iostream>

// singly linked list
typedef struct list
{
  int data;
  struct list *next;
} LIST;

void insertLinkedList(LIST **head, int data)
{
  LIST *x = (LIST *)malloc(sizeof(LIST));
  x->data = data;
  x->next = *head;
  *head = x;
}

int main()
{
  return 0;
}