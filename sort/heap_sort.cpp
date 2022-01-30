#include <iostream>
// TODO: fix style

void swap(int *a, int *b)
{
  int tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
}
int left(int i)
{
  return 2 * i;
}
int right(int i)
{
  return 2 * i + 1;
}
void maxHeapify(int array[], int i, int array_size)
{
  int largest;
  int l = left(i);
  int r = right(i);
  if (array_size >= l && array[l - 1] > array[i - 1])
  {
    largest = l;
  }
  else
  {
    largest = i;
  }
  if (array_size >= r && array[r - 1] > array[largest - 1])
  {
    largest = r;
  }
  if (largest != i)
  {
    swap(&array[i - 1], &array[largest - 1]);
    maxHeapify(array, largest, array_size);
  }
}
void buildMaxHeap(int array[], int array_size)
{
  for (int i = array_size / 2; i >= 1; i--)
  {
    maxHeapify(array, i, array_size);
  }
}
void heapSort(int array[], int array_size)
{
  int newArray[array_size];
  buildMaxHeap(array, array_size);
  for (int i = array_size; i >= 2; i--)
  {
    swap(&array[0], &array[i - 1]);
    array_size--;
    maxHeapify(array, 1, array_size);
  }
}
int main()
{
  int array_size;
  std::cin >> array_size;
  int array[array_size];
  for (int i = 0; i < array_size; i++)
  {
    std::cin >> array[i];
  }
  printf("実行前: ");
  for (int i = 0; i < array_size; i++)
  {
    printf("%d ", array[i]);
  }
  printf("\n");
  heapSort(array, array_size);
  printf("実行後: ");
  for (int i = array_size - 1; i >= 0; i--)
  {
    printf("%d ", array[i]);
  }
  printf("\n");
  return 0;
}