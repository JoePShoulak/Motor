#include "MotorController.h"

MotorController::MotorController(Motor leftMotor, Motor rightMotor) : _leftMotor(leftMotor), _rightMotor(rightMotor)
{
}

MotorController::MotorController(int L_EN, int L_IN1, int L_IN2, int R_EN, int R_IN1, int R_IN2) : _leftMotor(L_EN, L_IN1, L_IN2), _rightMotor(R_EN, R_IN1, R_IN2)
{
}

void MotorController::begin()
{
  _leftMotor.begin();
  _rightMotor.begin();
}

void MotorController::stop()
{
  _leftMotor.stop();
  _rightMotor.stop();
}

void MotorController::setForward()
{
  _leftMotor.setForward();
  _rightMotor.setForward();
}

void MotorController::setBackward()
{
  _leftMotor.setBackward();
  _rightMotor.setBackward();
}

void MotorController::setSpeed(int LSpeed, int RSpeed)
{
  _leftMotor.setSpeed(LSpeed);
  _rightMotor.setSpeed(RSpeed);
}

void MotorController::setSpeed(int speed)
{
  this->setSpeed(speed, speed);
}
