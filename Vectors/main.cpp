#include <iostream>
#include <vector>
using namespace std;


int main(){
vector <int> thresholds {10,20,30};

  thresholds.push_back(25);

  cout << thresholds.size() << endl;  

  // print each value in thresholds,
  for (int i = 0; i < thresholds.size(); i++){
    cout << thresholds[i] << ", " << endl;
  };

  return 0;
}