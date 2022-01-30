#include <bits/stdc++.h>
#include <time.h>
using namespace std;

void swap(int *a, int *b)
{
  int tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
}

int partition(int array[], int p, int r)
{
  int x = array[r - 1];
  int i = p - 1;
  for (int j = p; j < r; j++)
  {
    if (array[j - 1] >= x)
    {
      i++;
      swap(&array[i - 1], &array[j - 1]);
    }
  }
  swap(&array[i], &array[r - 1]);
  return i + 1;
}

void quickSort(int array[], int p, int r)
{
  int q;
  if (p < r)
  {
    q = partition(array, p, r);
    quickSort(array, p, q - 1);
    quickSort(array, q + 1, r);
  }
}

int main()
{
  int array_size;

  cin >> array_size;
  int array[array_size];
  for (int i = 0; i < array_size; i++)
  {
    cin >> array[i];
  }

  printf("sort 前: ");
  for (int i = 0; i < array_size; i++)
  {
    printf("%d ", array[i]);
  }
  printf("\n");

  clock_t start = clock();
  quickSort(array, 1, array_size);
  clock_t end = clock();

  printf("sort 後: ");
  for (int i = array_size; i > 0; i--)
  {
    printf("%d ", array[i - 1]);
  }
  printf("\n");

  cout << "実行時間=>" << (double)(end - start) << "ms" << endl;

  return 0;
}