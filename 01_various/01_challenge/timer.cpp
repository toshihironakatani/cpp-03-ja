// コードを入力してください
#include "timer.hpp"
#include <iostream>

Timer::Timer() {
  size_t size = 5;

  std::cout << "Resource acquired." << std::endl;
  data = new int[size];
  begin = std::chrono::high_resolution_clock::now();
}

Timer::~Timer() {
  delete[] data;
  std::cout << "Resource released." << std::endl;
  end = std::chrono::high_resolution_clock::now();

  std::chrono::milliseconds elapsed_time = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
  std::cout << "Elapsed time: " << elapsed_time.count() << " microsecond" << std::endl;
}
