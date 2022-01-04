#include <iostream>
// stack を用いて逆ポーランド記法で記述された
// 数式を処理するプログラム

int top;

void push(int array[], int x)
{
  top++;
  array[top] = x;
}

int main()
{
  return 0;
}