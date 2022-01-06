#include <iostream>

// 番兵を置くことで比較演算の処理回数を減らす
int search(int array[], int n, int key)
{
  int i = 0;
  array[n] = key;
  while (array[i] != key)
    i++;
  return i != n;
}

int main()
{
  return 0;
}