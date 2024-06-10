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
  cout << "all the temps " << hi_temps[1];

  int test_scores[5];

  cout << "\nFirst score at index 0: " << test_scores[0] << endl;
  cout << "Second score at index 1: " << test_scores[1] << endl;
  cout << "Third score at index 2: " << test_scores[2] << endl;
  cout << "Fourth score at index 3: " << test_scores[3] << endl;
  cout << "Fifth score at index 4: " << test_scores[4] << endl;


}
