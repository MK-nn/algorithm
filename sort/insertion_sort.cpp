#include <bits/stdc++.h>

void trace(int array[], int n)
{
  for (int i = 0; i < n; i++)
  {
    if (i > 0)
    {
      std::cout << " " << std::endl;
    }
    std::cout << array[i] << std::endl;
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
    trace(array, n);
  }
}

int main()
{
}