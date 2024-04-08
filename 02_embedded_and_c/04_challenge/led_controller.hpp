#pragma once

class LedController {
public:
  LedController();
  void on();
  void off();
  bool getState();
private:
  bool state = false;
};
