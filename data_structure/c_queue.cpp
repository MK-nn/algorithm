#include <iostream>
#include <queue>
#include <string>
// c++ の標準ライブラリの queue を使用する

int main()
{
  std::queue<std::string> Q;

  Q.push("red");
  Q.push("yellow");
  Q.push("yellow");
  Q.push("blue");

  Q.pop();
  Q.pop();
  Q.pop();
  Q.push("green");
  Q.pop();
  return 0;
}