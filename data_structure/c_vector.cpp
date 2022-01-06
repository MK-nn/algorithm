#include <iostream>
#include <vector>
// c++ の標準ライブラリの vector を使用する

void printVector(std::vector<double> V)
{
  for (int i = 0; i < V.size(); i++)
  {
    std::cout << V[i] << " ";
  }
  std::cout << std::endl;
}

int main()
{
  return 0;
}