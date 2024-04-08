#include "tire_pressure.hpp"
#include "units.hpp"
#include "cabin_temperature.hpp"
#include "cpu_temperature.hpp"

#include <iostream>

int main() {
  TirePressure tire1;
  std::cout << tire1.read().value << std::endl;

  CabinTemperature cabin1;
  std::cout << cabin1.read().value << std::endl;

  CPUTemperature cpu1;
  std::cout << cpu1.read().value << std::endl;

  return 0;
}
