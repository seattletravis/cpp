#include <iostream>

// working with constants

#include <iostream>

using namespace std;

int main(){

  const string title {"Welcome to Franks, estimate calculator for carpet cleaning service:"};
  int small_num_room {0};
  int large_num_room {0};
  const double small_per_room {25.0};
  const double large_per_room {35.0};

  const double tax_rate {0.06};
  const string footer {"This estimate is valid for 30 days"};
  float sub_total {0};
  float tax {0};

  cout << title << endl;
  cout << "\nHow many small rooms would you like cleaned: ";
  cin >> small_num_room;
  cout << "How many large rooms would you like cleaned: ";
  cin >> large_num_room;
  // cout << "Number of rooms: " << num_room << endl;
  cout << "Price per small room: $" << small_per_room << endl;
  cout << "Price per large room: $" << large_per_room << endl;

  sub_total = small_num_room * small_per_room + large_num_room * large_per_room;
  cout << "Subtotal: $" << sub_total << endl;
  tax = sub_total * tax_rate;
  cout << "Tax: $" << tax << endl;

  cout << "==========================================" << endl;

  cout << "Total estimate: $" << sub_total + tax << endl;
  cout << footer << endl;
}