#include <bits/stdc++.h>
#include <time.h>
using namespace std;

void merge(int array[], int p, int q, int r)
{
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1 + 1];
  int R[n2 + 1];

  for (int i = 1; i <= n1; i++)
    L[i] = array[p + i - 1];
  for (int j = 1; j <= n2; j++)
    R[j] = array[q + j];

  L[n1 + 1] = 100000000;
  R[n2 + 1] = 100000000;

  int i = 1;
  int j = 1;

  for (int k = p; k <= r; k++)
  {
    if (L[i] <= R[j])
    {
      array[k] = L[i];
      i++;
    }
    else
    {
      array[k] = R[j];
      j++;
    }
  }
}

void mergeSort(int array[], int p, int r)
{

  if (p < r)
  {
    int q = (p + r) / 2;

    mergeSort(array, p, q);
    mergeSort(array, q + 1, r);
    merge(array, p, q, r);
  }
}

int main(void)
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
  mergeSort(array, 0, array_size - 1);
  clock_t end = clock();

  printf("sort 後: ");
  for (int i = 0; i < array_size; i++)
  {
    printf("%d ", array[i]);
  }
  printf("\n");

  cout << "実行時間=>" << (double)(end - start) << "ms" << endl;

  return 0;
}