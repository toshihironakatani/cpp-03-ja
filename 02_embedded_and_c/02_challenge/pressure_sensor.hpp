#pragma once

#include "units.hpp"

class PressureSensor {
public:
  PressureSensor(){};
  virtual pressure::psi read() const = 0;

protected:
  pressure::psi psi{50.0};
};
