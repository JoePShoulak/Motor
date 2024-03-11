// MotorController.h
#ifndef MotorController_h
#define MotorController_h

#include <Arduino.h>
#include "Motor.h"

class MotorController
{
public:
  MotorController(Motor leftMotor, Motor rightMotor);

  void begin();
  void stop();

  void setForward();
  void setBackward();

  void setSpeed(int LSpeed, int RSpeed);
  void setSpeed(int speed);

private:
  Motor _leftMotor;
  Motor _rightMotor;
};

#endif