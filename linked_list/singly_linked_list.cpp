#include <iostream>

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
        std::cout << "list empty" << std::endl;
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
        std::cout << current->data << "->";
        current = current->next;
    }
    std::cout << "NULL" << std::endl;
}

int main()
{
    LIST *head = NULL;

    std::cout << "insert 5" << std::endl;
    insertLinkedList(&head, 5, 1);
    printLinkedList(head);

    std::cout << "insert 7" << std::endl;
    insertLinkedList(&head, 7, 1);
    printLinkedList(head);

    std::cout << "insert 3" << std::endl;
    insertLinkedList(&head, 3, 1);
    printLinkedList(head);

    std::cout << "insert 4" << std::endl;
    insertLinkedList(&head, 4, 1);
    printLinkedList(head);

    std::cout << "insert 9" << std::endl;
    insertLinkedList(&head, 9, 1);
    printLinkedList(head);

    std::cout << "insert 1" << std::endl;
    insertLinkedList(&head, 1, 1);
    std::cout << "result after inserted" << std::endl;
    printLinkedList(head);
    std::cout << std::endl;

    std::cout << "delete 1st" << std::endl;
    deleteLinkedList(&head, 1);
    printLinkedList(head);

    std::cout << "delete 3rd" << std::endl;
    deleteLinkedList(&head, 3);
    printLinkedList(head);

    std::cout << "delete 1st" << std::endl;
    deleteLinkedList(&head, 3);
    printLinkedList(head);

    std::cout << "delete 5th" << std::endl;
    deleteLinkedList(&head, 3);
    printLinkedList(head);

    std::cout << "delete 1st" << std::endl;
    deleteLinkedList(&head, 3);
    printLinkedList(head);

    return 0;
}