#include <iostream>
using namespace std;
void findDuplicates(int arr[], int n){
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break; 
            }
        }
    }
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    findDuplicates(arr,n) ; 
    return 0;
}    
    
