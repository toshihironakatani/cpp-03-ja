#include "traffic_light.hpp"
#include "clamp.hpp"
#include <iostream>
#include <thread>

int main() {
  // task 1
  TrafficLightState state{TrafficLightState::red};
  std::cout << trafficLightDuration(state) << std::endl;
  std::cout << "----" << std::endl;

  std::this_thread::sleep_for(std::chrono::seconds(5));

  std::cout << trafficLightDuration(state) << std::endl;
  std::cout << "----" << std::endl;

  // task 2
  std::cout << clamp(1.5, 2.2, 3.3) << std::endl;
  std::cout << clamp(2.5f, 1.2f, 3.3f) << std::endl;
  std::cout << clamp(4, 2, 3) << std::endl;

  return 0;
}
