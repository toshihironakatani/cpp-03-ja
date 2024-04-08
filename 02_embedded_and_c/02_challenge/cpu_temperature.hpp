#pragma once

#include "temperature_sensor.hpp"
#include "units.hpp"

class CPUTemperature : public TemperatureSensor {
public:
  CPUTemperature();
  temperature::kelvin read() const override;
};
