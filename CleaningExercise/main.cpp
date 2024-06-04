#include <iostream>

// working with constants

#include <iostream>

using namespace std;

int main(){

  const string title {"Estimate for carpet cleaning service:"};
  const int num_room {2};
  const int per_room {30};
  const float tax_rate {3.60};
  const string footer {"This estimate is valid for 30 days"};
  cout << title << endl;
  cout << "Number of rooms: " << num_room << endl;
  cout << "Price per room: $" << per_room << endl;
  cout << "Cost: $" << num_room * per_room << endl;
  cout << "Tax: $" << tax_rate << endl;

  cout << "==========================================" << endl;

  cout << "Total estimate: $" << num_room * per_room + tax_rate << endl;
  cout << footer << endl;
}