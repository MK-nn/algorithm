#include <iostream>
#include <list>
// c++ 標準ライブラリの list を使用する

int main()
{
  std::list<char> L;

  L.push_front('b');
  L.push_back('c');
  L.push_front('a');

  std::cout << L.front();
  std::cout << L.back();

  L.pop_front();
  L.push_back('d');

  std::cout << L.front();
  std::cout << L.back() << std::endl;

  return 0;
}