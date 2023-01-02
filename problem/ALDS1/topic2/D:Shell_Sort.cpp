// ref: https: // onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/2/ALDS1_2_D
#include <iostream>
#include <cmath>
using namespace std;

int insertionSort(int array[], int n, int g, int count){
  int v;
  int j;
  for (int i = g; i < n; i++){
    v = array[i];
    j = i - g;
    while (j >= 0 && array[j] > v){
      array[j + g] = array[j];
      j -= g;
    }
    array[j + g] = v;
    count++;
  }

  return count;
}

int sizeG(int n){
  int h = 1;
  int cnt = 1;
  while(h < n){
    h = pow(4, cnt) + 3 * pow(2, cnt - 1) + 1;
    cnt++;
  }

  return cnt;
}

int interval(int n, int G[]){
  int h = 1;
  int cnt = sizeG(n) - 1;
  int i = 1;
  while(h < n){
    G[cnt] = h;
    cnt--;
    h = pow(4, i) + 3 * pow(2, (i - 1)) + 1;
    i++;
  }

  return 0;
}

int printG(int array[], int n)
{
  for (int i = 0; i < n; i++)
  {
    if (i > 0)
    {
      cout << " ";
    }
    cout << array[i];
  }
  cout << endl;

  return 0;
}

int log(int array[], int n){
  for (int i = 0; i < n; i++){
    cout << array[i] << endl;
  }

  return 0;
}

int main(){
  int n;
  cin >> n;

  int R[n];
  for (int i = 0; i < n; i++){
    cin >> R[i];
  }

  int count = 0;

  int m = sizeG(n);
  int G[m];

  interval(n, G);

  for (int i = 0; i < m; i++){
    count = insertionSort(R, n, G[i], count);
  }

  cout << "_________" << endl;

  cout << m << endl;

  printG(G, m);

  cout << count << endl;

  log(R, n);

  return 0;

}