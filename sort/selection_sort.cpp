#include <iostream>

void selectionSort(int array[], int n)
{
  int min_j;
  for (int i = 0; i < n - 1; i++)
  {
    min_j = i;
    for (int j = i; j < n; j++)
    {
      if (array[j] < array[i])
      {
        min_j = j;
      }
      std::swap(array[i], array[min_j]);
    }
  }
}

int main()
{
  int n;

  std::cout << "配列のサイズを入力してください: ";
  std::cin >> n;

  int array[n];
  std::cout << "配列の各要素を入力してください: ";
  for (int i = 0; i < n; i++)
  {
    std::cin >> array[i];
  }

  std::cout << "Before sort: ";
  for (int i = 0; i < n; i++)
  {
    std::cout << array[i] << " ";
  }
  std::cout << std::endl;

  selectionSort(array, n);

  std::cout << "After sort: ";
  for (int i = 0; i < n; i++)
  {
    std::cout << array[i] << " ";
  }
  std::cout << std::endl;
}