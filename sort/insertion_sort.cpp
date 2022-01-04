#include <iostream>

void trace(int array[], int n)
{
  for (int i = 0; i < n; i++)
  {
    if (i > 0)
    {
      std::cout << " ";
    }
    std::cout << array[i];
  }
  std::cout << std::endl;
}

void insertionSort(int array[], int n)
{
  int j, v;
  for (int i = 1; i < n; i++)
  {
    v = array[i];
    j = i - 1;
    while (j >= 0 && array[j] > v)
    {
      array[j + 1] = array[j];
      j--;
    }
    array[j + 1] = v;
    std::cout << i << "回目: ";
    trace(array, n);
  }
}

int main()
{
  int array[100];
  int n;

  std::cout << "配列のサイズを入力してください: ";
  std::cin >> n;

  std::cout << "配列の各要素を入力してください: ";
  for (int i = 0; i < n; i++)
  {
    std::cin >> array[i];
  }

  std::cout << "Before sort: ";
  trace(array, n);
  insertionSort(array, n);
  std::cout << "After sort: ";
  trace(array, n);

  return 0;
}