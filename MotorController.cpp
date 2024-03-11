#include "MotorController.h"

MotorController::MotorController(Motor leftMotor, Motor rightMotor)
{
  _leftMotor = leftMotor;
  _rightMotor = rightMotor;
}