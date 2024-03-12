#ifndef MotorController_h
#define MotorController_h

#include <Arduino.h>
#include "Motor.h"

class MotorController
{
public:
  MotorController(Motor leftMotor, Motor rightMotor);
  MotorController(int L_EN, int L_IN1, int L_IN2, int R_EN, int R_IN1, int R_IN2);

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