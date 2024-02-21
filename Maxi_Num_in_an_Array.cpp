#include <iostream>
#include <limits.h>
using namespace std;

int main(){
  
  int arr[]= {2,3,5,6,11,8,24,34,65,1,4,17,56};
  int size=13;
  int maxi=INT_MIN;
  for(int i=0; i<size; i++){
    if(arr[i] > maxi){
      maxi = arr[i];
    }
  }
  cout << " maximum number is " << maxi << endl;
  return 0;
  
}
