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

  std::cout << "push_back 0.1" << std::endl;
  V.push_back(0.1);
  printVector(V);

  std::cout << "push_back 0.2" << std::endl;
  V.push_back(0.2);
  printVector(V);

  std::cout << "push_back 0.3" << std::endl;
  V.push_back(0.3);
  printVector(V);

  std::cout << "change 0.3 into 0.4" << std::endl;
  V[2] = 0.4;
  printVector(V);

  std::cout << "insert 0.8" << std::endl;
  V.insert(V.begin() + 2, 0.8);
  printVector(V);

  std::cout << "erase 1st num(0,1,2,3,.......)" << std::endl;
  V.erase(V.begin() + 1);
  printVector(V);

  std::cout << "push_back 0.9" << std::endl;
  V.push_back(0.9);
  printVector(V);

  return 0;
}