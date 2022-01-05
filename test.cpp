#include <iostream>

int main()
{
  std::string s;
  std::cin >> s;
  int hoge;
  hoge = s.size();

  std::cout << s << std::endl;
  std::cout << hoge;
  return 0;
}