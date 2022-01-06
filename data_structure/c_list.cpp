#include <iostream>
#include <list>
// c++ 標準ライブラリの list を使用する

int main()
{
  std::list<char> L;

  std::cout << "push_front b" << std::endl;
  L.push_front('b');

  std::cout << "push_back c" << std::endl;
  L.push_back('c');

  std::cout << "push_front a" << std::endl;
  L.push_front('a');

  std::cout << L.front();
  std::cout << L.back();

  std::cout << "pop_front" << std::endl;
  L.pop_front();

  std::cout << "push_back d" << std::endl;
  L.push_back('d');

  std::cout << L.front();
  std::cout << L.back() << std::endl;

  return 0;
}