// コードを入力してください
#pragma once
#include <iostream>

int total = 0;

int sum() {
  int ret = total;
  total = 0;
  return ret;
}


template <typename T, typename...Args>
int sum(const T& value, const Args&... args) {
  total += value;
  return sum(args...);
}

