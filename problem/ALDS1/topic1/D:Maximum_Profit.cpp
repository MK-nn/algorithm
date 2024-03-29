// ref: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_D
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int n;
  cin >> n;

  int R[n];
  for (int i = 0; i < n; i++){
    cin >> R[i];
  }

  int maxv = -2000000000;
  int minv = R[0];

  for ( int j = 1; j < n; j++){
    maxv = max(maxv, R[j] - minv);
    minv = min(minv, R[j]); 
  }

  cout << maxv << endl;

  return 0;
}
