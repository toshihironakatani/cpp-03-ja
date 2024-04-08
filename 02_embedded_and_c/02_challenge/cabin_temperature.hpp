#pragma once

#include "temperature_sensor.hpp"
#include "units.hpp"

class CabinTemperature : public TemperatureSensor {
public:
  CabinTemperature();
  temperature::kelvin read() const override;
};
