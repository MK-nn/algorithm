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
