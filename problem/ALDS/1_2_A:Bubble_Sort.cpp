// ref: https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/2/ALDS1_2_A
#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;

  int R[n];
  for (int i = 0; i < n; i++){
    cin >> R[i];
  }

  int cnt = 0;
  int flag = 1;

  while (flag){
    flag = 0;
    for (int j = n - 1; j > 0; j--){
      if (R[j] < R[j - 1]){
        int tmp = R[j];
        R[j] = R[j - 1];
        R[j - 1] = tmp;
        flag = 1;
        cnt++;
      }
    }
  }

  for (int i = 0; i < n; i++){
    if (i > 0){
      cout << " ";
    }
    cout << R[i];
  }
  cout << endl;

  cout << cnt << endl;
}
