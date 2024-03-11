#include "Motor.h"

Motor::Motor(int pinEN, int pinIN1, int pinIN2)
{
  _pinEN = pinEN;
  _pinIN1 = pinIN1;
  _pinIN2 = pinIN2;
}

void Motor::begin()
{
  pinMode(_pinEN, OUTPUT);
  pinMode(_pinIN1, OUTPUT);
  pinMode(_pinIN2, OUTPUT);

  this->setForward();
  this->stop();
}

void Motor::stop()
{
  this->setSpeed(0);
}

void Motor::setDir(bool forward)
{
  digitalWrite(_pinIN1, forward);
  digitalWrite(_pinIN2, !forward);
}

void Motor::setForward()
{
  this->setDir(true);
}

void Motor::setBackward()
{
  this->setDir(false);
}

void Motor::setSpeed(int speed)
{
  analogWrite(_pinEN, speed);
}
