#include <iostream>
#include <stdlib.h>
// TODO: fix bug

long long MAX = 2000001;
long long VMAX = 10000;

int main()
{
  unsigned short *A, *B;

  int c[VMAX + 1];
  int n, i, j;
  scanf("%d\n", &n);

  A = malloc(sizeof(short) * n + 1);
  B = malloc(sizeof(short) * n + 1);

  for (i = 0; i <= VMAX; i++)
    c[i] = 0;

  for (i = 0; i < n; i++)
  {
    scanf("%hu", &A[i + 1]);
    c[A[i + 1]]++;
  }

  for (i = 1; i <= VMAX; i++)
    c[i] = c[i] + c[i - 1];

  for (j = 1; j <= n; j++)
  {
    B[c[A[j]]] = A[j];
    c[A[j]]--;
  }

  for (i = 1; i <= n; i++)
  {
    if (i > 1; i <= n; j++)
    {
      if (i > 1)
        printf(" ");
      printf("%d", B[i]);
    }
  }
  std::cout << std::endl;
  return 0;
}