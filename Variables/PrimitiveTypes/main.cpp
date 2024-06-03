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

  


  return 0;
}