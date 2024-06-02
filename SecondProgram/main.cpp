#include <iostream>

// Thisis a comment
int main(){
  std::string favorite_color;
  std::cout << "What is your favorite color?";
  std::cin >> favorite_color;
  std::cout << "That's my favorite color too!!! ";
  std::cout << "No really ";
  std::cout << favorite_color;
  std::cout << ", is my favorite color!!!" << std::endl;
  return 0;
}