// ref: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_D
#include <iostream>
#include <algorithm>

static const int MAX = 200000;

int main(){
  int R[MAX], n;

  std::cin >> n;
  for (int i = 0; i < n; i++){
    std::cin >> R[i];
  }

  int max_n = -MAX;
  int min_n = R[0];

  for ( int j = 1; j < n; j++){
    max_n = std::max(max_n, R[j] - min_n);
    min_n = std::min(min_n, R[j]); 
  }

  std::cout << "result: " << max_n << std::endl;

  return 0;
}
