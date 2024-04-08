#pragma once

#include "pressure_sensor.hpp"
#include "units.hpp"

class TirePressure : public PressureSensor {
public:
  TirePressure();
  pressure::psi read() const override;
};
