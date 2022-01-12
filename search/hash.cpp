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

void deleteLinkedList(LIST **head, int key)

{
  if (*head == NULL)
  {
    return;
  }
  LIST *x_prev;
  LIST *x;
  if ((*head)->data == key)
  {
    x = *head;
    *head = (*head)->next;
    delete (x);
  }
  else
  {
    LIST *x_prev = *head;
    x = x_prev->next;
    for (int i = 1; (x->next != NULL) && (x->data != key); i++)
    {
      x_prev = x_prev->next;
      x = x_prev->next;
    }
    x_prev->next = x->next;
    delete (x);
  }
}

int main()
{
  return 0;
}