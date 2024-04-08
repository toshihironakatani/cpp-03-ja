#pragma once

template<typename T>
T clamp(T value, T min, T max) {
  if(value < min) {
    return min;
  }
  else if(value > max) {
    return max;
  }
  else {
    return value;
  }
}
