// MotorController.h
#ifndef MotorController_h
#define MotorController_h

#include <Arduino.h>
#include "Motor.h"

class MotorController
{
public:
  MotorController(Motor leftMotor, Motor rightMotor);

private:
  Motor _leftMotor;
  Motor _rightMotor;
};

#endif