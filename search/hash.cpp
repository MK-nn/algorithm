#include <iostream>
// 衝突はチェイン法で回避する

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

int hash(int data, int table_size)
{
  return data % table_size;
}

int main()
{
  std::cout << "hash table の大きさを入力してください" << std::endl;
  int table_size;
  std::cin >> table_size;

  // initialize
  LIST *hash_table[table_size];
  for (int i = 0; i < table_size; i++)
  {
    hash_table[i] = NULL;
  }

  while (true)
  {
    std::cout << "行う操作を選んでください" << std::endl;
    std::cout << "1.insert 2.delete 3.search 4.exit" << std::endl;

    int n;
    std::cin >> n;

    if (n == 1)
    {
      std::cout << "挿入する数字を選択してください" << std::endl;
      int data;
      std::cin >> data;

      // chainedHashInsert
      int i = hash(data, table_size);
      insertLinkedList(&hash_table[i], data);
    }
    else if (n == 2)
    {
      std::cout << "削除する数字を選択してください" << std::endl;
      int data;
      std::cin >> data;

      // chainedHastDelete
      int i = hash(data, table_size);
      deleteLinkedList(&hash_table[i], data);
    }
    else if (n == 3)
    {
      std::cout << "検索する数字を選択してください" << std::endl;
      int data;
      std::cin >> data;

      // chainedHashSearch
      int i = hash(data, table_size);
      if (searchLinkedList(hash_table[i], data))
      {
        std::cout << "数字が見つかりました" << std::endl;
      }
      else
      {
        std::cout << "数字が見つかりませんでした" << std::endl;
      }
    }
    else if (n == 4)
    {
      return 0;
    }
    else
    {
      std::cout << "1~4の数字を選んでください" << std::endl;
      std::cout << std::endl;
    }
  }
}