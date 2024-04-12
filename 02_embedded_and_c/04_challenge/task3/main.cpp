#include "led_controller.hpp"
#include <iostream>

void show_state(bool state) {
  if(state) {
    std::cout << "ON" << std::endl;
  }
  else {
    std::cout << "OFF" << std::endl;
  }
}

int main() {
  LedController led;
  show_state(led.getState());
  led.turnOn();
  show_state(led.getState());
  led.turnOff();
  show_state(led.getState());

  return 0;
}
