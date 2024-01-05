#include <iostream>
using namespace std;
int findDuplicate(int arr[], int n){
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      if(arr[i]==arr[j]){
        return arr[i];
      }
    }
  }
}  

int main() {
  int arr[8]={1,2,5,4,6,8,9,9};
  int n=8;
  int ans=findDuplicate(arr,n);
  cout << ans << endl;
  return 0;
}
