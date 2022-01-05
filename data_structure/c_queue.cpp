#include <iostream>
#include <queue>
#include <string>
// c++ の標準ライブラリの queue を使用する

int main()
{
  std::queue<std::string> Q;

  std::cout << "push red" << std::endl;
  Q.push("red");
  std::cout << "current front of queue -> " << Q.front() << std::endl;

  std::cout << "push yellow" << std::endl;
  Q.push("yellow");
  std::cout << "current front of queue -> " << Q.front() << std::endl;

  std::cout << "push yellow" << std::endl;
  Q.push("yellow");
  std::cout << "current front of queue -> " << Q.front() << std::endl;

  std::cout << "push blue" << std::endl;
  Q.push("blue");
  std::cout << "current front of queue -> " << Q.front() << std::endl;

  std::cout << "pop" << std::endl;
  Q.pop();
  std::cout << "current front of queue -> " << Q.front() << std::endl;

  std::cout << "pop" << std::endl;
  Q.pop();
  std::cout << "current front of queue -> " << Q.front() << std::endl;

  std::cout << "pop" << std::endl;
  Q.pop();
  std::cout << "current front of queue -> " << Q.front() << std::endl;

  std::cout << "push green" << std::endl;
  Q.push("green");
  std::cout << "current front of queue -> " << Q.front() << std::endl;

  std::cout << "pop" << std::endl;
  Q.pop();
  std::cout << "current front of queue -> " << Q.front() << std::endl;

  return 0;
}