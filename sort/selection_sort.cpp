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