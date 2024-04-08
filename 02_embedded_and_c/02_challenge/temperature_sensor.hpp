#pragma once

#include "units.hpp"

class TemperatureSensor {
public:
  TemperatureSensor(){};
  virtual temperature::kelvin read() const = 0;

protected:
  temperature::kelvin kelvin{30.0};
};
