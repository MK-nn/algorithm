#include <iostream>
using namespace std;

typedef struct {
    char suit;
    int num;
} Card;

int bubbleSort(Card array[], int n){
  for (int i = 0; i < n; i++){
    for (int j = n - 1; j >= i + 1; j--){
      if (array[j].num < array[j - 1].num){
        Card tmp = array[j];
        array[j] = array[j - 1];
        array[j - 1] = tmp;
      }
    }
  }

  return 0;
}

int selectionSort(Card array[], int n){
  for (int i = 0; i < n; i++){
    int min_j = i;
    for (int j = i; j < n; j++){
      if (array[j].num < array[min_j].num){
        min_j = j;
      }
    }
    Card tmp = array[i];
    array[i] = array[min_j];
    array[min_j] = tmp;
  }

  return 0;
}

int log(Card array[], int n){
  for (int i = 0; i < n; i++){
    if (i > 0){
      cout << " ";
    }
    cout << array[i].suit << array[i].num;
  }
  cout << endl;

  return 0;
}

int isStable(Card a[], Card b[], int n){
  for (int i = 0; i < n; i++){
    if (a[i].num == b[i].num){
      if (a[i].suit != b[i].suit){
        return false;
      }
    }
  }
  return true;
}

int main(){
  int n;
  cin >> n;

  Card R[n];
  for (int i = 0; i < n; i++){
    cin >> R[i].suit >> R[i].num;
  }

  Card S[n];
  for (int i = 0; i < n; i++){
    S[i] = R[i];
  }

  bubbleSort(R, n);
  log(R, n);
  cout << "Stable" << endl;

  selectionSort(S, n);
  log(S, n);
  if (isStable(R, S, n)){
    cout << "Stable" << endl;
  } else {
    cout << "Not stable" << endl;
  }

  return 0;
}
