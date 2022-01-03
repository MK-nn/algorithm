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
      std::swap(array[j], array[min_j]);
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
