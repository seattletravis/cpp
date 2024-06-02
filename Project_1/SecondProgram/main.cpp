#include <iostream>

using namespace std;
// using std::cin;
// using std::cout;
// using std::endl;

int add_ints(int a, int b)
{
  return a + b;
}

int main()
{
  string favorite_color;
  cout << "What is your favorite color?";
  cin >> favorite_color;
  cout << "That's my favorite color too!!! " << endl;
  cout << "No really, ";
  cout << favorite_color;
  cout << ", is my favorite color!!!" << endl;

  int a = 100;
  int b = 100;

  int result = add_ints(a, b);

  cout << "Also a + b is equal to: ";
  cout << result;

  return 0;
}