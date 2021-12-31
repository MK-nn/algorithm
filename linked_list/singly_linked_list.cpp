#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

typedef struct list
{
    int data;
    struct list *next;
} LIST;

void insertLinkedList(LIST **head, int data, int p)
{
    LIST *x = (LIST *)malloc(sizeof(LIST));
    x->data = data;

    if (p == 1 || *head == NULL)
    {
        x->next = *head;
        *head = x;
    }
    else
    {
        LIST *x_prev = *head;
        for (int i = 1; (x_prev->next != NULL) && (i < p - 1); i++)
        {
            x_prev = x_prev->next;
        }

        LIST *x_next = x_prev->next;
        x_prev->next = x;
        x->next = x_next;
    }
}

void deleteLinkedList(LIST **head, int p)
{
    if (*head == NULL)
    {
        cout << "list empty" << endl;
    }
    LIST *x_prev;
    LIST *x;
    if (p == 1)
    {
        x = *head;
        *head = (*head)->next;
        delete (x);
    }
    else
    {
        LIST *x_prev = *head;
        x = x_prev->next;
        for (int i = 1; (x->next != NULL) && (i < p - 1); i++)
        {
            x_prev = x_prev->next;
            x = x_prev->next;
        }
        x_prev->next = x->next;
        delete (x);
    }
}

void printLinkedList(LIST *head)
{
    LIST *current = head;
    while (current != NULL)
    {
        cout << current->data << "->";
        current = current->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    LIST *head = NULL;
    cout << "insert 5" << endl;
    insertLinkedList(&head, 5, 1);
    printLinkedList(head);
    cout << "insert 7" << endl;
    insertLinkedList(&head, 7, 1);
    printLinkedList(head);
    cout << "insert 3" << endl;
    insertLinkedList(&head, 3, 1);
    printLinkedList(head);
    cout << "insert 4" << endl;
    insertLinkedList(&head, 4, 1);
    printLinkedList(head);
    cout << "insert 9" << endl;
    insertLinkedList(&head, 9, 1);
    printLinkedList(head);
    cout << "insert 1" << endl;
    insertLinkedList(&head, 1, 1);
    cout << "result after inserted" << endl;
    printLinkedList(head);
    cout << endl;

    cout << "delete 1st" << endl;
    deleteLinkedList(&head, 1);
    printLinkedList(head);
    cout << "delete 3rd" << endl;
    deleteLinkedList(&head, 3);
    printLinkedList(head);
    cout << "delete 1st" << endl;
    deleteLinkedList(&head, 3);
    printLinkedList(head);
    cout << "delete 5th" << endl;
    deleteLinkedList(&head, 3);
    printLinkedList(head);
    cout << "delete 1st" << endl;
    deleteLinkedList(&head, 3);
    printLinkedList(head);

    return 0;
}