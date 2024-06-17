#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector <char> vowels {'a', 'e', 'i', 'o', 'u'};

  cout << vowels[0] << endl;
  cout << vowels [4] << endl;

  vowels.push_back('y');

  for (int i=0; i<vowels.size(); i++){
    cout << vowels[i] << " "; 
  }
  cout << endl;

  vector <int> test_scores {100, 98, 89};

  cout << "\nTest Scores using array syntax: " << endl;
  cout << test_scores[0] << endl;
  cout << test_scores[1] << endl;
  cout << test_scores[2] << endl;

  // vector syntax
  cout << "\nTest Scores using vector syntax: " << endl;
  cout << test_scores.at(0) << endl;
  cout << test_scores.at(1) << endl;
  cout << test_scores.at(2) << endl;

  cout << "\nThere are " << test_scores.size() << " scores in the vector!" << endl;

  int score_to_add{60};

  test_scores.push_back(score_to_add);

  cout << "\nadded a test score! " << endl;

  cout << "\nThere are " << test_scores.size() << " scores in the vector!" << endl;

  vector <vector<int>> movie_ratings
  {
    {1,2,3,400},
    {4,4,4,4},
    {4,4,4,3}
  };

  cout << movie_ratings[0][3] << endl;


}