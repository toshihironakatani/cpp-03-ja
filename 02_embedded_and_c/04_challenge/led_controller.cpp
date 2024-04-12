#include "led_controller.hpp"

LedController::LedController() {
  state = false;
};

void LedController::turnOn() {
  state = true;
}

void LedController::turnOff() {
  state = false;
}

bool LedController::getState() {
  return state;
}
