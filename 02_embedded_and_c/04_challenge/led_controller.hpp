#pragma once

class LedController {
public:
  LedController();
  void turnOn();
  void turnOff();
  bool getState();
private:
  bool state;
};
