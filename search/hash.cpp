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

bool searchLinkedList(LIST *head, int x)
{
  LIST *current = head;
  while (current != NULL)
  {
    if (current->data == x)
    {
      return true;
    }
    current = current->next;
  }
  return false;
}

int main()
{
  return 0;
}