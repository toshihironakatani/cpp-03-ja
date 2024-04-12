#include "led_controller.hpp"
#include <iostream>

void show_state() {
  if(led_get_state()) {
    std::cout << "ON" << std::endl;
  }
  else {
    std::cout << "OFF" << std::endl;
  }
}

int main() {
  led_init();
  show_state();
  led_on();
  show_state();
  led_off();
  show_state();

  return 0;
}
