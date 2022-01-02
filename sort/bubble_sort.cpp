#include <iostream>

void bubbleSort(int array[], int n)
{
  bool flag = true;
  for (int i = 0; flag; i++)
  {
    flag = false;
    for (int j = n - 1; j >= i + 1; j--)
    {
      if (array[j] < array[j - 1])
      {
        std::swap(array[j], array[j - 1]);
        flag = true;
      }
    }
  }
}

int main()
{
  int n;
  int array[n];
  std::cin >> n;
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

  bubbleSort(array, n);

  std::cout << "After sort: ";
  for (int i = 0; i < n; i++)
  {
    std::cout << array[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}