#include "double_array.h"
#include <array>

int main() {
  std::array<double, 4> myvec{0.1, 0.2, 1.1, 1.5};
  double_array(myvec.data(), myvec.size());

  return 0;
}
