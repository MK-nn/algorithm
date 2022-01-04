#include <iostream>

int bubbleSort(int array[], int n)
{
  bool flag = true;
  int sw = 0;
  for (int i = 0; flag; i++)
  {
    flag = false;
    for (int j = n - 1; j >= i + 1; j--)
    {
      if (array[j] < array[j - 1])
      {
        std::swap(array[j], array[j - 1]);
        flag = true;
        sw++;
      }
    }
  }
  return sw;
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

  int sw = bubbleSort(array, n);

  std::cout << "After sort: ";
  for (int i = 0; i < n; i++)
  {
    std::cout << array[i] << " ";
  }
  std::cout << std::endl;

  std::cout << "replace count -> ";
  std::cout << sw << std::endl;

  return 0;
}