#include <iostream>
using namespace std;

bool checkKey(string& str, int i, int n, char& key){
  if(i >= n){
    return false;
  }
  if(str[i] == key){
    return true;
  }
  int ans = checkKey(str, i+1, n, key);
  return ans;
}
int main(){
  string str = "sudhaagrahari";
  int n = str.length();
  char key = 's';
  int i = 0;
  bool ans = checkKey(str, i, n, key);
  cout<< "answer is: "<< ans <<endl;
  return 0;
}
