#include <iostream>

using namespace std;

int main(){
  
  int int1 {5};
  int int2 {10};
  int int3 {20};

  cout << int1 << " " << int2 << " " << int3 << endl;
  int sum {0};
  sum = int1 + int2 + int3;

  cout << sum << endl;

  
  return 0;
}