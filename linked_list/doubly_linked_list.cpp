#include <bits/stdc++.h>
using namespace std;

typedef struct list
{
  int key;
  struct list *next;
  struct list *prev;
} LIST;

void insertLinkedList(LIST **head, int key, int p)

{
  LIST *x = (LIST *)malloc(sizeof(LIST));
  x->key = key;
  if (*head == NULL || p == 1)
  {
    x->prev = NULL;
    x->next = *head;
    if (*head != NULL)
    {
      (*head)->prev = x;
    }
    *head = x;
  }
  else
  {
    LIST *x_prev = *head;
    LIST *x_next;
    for (int i = 1; i < (p - 1) && x_prev->next != NULL; i++)
    {
      x_prev = x_prev->next;
    }

    x_next = x_prev->next;
    if (x_next == NULL)
    {
      x_prev->next = x;
      x->prev = x_prev;
      x->next = NULL;
    }
    else
    {
      x_prev->next = x;
      x_next->prev = x;
      x->prev = x_prev;
      x->next = x_next;
    }
  }
}

void deleteLinkedList(LIST **head, int p)
{
  if (*head == NULL)
  {
    return;
  }

  LIST *x;
  LIST *x_next;
  LIST *x_prev;
  if (p == 1)
  {
    x = *head;
    *head = (*head)->next;
    (*head)->prev = NULL;
    delete x;
  }
  else
  {
    x = *head;
    for (int i = 1; i < p && x->next != NULL; i++)
    {
      x = x->next;
    }

    x_next = x->next;
    x_prev = x->prev;
    if (x_next == NULL)
    {
      x_prev->next = NULL;
      delete x;
    }
    else
    {
      x_prev->next = x_next;
      x_next->prev = x_prev;
      delete x;
    }
  }
}

void printLinkedList(LIST *head)
{
  LIST *current = head;
  while (current != NULL)
  {
    cout << current->key << " -> ";
    current = current->next;
  }
  cout << "NULL" << endl;
}

int main()
{
}