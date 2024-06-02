#include <iostream>

using namespace std;

int add_ints(int a, int b)
{
  return a + b;
}

int main()
{
  std::string favorite_color;
  cout << "What is your favorite color?";
  std::cin >> favorite_color;
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