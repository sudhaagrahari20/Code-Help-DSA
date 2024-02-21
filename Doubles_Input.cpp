#include <iostream>
using namespace std;

int main() {
  int arr[500];
  int n;
  cout << " how many no: you want to add in array "<< endl;
  cin >> n;
  cout << " enter the numbers "<< endl;
  for(int i=0; i<n; i++){
    cin >> arr[i];
    cout << " Doubles: ";
    for(int i=0; i<n; i++){
      cout<< 2*arr[i]<< " ";
    }
  }
  return 0;
}
