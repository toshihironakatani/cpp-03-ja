// コードを入力してください
#include "templates.hpp"
#include <iostream>



int main() {
  int result = sum(2, 4);
  std::cout << "sum: " << result << std::endl;

  result = sum(2, 4, 6, 12, 24);
  std::cout << "sum: " << result << std::endl;

  return 0;
}
