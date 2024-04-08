#include "cabin_temperature.hpp"
#include "units.hpp"

CabinTemperature::CabinTemperature() {};

temperature::kelvin CabinTemperature::read() const {
  return kelvin;
}
