#include "cpu_temperature.hpp"
#include "units.hpp"

CPUTemperature::CPUTemperature() {};

temperature::kelvin CPUTemperature::read() const {
  return kelvin;
}
