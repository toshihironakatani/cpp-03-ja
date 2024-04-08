#include "led_controller.hpp"
#include <iostream>

int main() {
  LedController led;
  led.turn_on();

  if(led.get()) {
    std::cout << "ON" << std::endl;
  }
  else {
    std::cout << "OFF" << std::endl;
  }

  led.turn_off();
  if(led.get()) {
    std::cout << "ON" << std::endl;
  }
  else {
    std::cout << "OFF" << std::endl;
  }

  return 0;
}
