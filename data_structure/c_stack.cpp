#include <iostream>
#include <stack>
// c++ の標準ライブラリの stack を使用する

int main()
{
  std::stack<int> S;

  std::cout << "stack に 3 を積む" << std::endl;
  S.push(3);
  std::cout << "current stack top -> " << S.top() << std::endl;
  std::cout << "stack に 7 を積む" << std::endl;
  S.push(7);
  std::cout << "current stack top -> " << S.top() << std::endl;
  std::cout << "stack に 1 を積む" << std::endl;
  S.push(1);
  std::cout << "current stack top -> " << S.top() << std::endl;
  std::cout << "stack の size を出力する -> ";
  std::cout << S.size() << std::endl;

  std::cout << "pop する" << std::endl;
  S.pop();
  std::cout << "current stack top -> " << S.top() << std::endl;
  std::cout << "pop する" << std::endl;
  S.pop();
  std::cout << "current stack top -> " << S.top() << std::endl;
  std::cout << "stack に 5 を積む" << std::endl;
  S.push(5);
  std::cout << "current stack top -> " << S.top() << std::endl;
  std::cout << "pop する" << std::endl;
  S.pop();
  std::cout << "current stack top -> " << S.top() << std::endl;

  return 0;
}