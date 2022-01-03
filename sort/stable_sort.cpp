#include <iostream>

typedef struct Cart
{
  char suit;
  int value;
} CARD;

void bubbleSort(CARD array[], int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = n - 1; j >= i + 1; j--)
    {
      if (array[j].value < array[j - 1].value)
      {
        std::swap(array[j], array[j - 1]);
      }
    }
  }
}

void selectionSort(CARD array[], int n)
{
  for (int i = 0; i < n; i++)
  {
    int min_j = i;
    for (int j = i; j < n; j++)
    {
      if (array[j].value < array[min_j].value)
      {
        min_j = j;
      }
      std::swap(array[i], array[min_j]);
    }
  }
}

void printCard(CARD array[], int n)
{
  for (int i = 0; i < n; i++)
  {
    std::cout << array[i].suit << "-" << array[i].value << " ";
  }
  std::cout << std::endl;
}

bool isStable(CARD array_1[], CARD array_2[], int n)
{
  for (int i = 0; i < n; i++)
  {
    if (array_1[i].suit != array_2[i].suit)
    {
      return false;
    }
  }
  return true;
}

// bubble sort が安定な sort であることを用いて
// 実行された selection sort が 安定 かどうか判定する
int main()
{
  int n;
  std::cout << "配列のサイズを入力してください: ";
  std::cin >> n;
  CARD array_1[n];
  CARD array_2[n];

  std::cout << "配列の各要素を入力してください: ";
  for (int i = 0; i < n; i++)
  {
    std::cin >> array_1[i].suit >> array_1[i].value;
  }

  for (int i = 0; i < n; i++)
  {
    array_2[i] = array_1[i];
  }

  std::cout << "output example - > suit - value" << std::endl;

  std::cout << "Before sort: ";
  printCard(array_1, n);

  bubbleSort(array_1, n);
  selectionSort(array_2, n);

  std::cout << "After bubble sort: ";
  printCard(array_1, n);

  std::cout << "After selection sort: ";
  printCard(array_2, n);

  if (isStable(array_1, array_2, n))
  {
    std::cout << "Stable" << std::endl;
  }
  else
  {
    std::cout << "Not Stable" << std::endl;
  }

  return 0;
}
