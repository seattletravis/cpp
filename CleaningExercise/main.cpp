#include <iostream>

// working with constants

#include <iostream>

using namespace std;

int main(){

  const string title {"Estimate for carpet cleaning service:"};
  int num_room {2};
  const int per_room {30};
  const float tax_rate {0.06};
  float tax {0};
  const string footer {"This estimate is valid for 30 days"};
  cout << title << endl;
  cout << "\nHow many rooms would you like cleaned: " << endl;
  cin >> num_room;
  cout << "Number of rooms: " << num_room << endl;
  cout << "Price per room: $" << per_room << endl;
  cout << "Cost: $" << num_room * per_room << endl;
  tax = num_room * per_room * tax_rate;
  cout << "Tax: $" << tax << endl;

  cout << "==========================================" << endl;

  cout << "Total estimate: $" << num_room * per_room + tax << endl;
  cout << footer << endl;
}