#include <iostream>

// working with constants

#include <iostream>

using namespace std;

int main(){

  const string title {"Estimate for carpet cleaning service:"};
  int num_room {2};
  const double per_room {30.0};
  const double tax_rate {0.06};
  const string footer {"This estimate is valid for 30 days"};
  float sub_total {0};
  float tax {0};

  cout << title << endl;
  cout << "\nHow many rooms would you like cleaned: " << endl;
  cin >> num_room;
  cout << "Number of rooms: " << num_room << endl;
  cout << "Price per room: $" << per_room << endl;
  sub_total = num_room * per_room;
  cout << "Subtotal: $" << sub_total << endl;
  tax = sub_total * tax_rate;
  cout << "Tax: $" << tax << endl;

  cout << "==========================================" << endl;

  cout << "Total estimate: $" << sub_total + tax << endl;
  cout << footer << endl;
}