// コードを入力してください

#include <iostream>

bool allTrue() {
  return true;
}

template<typename T, typename...Args>
bool allTrue(T head, Args... args) {
  return head && allTrue(args...);
}
