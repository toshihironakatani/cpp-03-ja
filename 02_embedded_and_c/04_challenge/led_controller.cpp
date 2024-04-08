#include "led_controller.hpp"

LedController::LedController() {};

void LedController::on() {
  state = true;
}

void LedController::off() {
  state = false;
}

bool LedController::getState() {
  return state;
}
