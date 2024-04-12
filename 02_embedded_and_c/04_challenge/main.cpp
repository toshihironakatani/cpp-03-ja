#include "led_controller.hpp"
#include <iostream>

int main() {
  LedController led;

  std::cout << std::boolalpha << led.getState() << std::endl;
  led.turnOn();
  std::cout << std::boolalpha << led.getState() << std::endl;
  led.turnOff();
  std::cout << std::boolalpha << led.getState() << std::endl;

  return 0;
}
