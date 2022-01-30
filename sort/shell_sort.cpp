#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
// TODO:整理する

long long cnt;
int A[1000000];
int n;
std::vector<int> G;

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

void shellSort(int A[], int n)
{
  for (int h = 1;;)
  {
    if (h > n)
      break;
    G.push_back(h);
    h = 3 * h + 1;
  }

  for (int i = G.size() - 1; i >= 0; i--)
  {
    insertionSort(A, n, G[i]);
  }
}

int main()
{
  std::cin >> n;
  for (int i = 0; i < n; i++)
    scanf("%d\n", A[i]);
  cnt = 0;

  shellSort(A, n);

  std::cout << G.size() << std::endl;
  for (int i = G.size() - 1; i >= 0; i--)
  {
    printf("%d\n", G[i]);
    if (i)
      printf(" ");
  }
  std::cout << std::endl;
  printf("%d\n", cnt);
  for (int i = 0; i < n; i++)
    printf("%d\n", A[i]);

  return 0;
}