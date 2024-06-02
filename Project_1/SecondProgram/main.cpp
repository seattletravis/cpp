#include <iostream>

int add_ints(int a, int b)
{
  return a + b;
}

int main()
{
  std::string favorite_color;
  std::cout << "What is your favorite color?";
  std::cin >> favorite_color;
  std::cout << "That's my favorite color too!!! ";
  std::cout << "No really ";
  std::cout << favorite_color;
  std::cout << ", is my favorite color!!!" << std::endl;

  int a = 100;
  int b = 100;

  int result = add_ints(a, b);

  std::cout << "Also a + b is equal to: ";
  std::cout << result;

  return 0;
}