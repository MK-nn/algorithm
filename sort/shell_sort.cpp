long long cnt;

void insertionSort(int A[], int n, int g)

{
  for (int i = g; i < n; i++)
  {
    int v = A[i];
    int j = i - g;
    while (j >= 0 && A[j] > v)
    {
      j -= g;
      cnt++;
    }
    A[j + g] = v;
  }
}