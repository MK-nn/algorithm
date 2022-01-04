#include <iostream>
// stack を用いて逆ポーランド記法で記述された
// 数式を処理するプログラム

int top;

void push(int array[], int x)
{
  top++;
  array[top] = x;
}

int pop(int array[])
{
  top--;
  return array[top + 1];
}

int main()
{
  top = 0;
  int array[1000];

  // end で終了する
  while (1)
  {
    int a, b;
    std::string s;
    std::cin >> s;
    if (s == "+")
    {
      a = pop(array);
      b = pop(array);
      push(array, a + b);
    }
    else if (s == "-")
    {
      a = pop(array);
      b = pop(array);
      push(array, b - a);
    }
    else if (s == "*")
    {
      a = pop(array);
      b = pop(array);
      push(array, a * b);
    }
    else if (s == "end")
    {
      std::cout << pop(array) << std::endl;
      break;
    }
    else
    {
      push(array, std::stoi(s));
    }
  }

  return 0;
}