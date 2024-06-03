#include <iostream>

using namespace std;

int main(){

  char middle_initial {'J'};
  cout << "My middle initial is: " << middle_initial << endl;

  // short int max = 32,767
  unsigned short int exam_score {55};
  cout << "My exam score is: " << exam_score << endl;

  // int and long are the same max value for some reason
  int countries_represented {65};
  cout << "There are: " << countries_represented << " countries represented" << endl;

  // long max = ~2.15 x 10^8 (double if unsigned)
  long florida_population {20'610'000};
  cout << "There are: " << florida_population << " people in Florida" << endl;

  // long long max = ~9.22 x 10^18 (double if unsigned)
  long long earth_population {7'600'000'000};
  cout << "There are: " << earth_population << " people on planet earth!" << endl;

  long long dist_to_centauri {9'461'000'000'000};
  cout << "Distance to Alpha Centauri: " << dist_to_centauri << " KM!" << endl;


  /**********************
  * Floating point types
  *********************/

  float car_payment {401.23};
  cout << "Car Payment: $" << car_payment << endl;

  double pi {3.141592654};
  cout << "Pi to the 9th decimal place: " << pi << endl;

  long double large_amount {2.7e120};
  cout << "Very large number: " << large_amount << endl;

  /**********************
  * Boolean type
  *********************/

  bool game_over {true};
  cout << "Game Over: " << game_over << ", aka, ";

  if (game_over){ 
    cout << "true" << endl;
  }else{
    cout << "false" << endl;
  }

  /**********************
  * Overflow example
  *********************/

  short value1 {2000};
  short value2 {30000};
  short product {value1 * value2};

  cout << "The product of " << value1 << " & " << value2 << " is " << product << endl;

  cout << "Previous Line - Overflow Error on product calculation" << endl;

  return 0;
}