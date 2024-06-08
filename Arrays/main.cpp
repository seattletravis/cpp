#include <iostream>

using namespace std;

int main(){
  char vowels[] {'a', 'e', 'i', 'o', 'u'};
  cout << "\nThe first vowel is: " << vowels[0] << endl;
  cout << "The last vowel is: " << vowels[4] << endl;

  cout << sizeof(vowels) << endl;

  double hi_temps[] {65.2, 66.6, 89.6};
  hi_temps[0] = 100.4;
  cout << "The temp is now: " << hi_temps[0] << endl;
  cout << "and the low temp: " << hi_temps[2] << endl;

}
