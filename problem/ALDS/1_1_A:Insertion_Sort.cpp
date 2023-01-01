#include <iostream>
using namespace std;

int log(int array[], int n)
{
  for (int i = 0; i < n; i++)
  {
    if (i > 0)
    {
      std::cout << " ";
    }
    std::cout << array[i];
  }
  std::cout << std::endl;

  return 0;
}

int main(){
  int n;
  cin >> n;

  int R[n];
  for (int i = 0; i < n; i++){
    cin >> R[i];
  }

  int v;
  int j;
  log(R, n);
  for ( int i = 1; i < n; i++){
    v = R[i];
    j = i - 1;
    while (j >= 0 && R[j] > v){
      R[j + 1] = R[j];
      j--;
    }
    R[j + 1] = v;
    log(R, n);
  }

  return 0;
}
