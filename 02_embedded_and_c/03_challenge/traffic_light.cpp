#include "traffic_light.hpp"
#include <chrono>
#include <iostream>

int trafficLightDuration(TrafficLightState current_state) {
  static TrafficLightState last_state;
  static std::chrono::system_clock::time_point begin = std::chrono::system_clock::now();;

  std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
  if (current_state != last_state) {
    begin = std::chrono::system_clock::now();
  }
  last_state = current_state;

  return std::chrono::duration_cast<std::chrono::seconds>(now - begin).count();
}
