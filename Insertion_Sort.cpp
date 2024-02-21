#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>arr{10,1,7,6,14,9};
    int n=arr.size();
    for(int i=1; i<n; i++){
        //Step1
        int val=arr[i];
        //Step2
        int j=i-1;
        for(; j>=0; j--){
            if(arr[j]>val){
                //Step3
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        //Step4
        arr[j+1]=val;
    }
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    cout<< endl;

    return 0;
}
