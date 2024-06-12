#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector <char> vowels {'a', 'e', 'i', 'o', 'u'};

  cout << vowels[0] << endl;
  cout << vowels [4] << endl;

  vowels.push_back('y');

  for (int i=0; i<vowels.size(); i++){
    cout << vowels[i]; 
  }


}