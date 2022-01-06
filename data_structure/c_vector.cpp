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
  std::vector<double> V;

  V.push_back(0.1);
  V.push_back(0.2);
  V.push_back(0.3);
  V[2] = 0.4;
  printVector(V);

  V.insert(V.begin() + 2, 0.8);
  printVector(V);
  V.erase(V.begin() + 1);
  printVector(V);

  V.push_back(0.9);
  printVector(V);
  return 0;
}