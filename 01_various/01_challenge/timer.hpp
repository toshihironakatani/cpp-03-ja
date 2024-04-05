#pragma once
#include <chrono>

// コードを入力してください
class Timer {
public:
  Timer();
  ~Timer();
private:
  int* data;
  std::chrono::high_resolution_clock::time_point begin;
  std::chrono::high_resolution_clock::time_point end;
};
