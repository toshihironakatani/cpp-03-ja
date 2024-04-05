// コードを入力してください
#include "unique_ptr.hpp"

#include <iostream>

int main() {

  unique_int_ptr ptr1(1);
  std::cout << *ptr1.get() << std::endl;

  std::cout << *ptr1.release() << std::endl;

  std::cout << ptr1.get() << std::endl;

  unique_int_ptr my_int(3);
  std::cout << *my_int << std::endl;

  unique_ptr<int> ptr2(5);
  std::cout << *ptr2 << std::endl;

  return 0;
}
