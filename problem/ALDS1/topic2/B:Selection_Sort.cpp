// ref: https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/2/ALDS1_2_B
#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;

  int R[n];
  for (int i = 0; i < n; i++){
    cin >> R[i];
  }

  int cnt = 0;

  for (int i = 0; i < n; i++){
    int mini = i;
    for (int j = i; j < n; j++){
      if (R[j] < R[mini]){
        mini = j;
      }
    }
    if (i != mini){
      cnt++;
      int tmp = R[i];
      R[i] = R[mini];
      R[mini] = tmp;
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

  return 0;
}
