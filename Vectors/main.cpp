#include <iostream>
#include <vector>
using namespace std;


int main(){
vector <int> thresholds {10,20,30};

  cin >> thresholds.at(0) >> thresholds.at(1) >> thresholds.at(2);

  cout << thresholds.size() << endl;  
  for (int i = 0; i < thresholds.size(); i++){
    cout << thresholds[1] << " , " << endl;
  };

  return 0;
}