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