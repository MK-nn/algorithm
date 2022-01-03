#include <iostream>

void selectionSort(int array[], int n)
{
  int minj;
  for (int i = 0; i < n - 1; i++)
  {
    minj = i;
    for (int j = i; j < n; j++)
    {
      if (array[j] < array[i])
      {
        minj = j;
      }
      std::swap(array[i], array[minj]);
    }
  }
}

int main()
{
  int n;
  std::cin >> n;
  int array[n];

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