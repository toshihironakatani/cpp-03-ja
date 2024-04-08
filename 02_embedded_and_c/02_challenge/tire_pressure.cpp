#include "tire_pressure.hpp"
#include "units.hpp"

TirePressure::TirePressure() {};

pressure::psi TirePressure::read() const {
  return psi;
}
