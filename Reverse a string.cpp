#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main() {
  string str = "SudhaAgrahari";
  cout << "Before Reversal: " << str;

  reverse(str.begin(), str.end());
  cout<< "\nAfter Reversal: "<< str;
  return 0;
}
