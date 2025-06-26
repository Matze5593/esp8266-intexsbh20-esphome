#pragma once

#include "esphome.h"
#include "../../src/esp8266-intexsbh20/PureSpaIO.h"

class PureSpaComponent : public esphome::Component {
 public:
  void setup() override {
    pure_spa_.setup(LANG::EN);
  }

  void loop() override {
    pure_spa_.loop();
  }

 private:
  PureSpaIO pure_spa_;
};
